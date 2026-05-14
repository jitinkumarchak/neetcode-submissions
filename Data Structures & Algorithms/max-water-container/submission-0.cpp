class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();

        int i = 0 , j = n-1;

        int ans = 0;

        while(i < j){
            int w = j - i ;
            int h = min(heights[i],heights[j]);
            int water = w*h;
            ans = max(ans,water);

            heights[i] < heights[j] ? i++ : j--;
        }

        return ans;
        
    }
};
