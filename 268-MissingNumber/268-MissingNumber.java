// Last updated: 4/15/2026, 10:48:04 PM
class Solution {
    public int missingNumber(int[] nums) {
        // brute force method:
        int sum=0;
      for(int i =0;i<nums.length;i++){
        sum +=nums[i];
      }
      int totalsum= (nums.length*(nums.length+1))/2;
      int missingnumber = totalsum-sum;
      return missingnumber;
    }
}