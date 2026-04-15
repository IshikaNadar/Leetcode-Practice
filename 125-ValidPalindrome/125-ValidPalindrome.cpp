// Last updated: 4/15/2026, 10:48:21 PM
class Solution {
public:
    bool isPalindrome(string s) {
      /*  int n=s.size();
        string str=" ";
        for(int i=0;i<n;i++){
         if(isalnum(s[i])){
            str=str+s[i];
         }
        }
        int k= str.size();
        for (char &c : str) {
        str = tolower(str);
       }

       
        for(int i=0;i<k/2;i++){
            if(str[i]!=str[k-1-i]){
                return false;
            }
            return true;
        }
        */
        int left=0;
        int right =s.size()-1;
        while(left<right){
            while(left < right && !isalnum (s[left])){
           left++;
            }
             while(left<right && !isalnum (s[right])){
               right--;
            }
            if(tolower (s[left])!=tolower(s[right]))
            return false;
            left++;
            right--;
        }
        return true;
    }
};