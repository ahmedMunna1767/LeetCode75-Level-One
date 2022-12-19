// 724. Find Pivot Index

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int total_sum = 0;
        for (auto n : nums)
        {
            total_sum += n;
        }

        int right_sum = total_sum;
        int left_sum = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            right_sum -= nums[i];
            if (right_sum == left_sum)
                return i;
            left_sum += nums[i];
        }

        return -1;
    }
};

int main(int argc, char **argv)
{
    auto nums = vector<int>{1, 7, 3, 6, 5, 6};
    auto want = 3;

    auto have = Solution().pivotIndex(nums);

    assert(want == have);

    cout << "tests passed" << endl;
}