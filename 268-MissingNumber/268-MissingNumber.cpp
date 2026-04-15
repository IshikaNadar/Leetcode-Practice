// Last updated: 4/15/2026, 10:48:08 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
// brute force method:
        int sum=0;
       int n=nums.size();
      for(int i =0;i<nums.size();i++){
        sum +=nums[i];
      }
      int totalsum= (nums.size()*(n+1))/2;
      int missingnumber = totalsum-sum;
      return missingnumber;

    }
};