#include <iostream>
#include <math.h>
using namespace std;

int qs(string str){
    int qs = 0;
    for (int i=0; i<str.length(); i++){
        int val;
        if (str[i] == ' '){
            val = 0;
        } else {
            val = (str[i] - 'A' + 1) * (i+1);
        }
        qs += val;
    }
    return qs;
}

int main(void){
    string str;
    getline(cin, str);
    while (str != "#"){
        cout << qs(str) <<"\n";
        getline(cin, str);
    }
}
