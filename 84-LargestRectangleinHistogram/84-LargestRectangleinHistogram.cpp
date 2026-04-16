// Last updated: 4/16/2026, 10:24:15 AM
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int count=0;
5        int n =nums.size();
6        for(int i =0;i<n;i++){
7           int  sum= 0;
8            for(int j =i;j<n;j++){
9                sum += nums[j];
10                if(sum ==k){
11                    count++;
12                }
13            }
14        }
15        return count;
16    }
17};