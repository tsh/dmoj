#include <iostream>
#include <math.h>
using namespace std;

int sumBase(int n, int base){
    int res = 0;
    while (n>0){
        res += n%base;
        n /= base;
    }
    return res;
};


int main(void){
    for (int i=1000; i<=9999; i++){
        if (sumBase(i, 10) == sumBase(i, 12) && sumBase(i, 12) == sumBase(i, 16))
            cout<<i<<endl;        
    }
}
