#include <iostream>
using namespace std;

int dist(int f, int h, int d){
    if(d==1) return (h-f +16)%16;
    else return (f-h +16) %16;
}

int main() {
    int h,p,f,d;
    cin>>h>>p>>f>>d;

    int dH = dist(f,h,d);
    int dP = dist(f,p,d);

    if(dH<dP) cout<<"S\n";
    else cout<<"N\n";
}

