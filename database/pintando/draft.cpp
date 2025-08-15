#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    double a,b,c;
    cin>>a>>b>>c;

    double p = (a+b+c)/2.0;
    cout<<fixed<<setprecision(2)<<pow(p * (p-a) * (p-b) * (p-c), 1/2.0)<<"\n";
}

