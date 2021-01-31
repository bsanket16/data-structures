//kadane's algo

#include <bits/stdc++.h>
using namespace std;

//time O(n) space O(1)
int maxContSum(const int arr[], int n) {
    int max_end_here = 0;
    int max_so_far = INT_MIN;

    for (int i=0; i<n; i++) {
        max_end_here += arr[i];

        if (max_end_here > max_so_far) max_so_far = max_end_here;

        if (max_end_here < 0) max_end_here = 0;
    }

    return max_so_far;
}

int main () {
    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++) cin>>arr[i];

    cout<<maxContSum(arr, n);
}