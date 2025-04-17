#include <bits/stdc++.h>
using namespace std;

int main() {
    string childOne, childTwo;
    cin >> childOne >> childTwo;

    int m = childOne.size();
    int n = childTwo.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (childOne[i - 1] == childTwo[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1; 
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);  
            }
        }
    }

    cout << dp[m][n] << endl;

    return 0;
}
