#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    cin>>nome;

    int idade;
    cin>>idade;

    if(idade<12) cout<<nome<<" eh crianca\n";
    else if(idade < 18) cout<< nome<<" eh jovem\n";
    else if(idade<65) cout<<nome << " eh adulto\n";
    else if(idade<100) cout<<nome<<" eh idoso\n";
    else cout<<nome<<" eh mumia\n";
    
    
}

