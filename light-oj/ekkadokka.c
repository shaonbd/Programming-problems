#include<stdio.h>
int main()
{
    int T,t,i,j,n,m,N,a,b;
    int count = 0,add=0;;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            if(i%2==1)
            {
                n=i;
                for(j=0;j<N;j++)
                {
                    if(j%2==0)
                    {
                        m=j;
                        if(n*m==N)
                        {
                           a=n;
                           b=m;
                           add=1;
                           break;
                        }
                        else
                        count++;
                    }
                }
            }
            if(add==1)
            count = 0;
        }
        if(count==0){
        printf("Case %d: %d %d\n",t,a,b);
        add=0;
        }
        if(count>0){
        printf("Case %d: Impossible\n",t);
        n=0,m=0;
        count=0;
        }
    }
    return 0;
}
