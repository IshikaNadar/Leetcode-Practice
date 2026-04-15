// Last updated: 4/15/2026, 10:47:56 PM
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
      
       int boat=0;
      /* vector<int>visit(n,false);
       int n=people.size();
        for(int i=0;i<n;i++){
            if(visit[i]) continue;
            for(int j=i+1;j<n;j++){
                if(visit[j] && people[i]+people[j]<=limit){
                    visit[j]=true;
                    break;}
                   
                }visit[i]=true;
                boat++;}
                */
                sort(people.begin(),people.end());
                int l=0;
                int r=people.size()-1;
            while(l<=r){
                if(people[l]+people[r]<=limit){
                    l++;
                 
                } r--;
                boat++;
            }
         return boat;
    }
};