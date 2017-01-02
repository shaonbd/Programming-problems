#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<string> nam;
    list<int> vol;
    int t,p;
    int a,b,c;
    int value = 0,max = 0,min = 0,polapan = 0;
    string n,thf,bokchod;
    cin >> t;
    for(int i = 1; i <= t ;i++)
    {
        cin >> p;
        for(int j = 0 ; j< p ; j++)
        {
            cin >> n >> a >> b >> c;
            nam.push_back(n);
            vol.push_back(a*b*c);
        }
        while(nam.size()>0)
        {
            value = vol.front();
            if(max==0 && min==0){
            max = value;
            min = value;
            polapan = value;
            }
            if(value > max){
                max = value;
                thf = nam.front();
            }
            else if(value < max && value < polapan){
                min = value;
                bokchod = nam.front();
            }
        nam.pop_front();
        vol.pop_front();
        }
        if(max==min){
        cout << "Case " << i << ": " << "no thief" << endl;
        max = 0;
        min = 0;
        }
        else if (max>min){
        cout << "Case " << i << ": " << thf << " took choclate from " << bokchod << endl;
        max = 0;
        min = 0;
        }
    }

}
