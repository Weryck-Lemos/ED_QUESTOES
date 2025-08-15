#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, ans=0;
    cin>>n;

    vector<int> pos(n), neg(n);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        if(x>0) pos[x]+=1;
        else neg[x*-1]+=1;
    }

    for(int i=0; i<n; i++){
        ans += min(pos[i], neg[i]);
    }
    
    cout<<ans<<"\n";
}

