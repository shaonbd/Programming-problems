#include<stdio.h>

int main()
{
int a,n,b,i=0;
scanf("%d",&a);
while(i<a)
{
scanf("%d",&n);
b=n/2;
if(n>10)
printf("%d %d\n",b,n-b);
else printf("0 %d\n",n);
i++;
}

return 0;
}
