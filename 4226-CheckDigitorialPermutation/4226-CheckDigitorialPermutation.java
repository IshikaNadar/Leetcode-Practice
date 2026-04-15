// Last updated: 4/15/2026, 10:47:36 PM
class Solution {
      private static final int FACTORIALS[] ={1,1,2,6,24,120,720,5040,40320,362880};
    public boolean isDigitorialPermutation(int n) {
        if(n<0) return false;
        
        int targetsum = 0;
        int digitalcount[] = new int[10];
        int count =0;
        if(n==0){
            targetsum = FACTORIALS[0];
            digitalcount[0]++;
            count = 1;
        
        }else{ int a=n;
            while(a>0){
                int no = a%10;
                targetsum +=FACTORIALS[no];
                digitalcount[no]++;
                count++;
                a/=10;
            }
        }
        int sumdigit[] =new int[10];
        int sumcount = 0;
        int asum = targetsum;
        if(asum==0){
         sumdigit[0]++;
          sumcount=1;
        }else{
            while(asum>0){
                int no = asum%10;
                sumdigit[no]++;
                 sumcount++;
                asum /=10;
            }
        }
        if(count !=sumcount) return false;
        
        return Arrays.equals(digitalcount,sumdigit);
    }
}