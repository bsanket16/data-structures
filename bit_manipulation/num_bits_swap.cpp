//number of bits required to change a to b

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    int res = 0;
    cin>>a>>b;

//  find the difference
    int diff = a ^ b;

//  Calc set bits
    while (diff) {
        diff &= (diff-1);
        res++;
    }
    cout<<res;
}