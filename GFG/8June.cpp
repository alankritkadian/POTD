//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    int factorial(int n){
        if(n==0||n==1) return 1;
        else return n*factorial(n-1);
    }
public:
    string kthPermutation(int n, int k)
    {
        k--;
        string ans = "";
        set<int> s;
        for(int i=1;i<=n;i++) s.insert(i);
        int index = 1;
        while(!s.empty()&&k>0){
            int count = k/factorial(n-index);
            k-=count*factorial(n-index);
            auto it = s.begin();
            int z = count;
            while(z>0) {it++;z--;}
            s.erase(it);
            ans.append(to_string(*it));
            index++;
        }
        while(!s.empty()){
            ans.append(to_string(*s.begin()));
            s.erase(s.begin());
        }
        return ans;
        
    
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends