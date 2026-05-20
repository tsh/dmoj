#include <iostream>
using namespace std;

int prime[2000], total=0, n=10000;

bool isPrime(int val){
    for (int i = 0; i < total; i++){
        if (val % prime[i] == 0)
            return false;
    }
    return true;
}

int main(void){
    for (int i = 2; i <=n; i++){
        if (isPrime(i))
            prime[total++] = i;
    }

    int m;
    cin >> m;
    while (m){
        int ans=0;
        for (int i=0; prime[i] <= m; i++){
            int tmp = 0;
            for (int j=i; tmp < m && j < 2000; j++){
                tmp += prime[j];
                if (tmp == m)
                    ans += 1;
            }
        }
        cout<<ans<<endl;
        cin>>m;
    }
}
