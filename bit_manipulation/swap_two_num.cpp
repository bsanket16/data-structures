//swap two numbers without using another variable

#include <bits/stdc++.h>
using namespace std;

//time O(1) space O(1)

int main() {
    int a, b;
    cin>>a>>b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<"a: "<<a<<" "<<"b: "<<b;
}