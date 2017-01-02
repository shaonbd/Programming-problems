#include<stdio.h>
int main()
{
    int T,i,j,n,m,total=0,result=0;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&n,&m);
        if(n%(2*m)==0)
        {
            for(j=1;j<=n;j++)
            {
                if(j<=m)
                total = total + j;
                else if(j>m)
                result = result + j;
                printf("Case %d: %d\n",i,result-total);
            }
        }

    }
    return 0;
}
