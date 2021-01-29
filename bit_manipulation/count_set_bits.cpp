//count set bits in an integer

#include <bits/stdc++.h>
using namespace std;

//brian kernighan's algorithm
//time O(n) space O(1)

int cntSetBits (unsigned int n) {
    int cnt = 0;

    while (n) {
        n &= (n-1);
        cnt++;
    }
    return cnt;
}

//brute force
//time O(n^2) space O(1)

//hashmaps
//time O(n) space O(n)

int main() {
    unsigned int n;
    cin>>n;
    cout<<cntSetBits(n);
}