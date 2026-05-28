#include <iostream>
using namespace std;

const double delta = 1e-8;

int zero(double x){
    if (x < -delta)
        return -1;
    else
        return x > delta;
}

int main(void){
    double cards[500];
    cards[0] = 0.0;
    int total;
    for (total=1; zero(cards[total-1]-5.20) < 0; total++){
        cards[total] = cards[total-1] + 1.0/double(total+1);
    }

    double x;
    cin >> x;
    while(zero(x)){
        int l=0, r=total, m;
        while (l+1 < r){
            m = int((l+r) / 2);
            if (zero(cards[m] - x) < 0)
                l = m ;
            else
                r = m ;
        }
        cout<<r<<" card(s)"<<endl;

        cin >> x;
    }

    return 0;   
}
