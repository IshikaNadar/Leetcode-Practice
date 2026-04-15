// Last updated: 4/15/2026, 10:47:35 PM
#include <vector>
#include <cmath>
#include <cstring>

using namespace std;
class Solution {
      long long dp[20][80][40][40];
    int n;
    vector<int> v2_arr, v3_arr, v5_arr;

    long long solve(int i, int c2, int c3, int c5) {
        if (abs(c2) > (n - i) * 2) return 0;
        if (abs(c3) > (n - i)) return 0;
        if (abs(c5) > (n - i)) return 0;
        if (i == n) {
            return (c2 == 0 && c3 == 0 && c5 == 0) ? 1 : 0;
        }
        if (dp[i][c2 + 40][c3 + 20][c5 + 20] != -1) {
            return dp[i][c2 + 40][c3 + 20][c5 + 20];
        }

        long long ans = 0;
        int v2 = v2_arr[i];
        int v3 = v3_arr[i];
        int v5 = v5_arr[i];
        ans += solve(i + 1, c2 - v2, c3 - v3, c5 - v5);

        ans += solve(i + 1, c2 + v2, c3 + v3, c5 + v5);
        ans += solve(i + 1, c2, c3, c5);

        return dp[i][c2 + 40][c3 + 20][c5 + 20] = ans;
    }

public:
    long long countSequences(vector<int>& nums, long long k) {
        n = nums.size();
        long long temp = k;
        int k2 = 0, k3 = 0, k5 = 0;
        while (temp > 0 && temp % 2 == 0) { k2++; temp /= 2; }
        while (temp > 0 && temp % 3 == 0) { k3++; temp /= 3; }
        while (temp > 0 && temp % 5 == 0) { k5++; temp /= 5; }
        if (temp != 1) return 0;
        if (k2 > 38 || k3 > 19 || k5 > 19) return 0;

        v2_arr.resize(n, 0);
        v3_arr.resize(n, 0);
        v5_arr.resize(n, 0);
        for (int i = 0; i < n; i++) {
            int val = nums[i];
            while (val % 2 == 0) { v2_arr[i]++; val /= 2; }
            while (val % 3 == 0) { v3_arr[i]++; val /= 3; }
            while (val % 5 == 0) { v5_arr[i]++; val /= 5; }
        }

        memset(dp, -1, sizeof(dp));
        return solve(0, k2, k3, k5);
    }
};