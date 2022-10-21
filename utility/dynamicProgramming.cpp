//creating a 2d dp matix dp[t+1][1000]
vector<vector<int>> dp(t + 1, vector<int>(100000, INT_MIN));

//3d dp matrix dp[m+1][n+1][k+1]
vector<vector<vector<int>>> dp(m + 1, vector<vector<int>>(n + 1, vector<int>(k + 1, -1)));