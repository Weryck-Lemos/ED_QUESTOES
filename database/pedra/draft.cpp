#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, men= INT_MAX , ans=-1;
    cin>>n;

    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;


        if(a>=10 && b>=10){
            if(men> abs(a-b)){
                men=abs(a-b);
                ans = i;
            }
        }
    }
    if(ans==-1) cout<<"sem ganhador\n";
    else cout<<ans<<"\n";
}

