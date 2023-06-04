//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
    {
        stack<string> st;
        for(int i=0;i<s.size();i++){
            string temp;
            while(i<s.size()&&s[i]!='-'&&s[i]!='+'&&s[i]!='*'&&s[i]!='/'){
                temp.push_back(s[i]);
                i++;
            }
            st.push(temp);
            temp="";
            if(i<s.size()){
                temp.push_back(s[i]);
                st.push(temp);
            }
        }
        string ans;
        while(!st.empty()){
            ans.append(st.top());
            st.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends