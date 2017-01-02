#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int sum = 0,j=0;
    char s[10000];

    while(cin>>s){
    if(!strcmp(s, "Hajj"))
    cout << "Case " << ++j << ": Hajj-e-Akbar" << endl;
    else if(!strcmp(s, "Umrah"))
    cout << "Case " << ++j << ": Hajj-e-Asghar" << endl;
    if(!strcmp(s, "*"))
    break;
    }

    return 0;
}

