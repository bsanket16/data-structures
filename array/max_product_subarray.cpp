//max product sub array

#include <bits/stdc++.h>
using namespace std;

//time O(n) space O(1)
int maxProduct(const int arr[], int n) {
    int max_so_far = 1;
    int max_end_here = 1;

    for (int i=0; i<n; i++) {
        max_end_here *= arr[i];

        if (arr[i] == 0) max_end_here = 1;

        if (max_end_here > max_so_far) max_so_far = max_end_here;
    }

    return max_so_far;
}

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<maxProduct(arr, n);
}