#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    b = a;
    sort(b.begin(), b.end())
    int mismatch = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            mismatch++;
        }
    }
    cout << max(0, mismatch - 1) << endl;
}
