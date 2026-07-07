#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main(void){
    int SIZE = 5000;
    long long ugly[SIZE];
    int pos = 0;
    long long LIMIT = 2000000000LL;
    for (long long i=1; i<LIMIT && pos < SIZE; i=i*2){
        for (long long j = 1; i*j<LIMIT && pos < SIZE; j=j*3){
            for (long long k = 1; i*j*k < LIMIT && pos < SIZE; k= k*5){
                ugly[pos] = i*j*k;
                pos ++;
            }
        }
    }
    sort(ugly, ugly+pos);
    
    int num;
    while (cin >> num){
        if (num == 0){
            break;
        }
        cout << ugly[num-1]<<endl;
    }
    return 0;
}
