// Last updated: 4/15/2026, 10:47:53 PM
class Solution {
    public int[] replaceElements(int[] arr) {
       int n=arr.length-1;
        int  maxrt = -1;
        for(int i=n;i>=0;i--){
         
              int  curr = arr[i];
                arr[i] = maxrt;
                maxrt= Math.max(curr,maxrt);
            
            // for(int i=0;i<n;i++){ int  maxrt = -1;
               // for(int j=i+1;j<n;j++){
              //  maxrt= Math.max(arr[j],maxrt);}
            
           // arr[i] = maxrt;}
        
        } 
        return arr;
    }
}