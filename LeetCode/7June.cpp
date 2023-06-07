class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
        while(a>0||b>0||c>0){
            int x = a&1,y = b&1,z = c&1;
            if((x|y)!=z)
                if(z==1) ans++;
                else ans+=x+y;
            a>>=1;b>>=1;c>>=1;
        }
        return ans;
    }
};