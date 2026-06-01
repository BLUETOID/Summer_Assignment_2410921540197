#include <bits/stdc++.h>
using namespace std;

 int maxProfit(vector<int>& prices) {
        int minimum = prices[0];
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            minimum=min(minimum,prices[i]);
            int profit=prices[i]-minimum;
            maxProfit=max(maxProfit,profit);
        }
        return maxProfit;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    int result = maxProfit(prices);
    cout << "Maximum profit: " << result << "\n";
    


    return 0;
}