#include<stdio.h>
int main()
{
    int a[5][5]={{1,4,5,16,17},{2,3,6,15,18},{9,8,7,14,19},{10,11,12,13,20},{25,24,23,22,21}};
    int row,col,t,i,s;
    for (row = 0; row < 5; row++)
    {
	  for (col = 0; col < 5; col++)
        {
            printf("%d\t",a[row][col]);
        }
        printf("\n\n");
    }
    scanf("%d",&t);
    if(t<=200)
    {
    for(i=1;i<=t;i++)
    {
        scanf("%d",&s);
            if(s==a[row][col])
                {
                    printf("Case %d: %d %d",i,col,row);
                }
    }
    }
    return 0;
}

