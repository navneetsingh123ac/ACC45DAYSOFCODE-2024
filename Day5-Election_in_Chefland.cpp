#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int a, b, c;
        cin>>a>>b>>c;
        int ans = max(a,max(b,c));
        if(ans == a && ans > 50) cout<<'A'<<endl;
        else if(ans == b && ans > 50) cout<<'B'<<endl;
        else if(ans == c && ans > 50) cout<<'C'<<endl;
        else cout<<"NOTA"<<endl;
    }

}
