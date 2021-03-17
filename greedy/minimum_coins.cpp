#include <bits/stdc++.h>
using namespace std;

int main () {
    int V;
    cin>>V;
    int coins [] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int n = 10;
    vector<int> res;

    for (int i=n-1; i>=0; i--) {
        while (V >= coins[i]) {
            V -= coins[i];
            res.push_back(coins[i]);
        }
    }

    for (auto itr : res) {
        cout<<itr<<" ";
    }

    return 0;
}