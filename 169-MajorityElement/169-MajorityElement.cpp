// Last updated: 4/15/2026, 10:48:17 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
       /* Brute force method:
       for(int i=0;i<n;i++){     
         int count=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>n/2){
                return nums[i];
            }
        } */


       /*Optimise method(faster and better)
        sort(nums.begin(),nums.end());
        int freq =1;
        int ans = nums[0];
        for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2){
            return ans;
        }
     } */
    //Moore's Voting Algorithmm:
       int freq=0;
       int ans=0;
       for(int i=0;i<n;i++){
        if(freq==0){
            ans=nums[i];}
        if(ans==nums[i])
           freq++;
        else{
             freq--;}
       }
        return ans;
    }
};