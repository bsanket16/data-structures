#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int val) {
    if (s.empty()) {
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    insert(s, val);
    s.push(temp);
}

void reverse_stack(stack<int> &s) {
    if (s.size() == 1) return;

    int val = s.top();
    s.pop();
    reverse_stack(s);
    insert(s, val);
}

int main() {
    int n; cin>>n;
    stack<int> s;

    for (int i=0; i<n; i++) {
        int x; cin>>x;
        s.push(x);
    }

    if (!s.empty())
        reverse_stack(s);

    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
}