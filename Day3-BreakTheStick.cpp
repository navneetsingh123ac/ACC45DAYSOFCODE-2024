#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N, X;
        cin >> N >> X;
        
        if (N % 2 == 0 || X % 2 == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}