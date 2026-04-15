// Last updated: 4/15/2026, 10:48:25 PM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l= m - 1; 
         int r = n - 1;
        int k=m+n-1;
        while(l>=0 && r>=0){
        if(nums1[l]>nums2[r]){
            nums1[k--]=nums1[l];
            l--;
        }
        else{
            nums1[k--]=nums2[r];
            r--;
        } }
        while(r>=0){
            nums1[k--]=nums2[r--];
        }
    }
};