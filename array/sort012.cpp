//sort an array of 0’s 1’s 2’s without using extra space or sorting algo

#include <bits/stdc++.h>
using namespace std;

//time O(n) space O(1)
int main() {
    int n;
    cin>>n;

    vector<int> zot;

    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        zot.push_back(x);
    }

    int low = 0;
    int mid = 0;
    int high = n-1;
    int temp;

    while (mid<=high) {
        switch (zot[mid]) {
            case 0:
                temp = zot[low];
                zot[low] = zot[mid];
                zot[mid] = temp;
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                temp = zot[high];
                zot[high] = zot[mid];
                zot[mid] = temp;
                high--;
                break;
        }
    }
    for (int & it : zot) {
        cout<<it;
    }
}