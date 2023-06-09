//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void recursion(int index, set<string>&st, string S){
	        if(index==S.size()){
	            st.insert(S);
	            return;
	        }
	        for(int i=index;i<S.size();i++){
	            swap(S[i],S[index]);
	            recursion(index+1,st,S);
	            swap(S[i],S[index]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
            set<string> st;
            recursion(0,st,S);
            vector<string> ans;
            for(auto x:st){
                ans.push_back(x);
            }
            return ans;
            
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends