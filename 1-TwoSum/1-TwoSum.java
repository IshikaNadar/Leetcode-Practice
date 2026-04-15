// Last updated: 4/15/2026, 10:48:48 PM
class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int i=0;i<nums.length;i++){
             HashMap<Integer, Integer> map = new HashMap();
            for(int j=i+1;j<nums.length;j++){
                if(nums[i]+nums[j]==target){
                    return new int[]{i,j};
                }
            }

        }
    return null;
    }
}
