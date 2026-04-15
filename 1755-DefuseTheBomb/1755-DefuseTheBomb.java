// Last updated: 4/15/2026, 10:47:41 PM
class Solution {
    public int[] decrypt(int[] code, int k) {
            int n = code.length;
        int result[]= new int[n];
         if(k==0){return result;}
   /*     for(int  i=0;i<n;i++){
            int sum =0;
            if(k==0){return result;}
            if(k>0){
                for(int j =i+1;i<=k;j++){
                    sum+= code[(i+j)%n];
                    result[i]=sum;
                }
            }
            if(k<0){
                int absValue = Math.abs(k);
                for(int j=1;j<=k;j++){
                    sum+= code[(i-j+n)%n];
                    result[i]=sum;
                }
            }
        } */
        int start, end;
        if (k > 0) {
            int sum =0;
           for (int i = 1; i <= k; i++) {
            sum += code[i % n];
        }
        result[0] = sum;
        for (int i = 1; i < n; i++) {
            sum -= code[i];              
            sum += code[(i + k) % n];   
            result[i] = sum;
        }
    } else {
       k = Math.abs(k);
            for (int i = 0; i < n; i++) {
                int sum =0;
                for (int j = 1; j <= k; j++) {
                    sum += code[(i - j + n) % n]; 
                }
                result[i] = sum;
            }
        }
        return result;
    }
}