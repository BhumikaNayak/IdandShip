//id and ship solution
#include<stdio.h>
int main()
{
    int Testcases;
    scanf("%d\n",&Testcases);
    char Ch;
    for( int i=0;i<Testcases;i++ )
    {
        scanf("%c\n",&Ch);
        if(Ch=='B' || Ch=='b')
        {
        printf("BattleShip\n");
        }
        else if(Ch=='C' || Ch=='c')
        {
        printf("Cruiser\n");
        }
        else if(Ch=='D' || Ch=='d')
        {
        printf("Destroyer\n");
        }
        else if (Ch=='F' || Ch=='f')
        {
        printf("Frigate\n");
        }
    }
    return 0;
}
//Code By Bhumika Nayak