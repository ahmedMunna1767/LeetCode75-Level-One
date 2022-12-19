// 1480. Running Sum of 1d Array

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); ++i)
        {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    auto result = vector<int>{1, 3, 6, 10};
    auto running_sum = Solution().runningSum(nums);

    for (auto v : nums)
    {
        cout << v << " ";
    }
    cout << endl;
    assert(nums == result);
    assert(running_sum == result);

    cout << "tests passed" << endl;
}