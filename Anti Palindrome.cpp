#include<iostream>
#include <unordered_map>
using namespace std;

void solve() {
    int l;
    string v;
    cin >> l;
    cin >> v;
    
    unordered_map<char, int> mp;
    
    for (char r : v) {
        mp[r]++;
    }
    
    int odd = 0;
    int even = 0;
    
    for (auto pair : mp) {
        if (pair.second % 2 != 0) {
            odd++;
        } else {
            even++;
        }
    }
    
    if (odd > 1) {
        cout << 0 << endl;
    } else if (odd == 1) {
        if (even == 0) {
            cout << 2 << endl;
        } else {
            cout << 1 << endl;
        }
    } else {
        cout << 1 << endl;
    }
}

int main() {
    int k;
    cin >> k;
    
    while (k > 0) {
        solve();
        k--;
    }
    
    return 0;
}
