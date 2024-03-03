#include <stdio.h>

struct players {
    char P_name[50];
    char team[50];
    int score[3];
    float average;
};

void main() 
{
	 printf("%s",__TIME__);
    struct players player[3];
    int i, j;

    for (i = 0; i < 3; i++) 
	{
        printf("Enter Player %d name: ", i + 1);
        scanf("%s", player[i].P_name);
        printf("Enter Player %d Team: ", i + 1);	
        scanf("%s", player[i].team);
        printf("Enter Player %d Scores for 3 Matches: ", i + 1);
        for (j = 0; j < 3; j++)
		{
            scanf("%d", &player[i].score[j]);
            player[i].average += player[i].score[j];
        }
        player[i].average /= 3;
    }

    printf("\nPlayer Details:\n");
    for (i = 0; i < 3; i++) 
	{
        printf("Player %d\nname: %s\nTeam: %s\nAverage Score: %.2f\n\n", i + 1, player[i].P_name, player[i].team, player[i].average);
    }   
    
    printf("%d",__TIME__);
}
