#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> vet1(n);
    for(int i=0; i<n; i++)cin>>vet1[i];

    int m;
    cin>>m;

    vector<int> vet2(m);
    for(int i=0; i<m; i++)cin>>vet2[i];


    for(int i=0; i<n; i++){
        bool printar = true;
        for(int j=0; j<m; j++){
            if(vet1[i] == vet2[j])printar = false;
        }

        if (printar)cout<<vet1[i]<<" ";
    }
    cout<<"\n";
}

