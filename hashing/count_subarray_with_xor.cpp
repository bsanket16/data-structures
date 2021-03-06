#include <bits/stdc++.h>
using namespace std;

int count_subarray_with_xor_as_k(vector<int>& nums, int k) {
    int curr_xor = 0;
    int cnt = 0;

    map<int, int> mpp;

    for (auto it : nums) {
        curr_xor = curr_xor ^ it;

        if (curr_xor == k) cnt++;

        if (mpp.find(curr_xor ^ k) != mpp.end()) {
            cnt += mpp[curr_xor ^ k];
        }

        mpp[curr_xor ^ k] += 1;
    }
    return cnt;
}

int main() {
    int n, k;
    cin>>n>>k;

    vector<int> nums (n);

    for (int i=0; i<n; i++) {
        cin>>nums[i];
    }

    cout<<count_subarray_with_xor_as_k(nums, k);
}