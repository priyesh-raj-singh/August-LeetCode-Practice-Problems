#define ll long long
#define mod (ll)((ll)(1e9) + 7)
class Solution {
public:
    int countVowelPermutation(int n) {
        vector<vector<ll>> dp(n, vector<ll> (5, 1));
        vector<vector<ll>> validPrev = {{1, 2, 4}, {0, 2}, {1, 3}, {2}, {2, 3}};
        for(int i = 1; i < n; ++i) {
            for(int j = 0; j < 5; ++j) {
                dp[i][j] = 0;
                for(auto k: validPrev[j])
                    dp[i][j] = (dp[i][j] + dp[i-1][k])%mod;
            }
        }
        ll ans = 0;
        for(auto n : dp.back()) ans = (ans + n)%mod;
        return ans;
    }
};