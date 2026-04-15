// Last updated: 4/15/2026, 10:48:34 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      /*  int j=0;
       
        for(int i=0;i< n;i++){
            if(nums[i]==val){
                for(int j=0;j<n-1;j++){
                    nums[j]=nums[j+1];
                }
                n--;
                i--;
            }
        }return n;
        */ int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
        }return j;
    }
};