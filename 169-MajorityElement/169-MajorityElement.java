// Last updated: 4/15/2026, 10:48:12 PM
class Solution {
    public int majorityElement(int[] nums) {
        /*optimise code without TLE:
        int n = nums.length;
        Arrays.sort(nums);
     // Arrays.toString(nums);
        int count =1;
       int ans=nums[0];
       for(int i =1;i<n;i++){
        if(nums[i]==nums[i-1]){
            count++;
        }else{
            count =1;
            ans=nums[i];
        }
        if(count > n/2){return ans;}
       }
       return ans; */
       int count =0,ans=0;
       for(int i =0;i<nums.length;i++){
        if(count==0){
        ans =nums[i];
        }
        if(ans==nums[i]){
            count++;
        }else{
            count--;
        }
       }return ans;

    }
}