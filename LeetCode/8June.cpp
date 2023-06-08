class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int n = grid[0].size();
        int curr = n - 1;
        for (auto& row : grid) {
            while (curr >= 0 && row[curr] < 0) {
                curr--;
            }
            count += (n - (curr + 1));
        }
        return count;
    }
};