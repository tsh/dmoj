#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;



int main(void){
    int arr[26] = {0};
    for (int i=0; i<4; i++){
        string raw;
        getline(cin, raw);
        for (char c: raw){
            if (isalpha(c)){
                arr[c-'A'] += 1;
            }
        }
    }

    int maxc = *max_element(arr, arr+26);
    for (int level=maxc; level>0; level--){
        string line = "";
        for (int j=0; j<26; j++){
            if (arr[j] >= level){
                line += "* ";
            } else {
                line+="  ";
            }
        }
        while (!line.empty() && line.back() == ' '){
            line.pop_back();
        }
        cout<<line<<endl;
    }
    for (int i='A'; i<='Z'; i++){
        cout<<char(i);
        if (i<'Z'){
            cout<<' ';
        }
    }
    cout<<endl;
    return 0;
}
