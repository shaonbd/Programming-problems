
#include<algorithm>
#include<iostream>
#include<iterator>
#include<cassert>
#include<sstream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<complex>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<deque>
#include<list>
#include<set>
#include<map>

#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)

#define ft first
#define se second
#define r(input) freopen("input.txt","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define sort(v) sort(v.begin(),v.end())
#define un(v) sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define cover(a,d) memset(a,d,sizeof(a))

using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int l=s.size();
        int c=0,Max=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]==' ')
            c++;
            else
            {
                if(Max<c)
                Max=c;
                c=0;
            }
        }
        c=0;
        while(Max!=1)
        {
            Max=(Max/2)+(Max%2);
            c++;
        }
        pf("%d\n",c);

    }
    return 0;
}
