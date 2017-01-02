#include<stdio.h>
int main()
{
    int t,a,b,i;
    scanf("%d",&t);
    if(t<=125)
    {
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        printf("Case %d: %d\n",i,a+b);
    }
    }
    return 0;
}
