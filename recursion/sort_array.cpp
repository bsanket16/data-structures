#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int val) {
    if (v.empty() || v[v.size()-1] <= val) {
        v.push_back(val);
        return;
    }
    int temp = v[v.size()-1];
    v.pop_back();
    insert(v, val);
    v.push_back(temp);
}

void sort(vector<int> &v) {
    if (v.size() == 1) return;
    int val = v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v, val);
}

int main() {
    int n; cin>>n;
    vector<int> v;
    for (int i=0; i<n; i++) {
        int x; cin>>x;
        v.push_back(x);
    }
    sort(v);
    for (int i=0; i<n; i++) cout<<v[i]<<" ";
}