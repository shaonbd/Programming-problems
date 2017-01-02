#include<stdio.h>
int main()
{
    int n, i=0;
    long int  w, m;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%ld", &w);
        printf("Case %d: ", ++i);
        if(w%2)
        printf("Impossible\n");
        else
        {
            m=1;
            while(!(w%2))
            {
                m*=2;
                w/=2;
            }
            printf("%ld %ld\n", w, m);
        }
    }
    return 0;
}
