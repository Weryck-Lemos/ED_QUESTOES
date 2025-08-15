#include <iostream>
#include <vector>
using namespace std;

int main() {
    int q;
    char d;

    cin>>q>>d;

    vector<pair<int,int>> s(q);
    for(int i=0; i<q; i++){
        cin>>s[i].first >> s[i].second;

    }

    if(d == 'L') cout<< s[0].first-1 <<" "<< s[0].second<<"\n";
    else if(d == 'R') cout<< s[0].first +1 <<" "<< s[0].second<<"\n";
    else if(d == 'U') cout<< s[0].first<<" "<< s[0].second-1<<"\n";
    else cout << s[0].first <<" "<< s[0].second+1<<"\n";

    for(int i=0; i<q-1; i++){
        cout << s[i].first<< ' '<< s[i].second <<"\n";
    }
}

