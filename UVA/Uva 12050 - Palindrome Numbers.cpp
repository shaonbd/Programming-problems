#include<iostream>

using namespace std;



void palindrome()
{
    pal[1]=9;
    pal[2]=9;
    ll range=18;
    for(int len=3;len<mx;len=len+2)
    {
        pal[len]=pal[len-1]*10;
        pal[len+1]=pal[len];
        range+=2*pal[len];
        if(range>2000000000)
        break;
    }
}

int main()
{
    palindrome();
    ll n;
    while(sll(n))
    {
        if(n==0) break;
        vector<int>v;
        for(int i=1;i<=mx;i++)
        {

            if(n<=pal[i])
            {
                int m;
                if(i%2)
                m=(i+1)/2;
                else
                m=i/2;

                for(int j=0;j<m;j++)
                {
                    int first=1;
                    if(j!=0)
                    first=0;
                    for(int k=first;k<=9;k++)
                    {
                        ll p=1;
                        for(ll pr=1;pr<m-j;pr++)
                        {
                            p*=10;
                        }
                        if(n<=p)
                        {
                            v.pb(k);
                            break;
                        }
                        else
                        n=n-p;
                    }
                }
                int last=v.size();

                if(i%2==1) last--;

                for(int l=last-1;l>=0;l--)
                    v.pb(v[l]);
                break;
            }
            else
            n=n-pal[i];
        }
        int s=v.size();

        for(int i=0;i<s;i++)
        pf("%d",v[i]);
        puts("");
    }
    return 0;
}
