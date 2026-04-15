// Last updated: 4/15/2026, 10:48:42 PM
import java.util.*;
class Solution {
   public List<List<Integer>> threeSum(int[] nums) {
       List<List<Integer>> ans = new ArrayList<>();
       int n = nums.length;
       Arrays.sort(nums); 
       Set<List<Integer>> set = new HashSet<>(); 
       for (int i = 0; i < n - 2; i++) {
           int low = i + 1;
           int high = n - 1;
           int target = -nums[i]; 
           while (low < high) {
               int sum = nums[low] + nums[high];
               if (sum == target) {
                   set.add(Arrays.asList(nums[i], nums[low], nums[high]));
                   low++;
                   high--;
               } else if (sum < target) {
                   low++;
               } else {
                   high--; 
               }
           }
       }
       ans.addAll(set);
       return ans;
   }
   public static void main(String[] args) {
       Solution sol = new Solution();
       int[] nums = {-1, 0, 1, 2, -1, -4};
       List<List<Integer>> res = sol.threeSum(nums);
       for (List<Integer> triplet : res) {
           System.out.println(triplet);
       }
   }
}