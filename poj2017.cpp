#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;


int main(void){
    int n = 0;
    while (cin>>n && n > 0){
        int res = 0, last=0;
        for (int i=0; i<n; i++){
            int speed=0, time=0;
            cin >> speed >> time;
            res += (time-last) * speed;
            last = time;
        }
        cout << res << " miles"<<endl;
    }
}
