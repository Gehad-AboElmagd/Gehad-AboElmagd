//problem url : https://codeforces.com/problemset/problem/158/A
#include<stdio.h>
int main()
{
    int total=0,place=0;
    scanf("%d %d",&total,&place);
    int player_score[total];
    int count=0;
    for(int i=0; i<total; i++)
    {
        scanf("%d",&player_score[i]);
    }
    for(int i=0;i<total;i++)
    {
        if(player_score[i]!=0 && player_score[i]>=player_score[place-1])
        count++;
    }
    printf("%d",count);
}