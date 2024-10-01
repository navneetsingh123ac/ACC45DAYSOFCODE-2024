#include <bits/stdc++.h>
using namespace std;

int min_operation(int N, vector<int>& A) {
    unordered_map<int, int> freq_map;
    
    for (int i = 0; i < N; i++) {
        freq_map[A[i]]++;
    }
    
    int max_freq = 0;
    for (auto it : freq_map) {
        max_freq = max(max_freq, it.second);
    }
    
    return N - max_freq;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N; 
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i]; 
        }
        
        int result = min_operation(N, A);
        cout << result << endl;  
    }
    
    return 0;
}