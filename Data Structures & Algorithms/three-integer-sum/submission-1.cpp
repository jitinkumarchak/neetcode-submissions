class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int n = nums.size();

        vector<vector<int>> ans;
        
        for(int m = 0 ; m < n ; m++ ){
            if(m > 0 && nums[m]  == nums[m-1]) {continue;}

            int j = m+1;
            int k = n-1;

            while(j < k){

                int sum = nums[m] + nums[j] + nums[k];

            if( sum > 0 ){
                k--;
            }else if(sum < 0){
                j++;
            }
             else
              {
                ans.push_back({nums[m],nums[j],nums[k]});

                while(j < k && nums[j] == nums[j+1]){
                    j++;
                }

                while(j < k && nums[k] == nums[k-1]){
                    k--;
                }

                j++;
                k--;
             }
         }
        }
        return ans;
    }
};
