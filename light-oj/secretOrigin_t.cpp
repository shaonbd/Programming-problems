#include <iostream>

using namespace std;

int* toBinary(unsigned dec);
int toDec(int* binay);

int main(){
    int numOfCase;
    cin >> numOfCase;
    for(int caseControl = 1; caseControl <= numOfCase; caseControl++)
    {
        int *bin, input,numOfzero = 0, numOfone = 0;
        cin >> input;
        bin = toBinary(input);

        int one = -1, zero = -1, two = -1;

        for(int i = 0; i < 32; i++){
            if(bin[i] == 1 && one == -1)
                one = i;

            if(bin[i] == 0 && zero == -1 && one != -1){
                zero = i;
                break;
            }

            if(bin[i] == 0 && one == -1)
                numOfzero++;
        }

            bin[zero] = 1;
            bin[zero -1] = 0;
                while(numOfzero--){
                    for(int i = 0; i <= zero -2; i++){
                        bin[i] = bin[i+1];
                    }
                    bin[zero - 2] = 0;
                }

        cout<<"Case "<<caseControl<< ": " <<toDec(bin)<<endl;


        delete[] bin;
    }
    return 0;
}
int* toBinary(unsigned dec){
    int *binary = new int[32];
    for(int i = 0; i < 32; i++){
        binary[i] = dec%2;
        dec /= 2;
    }
    return binary;
}

int toDec(int* binay){
    int dec = 0, tows = 2;
    for(int i = 1; i < 32; i++){
        dec += binay[i] * tows;
        tows *= 2;
    }

    return  dec + binay[0];
}
