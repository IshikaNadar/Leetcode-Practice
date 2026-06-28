// Last updated: 6/28/2026, 10:30:52 PM
1class Solution {
2    public int majorityElement(int[] nums) {
3        //better approach with sorting  T.C. = O(nlogn)
4         Arrays.sort(nums);
5         int n = nums.length;
6         int freq = 1;
7         int ans = nums[0];
8         for(int i =1;i<n;i++){
9          if(nums[i]== nums[i-1]){
10            freq++;
11          }else{
12            freq=1;
13            ans=nums[i];
14          }
15          if(freq > n/2){
16            return ans;
17          }
18         }
19         return ans;
20    }
21}