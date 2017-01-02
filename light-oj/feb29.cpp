#include <iostream>
#include <map>
using namespace std;
int main()
{
    map <string, int> month;
    month["January"] = 0;
    month["February"] = 1;
    month["March"] = 2;
    month["April"] = 3;
    month["May"] = 4;
    month["June"] = 5;
    month["July"] = 6;
    month["August"] = 7;
    month["September"] = 8;
    month["October"] = 9;
    month["November"] = 10;
    month["December"] = 11;
    int srtDay, srtYear,endDay, endYear, numOfIn, yCount =0;
    string srtMonth, endMonth, __trush;
    cin >> numOfIn;
    for (int cases = 1; cases <= numOfIn; cases++)
    {
        cin >> srtMonth >> srtDay >> __trush >> srtYear;

        if(month[srtMonth]>1)
        ++srtYear;
        cin >> endMonth >> endDay >> __trush >> endYear;

        if(month[endMonth] < 1 || (month[endMonth] == 1 && endDay < 29))
         --endYear;

         yCount = endYear / 4 - (srtYear - 1) / 4;
         yCount -= endYear / 100 - (srtYear - 1) / 100;
         yCount += endYear / 400 - (srtYear - 1) / 400;
         cout << "Case " << cases << ": " << yCount << endl;
    }
    return 0;
}
