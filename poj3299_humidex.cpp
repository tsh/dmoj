#include <iostream>
#include <math.h>
using namespace std;
double A, B, temp, hum, dew;
char a,b;

double calcTemp(double hum, double d){
    double e = 6.11 * exp(5417.7530 * ((1/273.16) - (1/(d+273.16))));
    double h = (0.5555)* (e - 10.0);
    return hum- h;
    
};

double calcHum(double t, double d){
    double e = 6.11 * exp(5417.7530 * ((1/273.16) - (1/(d+273.16))));
    double h = (0.5555)* (e - 10.0);
    return t + h;
};

double calcDew(double t, double h){
    double dew=0;
    for (double delta=100; delta>.00001; delta *=.5){
        if(calcHum(t, dew) > h)
            dew -= delta;
        else
            dew += delta;
    }
    return dew;
};


int main(void){
    while(scanf(" %c %lf %c %lf", &a, &A, &b, &B) == 4 && a != 'E'){
        temp=hum=dew=999999;

        if (a=='T')temp=A;
        if (a=='H')hum=A;
        if (a=='D') dew=A;
        if (b=='T')temp=B;
        if (b=='H')hum=B;
        if (b=='D')dew=B;

        if (temp==999999) temp=calcTemp(hum, dew);
        if (hum==999999) hum=calcHum(temp, dew);
        if (dew==999999) dew=calcDew(temp, hum);

        printf("T %.1lf D %.1lf H %.1lf\n", temp, dew, hum);
    }
}
