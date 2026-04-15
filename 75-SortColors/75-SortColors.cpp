// Last updated: 4/15/2026, 10:48:29 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
       /* int p,q,r=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0)p++;
            if(nums[i]==1)q++;
            if(nums[i]==2)r++;
        } int i=0;
    
        while(p > 0){
            nums[i++] == 0;
                        p--;
        }
        while(q>0){
            nums[i++] == 1;
            q--;
        }
        while(r>0){
            nums[i++]==2;
            r--;
        } */
         int low=0;
         int mid=0;
         int high =nums.size()-1;
         while(mid<=high){
         if(nums[mid]== 0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;}
            else if(nums[mid]==2){
            swap(nums[high],nums[mid]);
            high--;}
            else{
                mid++;
            }
         }
    }  
};