#include<bits/stdc++.h>
using namespace std;

void printA (int n) {
    if (n==1) {
        cout<<n<<" ";
        return;
    }
    printA(n-1);
    cout<<n<<" ";
}

void printB (int n) {
    if (n==1) {
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    printB(n-1);
}

int main() {
    int n;
    cin>>n;
    printA(n);
    cout<<endl;
    printB(n);
}