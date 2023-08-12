//problem_url : https://codeforces.com/problemset/problem/282/A
#include<stdio.h>
int main()
{
    int op_num=0,x=0;
    char statement[4];
    scanf("%d",&op_num);
    for(int i=0;i<op_num;i++)
    {
        scanf("%s",statement);
        if(statement[1]=='+')
        x++;
        else
        x--;
    }
    printf("%d",x);
}