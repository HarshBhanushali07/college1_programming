#include <stdio.h>

struct player {
    char name[25];
    char team[50];
    int age;
    struct score 
	{
        int m1;
        int m2;
        int m3;
    }s[3];
};

int main() 
{
    int n, i, j;
    printf("Enter No. Of Players: ");
    scanf("%d", &n);
    struct player p[n];
    
    for (i=0;i<n;i++)
	{
        printf("Enter player %d details:\n",i+1);
        
        printf("Name: ");
        scanf("%s",p[i].name);
        
        printf("Team Name: ");
        scanf("%s",p[i].team);
        
        printf("Age: ");
        scanf("%d",&p[i].age);
        
        for (j=0;j<3;j++) 
		{
            printf("Enter Match %d score: ", j+1);
            scanf("%d", &p[i].s[j].m1);
        }
    }
    
    return 0;
}

