 #include<stdio.h>
 int main()
 {
    int t, i=0, m, x, y, x1, y1, x2, y2;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &m);
        printf("Case %d:\n", ++i);
        while(m--)
        {
            scanf("%d %d", &x, &y);
            if((x>x1 && x<x2) && (y>y1 && y<y2))
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
 }
