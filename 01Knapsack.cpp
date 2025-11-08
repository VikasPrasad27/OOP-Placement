#include <iostream>
#include <vector>
using namespace std;

int knapsack(int W, vector<int> &wt, vector<int> &val, int n) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
       for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;  // Base case
            else if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][W];
}

int main() {
    int n, W;
    cout<<"Enter Number of Items:";
    cin >> n;
    vector<int> val(n), wt(n);
    cout<<"Enter Value and Weights:";
    for (int i = 0; i < n; i++) cin >> val[i] >> wt[i];
    cout<<"Enter the capacity:";
    cin >> W;
    cout << knapsack(W, wt, val, n);
}
