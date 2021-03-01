#include <bits/stdc++.h>
using namespace std;

// recursive
int r_uniquePaths (int i, int j, int n, int m) {
   if (i == (n-1) && j == (m-1)) return 1;
   if (i >= n || j >= m) return 0;

   else return r_uniquePaths(i+1, j, n, m) + r_uniquePaths(i, j+1, n, m);
}

//dp
int dp_uniquePaths (int i, int j, int n, int m, vector<vector<int>> &dp) {
    if (i == (n-1) && j == (m-1)) return 1;
    if (i >= n || j >= m) return 0;

    if (dp[i][j] != -1) return dp[i][j];

    else return dp[i][j] = r_uniquePaths(i+1, j, n, m) + r_uniquePaths(i, j+1, n, m);
}

//combinatorics
int c_uniquePaths (int n, int m) {
    int N = n + m - 2;
    int r = n - 1;

    double res = 1;

    for (int x=1; x<=r; x++) {
        res = res * (N - r + x) / x;
    }

    return (int) res;
}

int main () {
    int n, m;
    cin>>n>>m;

    int i = 0;
    int j = 0;

    vector<vector<int>> dp (n, vector<int> (m, -1));

    cout<<r_uniquePaths(i, j, n, m)<<endl;
    cout<<dp_uniquePaths(i, j, n, m, dp)<<endl;
    cout<<c_uniquePaths(n, m);
}