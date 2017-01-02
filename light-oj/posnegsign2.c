#include<stdio.h>
int main()
{
int cases,i=0;
scanf("%d",&cases);
while(cases--)
{
long long int n,m;
scanf("%lld %lld",&n,&m);
printf("Case %d: %lld\n",++i,(n*m)/2);
}
return 0;
}
