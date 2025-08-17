#include <iostream>
#include <vector>
#include <sstream>

#include <iostream>
#include <vector>
#include <sstream>

void processa(std::vector<int> vet){
    int n = int(vet.size());
    if(n==0){
        return;
    }

    std::vector<int> vet2(n-1);
    for(int i=0; i<n-1; i++){
        vet2[i] = vet[i]+vet[i+1];
    }

    processa(vet2);

    std::cout<<"[ ";
    for(int i=0; i<n; i++){
        std::cout<<vet[i]<<" ";
    }
    std::cout<<"]\n";
}