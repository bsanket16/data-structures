#include<bits/stdc++.h>
using namespace std;

struct meeting {
    [[maybe_unused]] int start;
    [[maybe_unused]] int end;
    [[maybe_unused]] int pos;
};

bool comp (struct meeting m1, meeting m2) {
    if (m1.end < m2.end) return true;
    else if (m1.end > m2.end) return false;
    else if (m1.pos < m2.pos) return true;
    return false;
}

class Solution {
    public:
        static vector<int> meetingRoom (const int s[], const int e[], int n) {
            meeting meet[n];
            for (int i=0; i<n; i++) {
                meet[i].start = s[i];
                meet[i].end = e[i];
                meet[i].pos = i+1;
            }

            sort(meet, meet + n, comp);

            vector<int> res;
            int limit = meet[0].pos;
            res.push_back(limit);

            for (int i=1; i<n; i++) {
                if (meet[i].start > limit) {
                    limit = meet[i].end;
                    res.push_back(meet[i].pos);
                }
            }
            return res;
        }

        static void print (const vector<int>& x) {
            for (int i : x) {
                cout<<i<<" ";
            }
        }
};

int main() {
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        int start[n], end[n];

        for (int i=0; i<n; i++) cin>>start[i];
        for (int i=0; i<n; i++) cin>>end[i];

        Solution::print(Solution::meetingRoom(start, end, n));
    }
    return 0;
}