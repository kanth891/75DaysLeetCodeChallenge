class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int moreNeed=target-a;
            if(mpp.find(moreNeed)!=mpp.end())
            {
            return {mpp[moreNeed],i};
            }
            mpp[a]=i;
        }
        return {-1,-1};
    }

};