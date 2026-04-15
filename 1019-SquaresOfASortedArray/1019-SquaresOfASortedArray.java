// Last updated: 4/15/2026, 10:47:45 PM
class Solution {
    public int[] sortedSquares(int[] nums) {
       int n=nums.length;
      /*  for(int i=0;i<n;i++){
            nums[i]= nums[i]*nums[i];
        }
        Arrays.sort(nums);
         return nums;
    */
    int result[]=new int[n];
    int l=0;
    int r= n-1;
  //  nums[i]=nums[i]*nums[i];
    int  k=n-1;
    while(l<=r){
       
     int leftsq = nums[l] * nums[l];
    int rightsq = nums[r]*nums[r];
    if(leftsq>rightsq)
{
    result[k--]=leftsq;
    l++;
}    
else{
    result[k--]=rightsq;
    r--;
}

    }
return result;
    }
   
}