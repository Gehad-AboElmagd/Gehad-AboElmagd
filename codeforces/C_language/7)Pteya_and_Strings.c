// problem_url : https://codeforces.com/problemset/problem/112/A
#include<stdio.h>
int main()
{   // checking for difference between two upper and lower cases for the same letter
    // char c1='b',c2='B';
    // printf("%d %d %d",c1,c2,c1-c2);  //prints 32
    char string1[100],string2[100];
    scanf("%s %s",string1,string2);
    char c=string1[0];
    int i=0;
    while(c!='\0')
    {
        if(string1[i]>=97)
        string1[i]-=32;
        if(string2[i]>=97)
        string2[i]-=32;
        i++;
        c=string1[i];
    }
    int j=0;
    while(j<i && (string1[j]-string2[j])==0)
    {
        j++;
    }
    if((string1[j]-string2[j])>0)
    printf("1");
    else if ((string1[j]-string2[j])<0)
    printf("-1");
    else
    printf("0");
}