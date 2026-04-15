// Last updated: 4/15/2026, 10:48:00 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
           int n=nums.size();
            int maxcount=0;
            /*Brute force:
        for(int i=0;i<n;i++){
            int count =0;
            for(int j=i;j<n;j++){
                if(nums[j]==1){
                    count++;
                    maxcount=max(maxcount,count);
                }else{
                    break;
                }
}        }return maxcount; */

     //Optimise Method:
       int count=0;
     for(int i=0;i<n;i++){
      
        if(nums[i]==1){
            count++;
             maxcount=max(maxcount,count);
             
        }else{
            count=0;
          
        }
     }return maxcount;
    }
};