#include <stdio.h>
struct Player {
    char p_name[50];
    char team[50];
    int scores[3];
    float average;
};

void main() {
    struct Player players[3];
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("Enter player %d name: ", i + 1);
        scanf("%s", players[i].p_name);
        printf("Name: %s\n", players[i].p_name);

        printf("Enter player %d team: ", i + 1);
        scanf("%s", players[i].team);
        printf("Team: %s\n", players[i].team);

        players[i].average = 0; // Initialize average

        for (j = 0; j < 3; j++) {
            printf("Enter score %d for player %d: ", j + 1, i + 1);
            scanf("%d", &players[i].scores[j]);
            players[i].average += players[i].scores[j];
        }

        players[i].average /= 3; // Calculate average

        printf("Average score for player %d: %.2f\n", i + 1, players[i].average);
    }
}

