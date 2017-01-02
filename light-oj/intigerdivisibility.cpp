#include<iostream>
using namespace std;
int main()
{
    int a,test;
    long long int c=0;
    long long int b = 1;
    int count =1;
    cin >> test >> a;
    c = a;
    for(int i = 0 ; i<100 ;i++)
    {
        b = b * 10;
        c = (b*a) + c;
        count++;
        if(c%test==0){
        cout << count;
        break;
        }
    }
    return 0;
}
