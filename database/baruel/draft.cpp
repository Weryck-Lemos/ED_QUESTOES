#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    vector<int> vet(n+1), ans, ans2;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;

        if(vet[x] != 0 ){
            ans.push_back(x);
        }
        vet[x]+=1;
    }

    if(!ans.size())cout<<"N";
    else {
        for(size_t i=0; i<ans.size(); i++){
            if(i>0)cout<<" ";
            cout<<ans[i];
        }
    }

    cout<<"\n";

    for(int i =1; i<=n; i++){
        if(vet[i] == 0){
            ans2.push_back(i);
        }
    }

    if(!ans2.size()){
        cout<<"N";
    }

    else{
        for(size_t i=0; i<ans2.size(); i++){
            if(i>0)cout<<" ";
            cout<<ans2[i];
        }
    }

    cout<<"\n";
}

