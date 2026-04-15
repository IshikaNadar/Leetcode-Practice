// Last updated: 4/15/2026, 10:47:47 PM
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
           int maxrt=-1;
            for(int j=i+1;j<n;j++){
                maxrt=max(arr[j],maxrt);
            }
            arr[i]=maxrt;
        } return arr;
    }
};