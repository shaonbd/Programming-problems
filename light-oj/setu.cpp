#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int t, i=0, k, sum, n;
char s[20];
cin>>t;
while(t--)
{
sum=0;
cin>>n;
cout<<"Case "<<++i<<":"<<endl;
while(n--)
{
cin>>s;
if(!strcmp(s, "donate"))
{
cin>>k;
sum+=k;
}
else
{
cout<<sum<<endl;
}
}
}
return 0;
}
