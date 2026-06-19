#include <bits/stdc++.h>
using namespace std;

class MyQueue {
    stack<int>in;
    stack<int>out;
public:
    MyQueue() {

    }

    void push(int x) {
        in.push(x);
    }

    int pop() {
        if(out.empty()){
            while(!in.empty()){
                out.push(in.top());
                in.pop();
            }
        }
            int ans = out.top();
            out.pop();
            return ans;
    }

    int peek() {
        if(out.empty()){
            while(!in.empty()){
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }

    bool empty() {
        if(in.empty() && out.empty()) return true;
        else return false;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    MyQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.peek() << endl;
    cout << q.pop() << endl;
    cout << q.empty() << endl;

    return 0;
}
