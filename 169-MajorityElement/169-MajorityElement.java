// Last updated: 6/28/2026, 1:13:48 PM
1class Solution {
2    public int majorityElement(int[] nums) {
3         Arrays.sort(nums);
4        return nums[nums.length / 2];
5    }
6}