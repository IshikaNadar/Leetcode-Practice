// Last updated: 4/15/2026, 10:48:03 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Brute force :find dup. by unordered set
        //optimised approach to reduce space complexity.
        int slow =nums[0], fast = nums[0];
                do{
            slow =nums[slow];
            fast = nums[nums[fast]];

        }while(slow!=fast);
        slow = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};