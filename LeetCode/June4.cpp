class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n,0);
        int count =  0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                count++;
                queue<int> q;
                q.push(i);
                while(!q.empty()){
                    int curr = q.front();
                    vis[curr] = 1;
                    q.pop();
                    for(int j=0;j<n;j++){
                        if(isConnected[curr][j]==1&&vis[j]==0){
                            q.push(j);
                        }
                    }
                }
            }
        }
        return count;
    }
};