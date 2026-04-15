// Last updated: 4/15/2026, 10:47:44 PM
class Solution {
    public int subtractProductAndSum(int n) {
        int sum =0;
        int product=1;
        while(n>0){
        int digit = n%10;
        product *= digit;
        sum += digit;
        n /= 10;
        }
         return product-sum;
    }
}