// Last updated: 4/15/2026, 10:47:50 PM
import java.util.Arrays;
class Solution {
    public int numRescueBoats(int[] people, int limit) {
        
        int boat =0;
          Arrays.sort(people);
                int l=0;
                int r=people.length-1;
            while(l<=r){
                if(people[l]+people[r]<=limit){
                    l++;
                 
                } r--;
              boat++;
            }
         return boat;
    }
}