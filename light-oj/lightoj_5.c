#include<stdio.h>
int main()
{
    int t,i,m,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&m,&n);
        if((m*n)%2==0)
        printf("Case %d: %d",i,(m*n)/2);
        else if((m*n)%2==1)
        printf("Case %d: %d",i,((m*n)/2)+1);
    }
    return 0;
}
