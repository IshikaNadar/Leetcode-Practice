// Last updated: 4/15/2026, 10:48:09 PM
int ss(int n){
  int sum = 0;  
   while(n>0){
   int digit = n%10;
 sum += digit*digit;
 n /= 10;
   }return sum;
 }
    class Solution {
public:
    bool isHappy(int n) {
 /*while(n>9 ){
        int r = n%10;
        int q = n/10;
       int ans = (r*r) + (q*q);
        if(ans ==1){
            return true;}
             }return false; 
             //if we don't get happy no.,we get a cycle.
        
*/
      int slow= n;
      int fast = ss(n);
         do{
            slow = ss(slow);
            fast = ss(ss(fast));
         }while(slow!=fast);
         return slow== 1;

    }
};