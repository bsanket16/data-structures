//find two non-repeating elements where every other element repeats twice

#include <bits/stdc++.h>
using namespace std;

//time O(n) space O(1)
vector<int> single3 (vector<int>& nums) {

    vector<int> res;

    int xxory = 0;
    int elem1 = 0, elem2 = 0;

    for (int v : nums)
        xxory ^= v;

    int rsbm = xxory & (-xxory);

    for (int v : nums) {
        if((v & rsbm) == 0) {
            elem1 ^= v;
        } else {
            elem2 ^= v;
        }
    }

    res.push_back(elem1);
    res.push_back(elem2);

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

    print_vector(single3(v));
}