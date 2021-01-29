//find only non-repeating element where every other element repeats twice

#include <bits/stdc++.h>
using namespace std;

int single1 (const int arr[], unsigned int len) {
    int res = 0;

    for (int i=0; i<len; i++) {
        res ^= arr[i];
    }

    return res;
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    unsigned int len = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<single1(arr, len);
}