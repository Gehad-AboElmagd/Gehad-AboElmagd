// problem_url : https://codeforces.com/problemset/problem/339/A
#include<stdio.h>
int main()
{
    char sum[100];
    scanf("%s",sum);
    int i=0;
    char c=sum[0];
    int count1=0,count2=0,count3=0;
    do{
        if(c=='1')
        count1++;
        else if (c=='2')
        count2++;
        else if(c=='3')
        count3++;
        i+=2;
        c=sum[i];
    }while(c=='1' || c=='2' || c=='3');

    for(int j=0;j<count1;j++)
    sum[j*2]='1';

    for(int j=count1;j<(count1+count2);j++)
    sum[j*2]='2';

    for(int j=(count1+count2);j<(count1+count2+count3);j++)
    sum[j*2]='3';

    printf("%s",sum);
}