class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int high = letters.size();
        int mid;
        while(low<high){
            mid = low + (high-low)/2;
            if(letters[mid]<=target) low = mid+1;
            else high = mid;
        }
        if(low==letters.size()) low = 0;
        return letters[low];
    }
};