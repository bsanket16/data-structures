//Find the duplicate in an array of N+1 integers

#include <bits/stdc++.h>
using namespace std;

//time O(n) space O(1)
int duplicateNum (const int arr[]) {
    int slow = arr[0];
    int fast = arr[0];

    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    fast = arr[0];

    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}

int main() {
    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<duplicateNum(arr);
}