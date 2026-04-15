// Last updated: 4/15/2026, 10:48:02 PM
class Solution {
public:
bool isvowel(char c){

    c= tolower(c);
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';}
    string reverseVowels(string s) {
    /*   int n = s.size();
       string vowel=" ";
        for(int i=0;i<n;i++){
            if(isvowel(s[i]))
            vowel+=s[i];
        }
        int k=vowel.size()-1;
       
        bool isvowel(char c){
         c=tolower(c);
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';}
        if(isvowel(s[i])){
            s[i]=vowel[k;
            k--;]
        }*/
        int left =0;
        int n=s.size();
        int right=n-1;
        while(left<right){
            while(left<right && !isvowel(s[left]))
                left++;
            
            while(left<right && !isvowel(s[right]))
                right--;
            
            if(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
            }
    }
        return s;
    }  
};