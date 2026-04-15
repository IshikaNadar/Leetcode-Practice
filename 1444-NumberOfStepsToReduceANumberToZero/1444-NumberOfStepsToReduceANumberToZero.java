// Last updated: 4/15/2026, 10:47:43 PM
class Solution {
    public int numberOfSteps(int num) {
        int steps =0;
        while(num>0){
        if (num % 2 == 0) { 
            num = num / 2; } 
            else {    num = num - 1;
             } steps++; 
            }
             return steps;
    }
}