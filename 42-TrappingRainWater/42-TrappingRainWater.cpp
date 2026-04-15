// Last updated: 4/15/2026, 10:48:30 PM
class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int w= 0;
        int l =0, r = n-1;
        int lmax = 0, rmax =0;

        while(l<r){
            lmax = max(lmax,height[l]);
            rmax = max(rmax,height[r]);

            if(lmax<rmax){
                w += lmax- height[l];
                l++;

            }else{
                 w += rmax- height[r];
                 r--;
            }
        }
        return w;
    }
};