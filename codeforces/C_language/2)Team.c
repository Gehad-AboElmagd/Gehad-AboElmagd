//problem_url : https://codeforces.com/problemset/problem/71/A
#include<stdio.h>
int main()
{
    int num=0;
    int problems=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        int state=0,count=0;
        for(int j=0;j<3;j++)
        {
            scanf("%d",&state);
            if(state==1)
            count++;
        }
        if(count>1)
        problems++;
    }
    printf("%d",problems);
}