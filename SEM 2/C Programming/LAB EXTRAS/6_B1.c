//6_3
/*De..ne a structure called Players which describe details like p_name, team, score, average. Write a program to read data for
N players and arrange p_name in alphabetical order.*/

#include <stdio.h>
#include <string.h>

struct Players 
{
    char p_name[50];
    char team[50];
    int score[3]; // Change from int to int array
    float average;
};

int main() {
    int n, i, j;
    printf("Enter the number of players: ");
    scanf("%d", &n);

    struct Players players[n];

    for (i = 0; i < n; i++) {
        printf("Enter player name: ");
        scanf("%s", players[i].p_name);
        printf("Enter team name: ");
        scanf("%s", players[i].team);
        printf("Enter Player %d Scores for 3 Matches: ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &players[i].score[j]); // Correct variable name
            players[i].average += players[i].score[j]; // Correct variable name
        }
        players[i].average /= 3;
    }


    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(players[i].p_name, players[j].p_name) > 0) {
                struct Players temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
    printf("\nPlayers sorted in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("Player name: %s\n", players[i].p_name);
        printf("Team: %s\n", players[i].team);
        printf("Score: %d\n", players[i].score[0]); // Display the first score
        printf("Average: %.2f\n\n", players[i].average);
    }
}

