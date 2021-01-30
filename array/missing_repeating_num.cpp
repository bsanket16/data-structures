//repeat and Missing Number

#include <bits/stdc++.h>
using namespace std;

//time O(n) space O(n)
vector<int> missingRepeatingNum(vector<int>& nums) {
    int xxory = 0;
    int mask = 0;

    for (int val : nums) {
        xxory ^= val;
    }

    for (int i=1; i<=nums.size(); i++) {
        mask ^= i;
    }

    int og_mask = xxory ^ mask;

    int rsbm = og_mask & -og_mask;

    int x = 0;
    int y = 0;

    for (int i : nums) {
        if ((i & rsbm)==0) {
            x ^= i;
        } else {
            y ^= i;
        }
    }
    for (int i=1; i<=nums.size(); i++) {
        if ((i & rsbm)==0) {
            x ^= i;
        } else {
            y ^= i;
        }
    }

    vector<int> res;
    res.push_back(x);
    res.push_back(y);

    return res;
}

void print_vector(const vector<int>& v){
    for(int i : v){
        cout << i << " ";
    }
}

int main() {
    int n;
    cin>>n;

    vector<int> v;

    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }

    print_vector(missingRepeatingNum(v));
}