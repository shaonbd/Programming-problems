#include<stdio.h>
int main()
{
int cases, i=0, n, num_of_one;
scanf("%d", &cases);
while(cases--)
{
    scanf("%d", &n);
    num_of_one=0;
        while(n>0)
            {
                if(n%2==1)
                num_of_one++;
                n/=2;
            }
    printf("Case %d: ", ++i);
    if( num_of_one%2)
    printf("odd\n");
    else
    printf("even\n");
}
return 0;
}
