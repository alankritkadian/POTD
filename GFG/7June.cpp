//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        vector<int> ans(n+1);
        ans[1] = 1;
        for(int i=2;i<=n;i++){
            ans[i] = i;
        }   
        for(int i=2;i*i<=n;i++){
            int index = 1;
            while(i*index<=n){
                if(ans[i*index]==i*index)
                    ans[i*index]=i;
                index++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends