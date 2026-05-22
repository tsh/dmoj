#include <iostream>
using namespace std;

int primes[10000], n=10000, filled=0;

bool isPrime(int num){
    for (int i=0; i<filled; i++){
        if (num % primes[i] == 0) 
            return false;
    }
    return true;
};

int main(void){
    for (int i=2; i<=n; i++){
        if (isPrime(i)){
            primes[filled++] = i;
        }
    }

    int m;
    cin >> m;
    while (m){
        int res=0;
        for (int i=0; primes[i]<=m; i++){
            int total=0;
            for (int j=i; j<filled && total <m; j++){
                total += primes[j];
                if (total == m)
                    res += 1;
            }
        }
        cout<<res<<endl;
        cin>>m;
    }
    return 0;    
}
