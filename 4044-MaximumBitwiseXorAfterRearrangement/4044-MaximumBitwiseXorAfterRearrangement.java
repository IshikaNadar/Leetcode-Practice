// Last updated: 4/15/2026, 10:47:31 PM
class Solution {
    public String maximumXor(String s, String t) {        
        int n = s.length();
        int onet= 0;
        for(int i=0;i<n;i++){
            if(t.charAt(i)=='1'){
                onet++;     
            }
        }
        int zerot = n-onet;
        StringBuilder result = new StringBuilder();
        for(int i =0;i<n;i++){
            char sChar = s.charAt(i);
         if(sChar =='0'){
            if(onet>0){
                result.append('1');
                onet--;   
            }else{
                result.append('0');
                zerot--;
            }
        }else{
            if(zerot>0){
                result.append('1');
                zerot--;
            }else{
                result.append('0');
                onet--;
            }
         }
        }
        return result.toString();
    }
}