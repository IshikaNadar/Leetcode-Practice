// Last updated: 4/15/2026, 10:47:37 PM
class Solution {
    public int countOperations(int num1, int num2) {
        int ans = 0;
        while (num1 != 0 && num2 != 0) {
            if (num1 >= num2) num1 -= num2;
            else num2 -= num1;
            ans += 1;
        }
        return ans;
    }
}