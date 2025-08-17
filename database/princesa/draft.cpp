#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    vector<int> vet(n);
    for(int i=0; i<n; i++){
        vet[i]=i+1;
    }

    int ponto = (m-1)%n;
    while(!vet.empty()){
        cout<<"[";

        for(size_t i=0; i<vet.size(); i++){
            cout<<" "<<vet[i];
            if(int(i) == ponto) cout<<">";
        }
        cout<<" ]\n";

        if(vet.size() == 1)break;

        size_t j = (ponto +1) %vet.size();
        vet.erase(vet.begin() + j);

        
        if(j>= vet.size()) ponto=0;
        else ponto = j;
    }
}

