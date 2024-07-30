// maximum subarray

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int size = arr.size();
        int ans = nums[0];
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum = sum + nums[i];
            if (ans < sum)
            {
                ans = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return ans;
    }
};