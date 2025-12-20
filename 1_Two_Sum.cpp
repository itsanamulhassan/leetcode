// brute-force solution
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> indexs;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                long sum = nums[i] + nums[j];
                if (sum == target)
                {
                    indexs.push_back(i);
                    indexs.push_back(j);
                }
            }
        }
        return indexs;
    }
};

// optimize solution
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];

            if (map.find(complement) != map.end())
            {
                return {i, map[complement]};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};