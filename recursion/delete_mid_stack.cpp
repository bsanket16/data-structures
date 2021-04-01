#include <bits/stdc++.h>
using namespace std;

void pop_mid(stack<int> &s, int k) {
    if (k==1) {
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    pop_mid(s, k-1);
    s.push(temp);
}

int main() {
    int n; cin>>n;
    stack<int> s;

    for (int i=0; i<n; i++) {
        int x; cin>>x;
        s.push(x);
    }

    int k = (n/2) + 1;

    if (!s.empty()) {
        pop_mid(s, k);
    }

    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
}