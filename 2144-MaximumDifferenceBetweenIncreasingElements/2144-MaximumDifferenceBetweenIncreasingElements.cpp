// Last updated: 4/15/2026, 10:47:39 PM
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
     int min =nums[0];
     int maxdiff =-1;
     int n=nums.size();
     for(int i=1;i<n;i++){
     if(nums[i]>min){
        int diff=nums[i]-min;
        maxdiff = max(diff,maxdiff);

     }else{
        min=nums[i];
     }
     }return maxdiff;
    }
};