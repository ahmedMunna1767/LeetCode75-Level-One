// 392. Is Subsequence

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int pointer_ss(0), pointer_tt(0);
        while (pointer_ss < s.size() && pointer_tt < t.size())
        {
            if (s[pointer_ss] == t[pointer_tt])
            {
                pointer_ss++;
            }

            pointer_tt++;
        }
        return pointer_ss == s.size();
    }

    bool isSubsequenceOptimized(string s, string t)
    {
        int pointer_ss(s.size() - 1), pointer_tt(t.size() - 1);
        while (pointer_ss >= 0 && pointer_tt >= 0)
        {
            if (s[pointer_ss] == t[pointer_tt])
            {
                pointer_ss--;
            }

            pointer_tt--;
        }
        return pointer_ss == -1;
    }
};

int main()
{
    string s("abc"), t("ahbgdc");

    auto have = Solution().isSubsequence(s, t);
    auto want = true;

    assert(have == want);

    cout << "test passed" << endl;
}