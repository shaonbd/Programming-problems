#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    int total = 0;
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
            for(j=0;j<b;j++)
            {
                scanf("%d",&c);
                if(c>0){
                total = total + c;
                }
            }
            printf("Case %d: %d\n",i,total);
            total = 0;
    }
    return 0;
}
