#include<iostream>
using namespace std;
int main()
{
    long long int b,c;
    int a,count=0;;
    cin >> a >> b;
    for(int i = 0 ; i < a ; i++)
    {
        cin >> c;
        if(c%b==0)
        count++;
    }
    cout << count;
    return 0;
}
