class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            int num2=target-nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]==num2)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;
    }
};
