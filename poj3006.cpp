#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
using namespace std;


bool isPrime(int num){
    if (num < 2) return false;
    for (int i=2; i * i <= num; i++){
        if (num % i == 0)
            return false;
    }
    return true;
}

int main(void){
    int a,d,n;
    while (cin >> a >> d >> n){
        if (a== 0 && d==0 && n==0)
            break;
        int cnt = 0, m;
        for (m=a; cnt<n; m+=d){
            if (isPrime(m))
                cnt++;
        }
        cout << m-d<< endl;
    }
}
