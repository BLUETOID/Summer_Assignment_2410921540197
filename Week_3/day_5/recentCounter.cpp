#include <bits/stdc++.h>
using namespace std;

class RecentCounter {
    queue<int> q;

public:
    RecentCounter() {}

    int ping(int t) {
        while (!q.empty() && q.front() < t - 3000) {
            q.pop();
        }
        q.push(t);
        return q.size();
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    RecentCounter rc;
    cout << rc.ping(1) << endl;
    cout << rc.ping(100) << endl;
    cout << rc.ping(3001) << endl;
    cout << rc.ping(3002) << endl;

    return 0;
}
