#include <bits/stdc++.h>
using namespace std;

void subset(string ip, const string& op) {
    if (ip.empty()) {
        cout<<op<<" ";
        return;
    }
    const string& op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);

    ip.erase(ip.begin() + 0);

    subset(ip, op1);
    subset(ip, op2);
}

int main() {
    string ip, op;
    cin>>ip;
    subset(ip, op);
}