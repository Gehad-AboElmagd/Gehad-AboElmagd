//problem_url : https://codeforces.com/problemset/problem/263/A
#include<stdio.h>
int main (void)
{
    int i,j;
    int element;
    int x=0,y=0;
    for(int index_i=0;index_i<5;index_i++)
    {
        for(int index_j=0;index_j<5;index_j++)
        {
            scanf("%d",&element);
            if(element==1)
            {
                i=index_i; 
                j=index_j;
            }
        }
    }
    i+=1;
    j+=1;
    if(i>3)
    x=i-3;
    else
    x=3-i;
    if(j>3)
    y=j-3;
    else
    y=3-j;
    printf("%d",x+y);
}