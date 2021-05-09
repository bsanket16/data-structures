#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string check_prime (ll n) {
    for (int i=2; i * i <= n; i++) {
        if (n % i == 0) {
            return "no";
        }
    }
    return "yes";
}

int main() {
    ll t; cin>>t;
    while (t--) {
        ll n; cin>>n;
        cout<<check_prime(n)<<endl;
    }
}