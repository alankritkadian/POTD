int maxTime(map<int,vector<int>>&mp,int index,vector<int>& vec){
    if(mp[index].empty()) return vec[index];
    int mx = 0;
    for(auto x:mp[index]){
        mx = max((vec[index]+maxTime(mp,x,vec)),mx);
    }
    return mx;
}
class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            if(manager[i]!=-1){
                mp[manager[i]].push_back(i);
            }
        }
        return maxTime(mp,headID,informTime);
    }
};