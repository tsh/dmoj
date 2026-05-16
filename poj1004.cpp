#include <iostream>

using namespace std;
int main(){
    double avg=0.0, sum=0.0, a[12] = {0};
    for (int i=0; i<12; i++){
        cin>>a[i];
        sum+=a[i];
    }
    sum = sum /12;
    printf("$%.2f", sum); 
    return 0;
}
