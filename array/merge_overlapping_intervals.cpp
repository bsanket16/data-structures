//merge overlapping intervals

#include <bits/stdc++.h>
using namespace std;

//time O(N*Log(N)) space O(1)
vector<pair<int, int>> overlappingIntervals(vector<pair<int, int>> &intervals) {
    vector<pair<int, int>> mergedIntervals;

    if (intervals.empty()) return mergedIntervals;

    sort(intervals.begin(), intervals.end());

    pair<int, int> temp = intervals[0];

    for (auto it : intervals) {
        if (it.first <= temp.second) {
            temp.second = max(it.second, temp.second);
        } else {
            mergedIntervals.emplace_back(temp);
            temp = it;
        }
    }

    mergedIntervals.emplace_back(temp);

    return mergedIntervals;
}

int main() {
    vector<pair<int, int>> v, res;

    int n, x, y;
    cin>>n;

    for (int i=0; i<n; i++) {
        cin>>x>>y;
        v.emplace_back(x, y);
    }

    res = overlappingIntervals(v);

    for (auto & re : res)
        cout<<re.first<<" "<<re.second<<" ";
}