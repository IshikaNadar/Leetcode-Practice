// Last updated: 4/15/2026, 10:47:33 PM
class Solution {
    public int scoreDifference(int[] nums) {
        long player1 =0;
        long player2=0;
        boolean firstactive = true;
        for(int i=0;i<nums.length;i++){
            if(nums[i]%2!=0){
                firstactive = !firstactive;
            }
            if((i+1)%6==0){
                 firstactive = !firstactive;
            }
            if(firstactive){
                player1 +=nums[i];
            }else{
                player2 +=nums[i];
            }
        } 
        return (int)(player1-player2);
    }
}