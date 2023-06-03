//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int s1=0;
        for(auto x:S1) s1+=x;
        int s2=0;
        for(auto x:S2) s2+=x;
        int s3=0;
        for(auto x:S3) s3+=x;
        int i1 = 0,i2 = 0, i3 = 0;
        while(s1!=s2||s2!=s3||s3!=s1){
            int z = max(max(s1,s2),s3);
            if(s1==z){
                s1-=S1[i1];
                i1++;
            }else if(s2==z){
                s2-=S2[i2];
                i2++;
            }else if(s3==z){
                s3-=S3[i3];
                i3++;
            }
        }
        return s1;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends