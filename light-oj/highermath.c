#include<stdio.h>
int main()
{
    int n, i=0;
    int a,b,c;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d %d", &a, &b, &c);
        printf("Case %d: ", ++i);
        if((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a))
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
