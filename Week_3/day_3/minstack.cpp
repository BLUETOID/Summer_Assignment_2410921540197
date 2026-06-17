
#include<bits/stdc++.h>
using namespace std;

class MinStack {
        stack<int>st,minimum;
public:
    MinStack() {
        minimum.push(INT_MAX);
    }

    void push(int value) {
        st.push(value);
        minimum.push(min(value,minimum.top()));
    }

    void pop() {
        st.pop();
        minimum.pop();
    }

    int top() {

        return st.top();
    }

    int getMin() {
        return minimum.top();
    }
};

int main() {
    MinStack ms;
    ms.push(3);
    ms.push(2);
    ms.push(1);
    ms.pop();
    cout << ms.getMin() << endl;
    ms.push(0);
    cout << ms.getMin() << endl;

    return 0;
}
