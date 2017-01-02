#include<stdio.h>
int main()
{
    int n,i,t;
    scanf("%d",&t);
    if(t<=25&&t>0)
    {
    for(i=0;i<t;i++)
    {
        scanf("%d\n",&n);
        if(n>=0&&n<=20)
        {
        printf("%d %d",i,n-i);
        }
    }
    }
    return 0;
}
