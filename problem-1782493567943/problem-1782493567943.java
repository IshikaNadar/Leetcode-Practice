// Last updated: 6/26/2026, 10:36:07 PM
1class Solution {
2    public int majorityElement(int[] nums) {
3        int n = nums.length;
4        int m =0;
5        for(int i =0;i<n;i++){
6            int count =1;
7            for(int j = i+1;j<n;j++){
8                if(nums[i]==nums[j]){
9                    count++;
10                }
11            }
12             if(count > n/2){
13                 return nums[i];
14                }
15        } 
16        return -1;
17    } 
18}