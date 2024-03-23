/*C program to design flying characters Screen Saver.*/

#include <stdio.h>
#include <termios.h> // Uncomment this line
#include <unistd.h>
#include <fcntl.h>

/*will return character based on passed number*/
char getCHAR(int n)
{
    char ok[] = "~!@#$%^&*:;'\",{}|<>=";
    return ok[n];
}

/*function to identify that any key hit by the keyboard*/
int kbhit(void)
{
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

/*move cursor on specified position on screen*/
void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

int main(void)
{
    int x, y;
    long int i, j;
    i = j = 0;

    x = 1;
    y = 20;
    system("clear");

    /*program will run until any key hit*/
    while (!kbhit()) {
        x = rand() % ((150 - 1 + 1) + 1);
        y = rand() % ((50 - 1 + 1) + 1);
        gotoxy(x, y);
        printf("%c", getCHAR(rand() % ((20 - 1 + 1) + 1)));
        fflush(stdout);
        ++i;
        if (i == 10000) {
            ++j;
            i = 0;
        }
        if (j == 100000) {
            i = 0;
        }
        if (j <= 100)
            usleep(30000);
        if (j <= 1000)
            usleep(3000);
        if (j <= 10000)
            usleep(300);
    }
    return 0;
}

