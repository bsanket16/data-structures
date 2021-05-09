#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int factors(int n) {
    int cnt = 0;
    for (int i=1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (i != n/i) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int n; cin>>n;
    cout<<factors(n);
    return 0;
}