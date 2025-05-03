
#include <iostream>
#include <vector>
using namespace std;

// Function to solve 0/1 Knapsack Problem
int knapsack(int W, const vector<int>& weights, const vector<int>& values, int n) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (weights[i - 1] <= w) {
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]],
                              dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W]; 
} 

int main() {
    int numberOfItems = 4; 
    vector<int> values = {4, 3, 6, 5};   
    vector<int> weights = {3, 2, 5, 4};    
    int max_capacity = 4; 

    int maxProfit = knapsack(max_capacity, weights, values, numberOfItems);
    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}


// summary :
/* 
I have n items, each with a weight and a value and also have a knapsack with a maximum capacity W.
Goal: Pick items to maximize total value without exceeding the weight W.
I can either take an item (1) or leave it (0) — I cannot take fractions.
*/