class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        vector<pair<int,int>> v;
        int n = coordinates.size();
        for(int i=0;i<n;i++){
            v.push_back({coordinates[i][0],coordinates[i][1]});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-2;i++){
            float dis1 = sqrt(pow(v[i].first-v[i+1].first,2)+pow(v[i].second-v[i+1].second,2));
            float dis2 = sqrt(pow(v[i+2].first-v[i+1].first,2)+pow(v[i+2].second-v[i+1].second,2));
            float dis3 = sqrt(pow(v[i].first-v[i+2].first,2)+pow(v[i].second-v[i+2].second,2));
            cout<<dis1+dis2<<" "<<dis3<<endl;
            if((int)(dis3*100)!=(int)((dis1+dis2)*100)) return false;
        }
        return true;

    }
};