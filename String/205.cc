// 205. Isomorphic Strings

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int s_map[256] = {};
        int t_map[256] = {};

        for (int i = 0; i < s.size(); i++)
        {
            if (s_map[s[i]] != 0 && s_map[s[i]] != t[i])
                return false;

            if (t_map[t[i]] != 0 && t_map[t[i]] != s[i])
                return false;

            s_map[s[i]] = t[i];
            t_map[t[i]] = s[i];
        }

        return true;
    }
};

int main(int argc, char **argv)
{
    string s("egg"), t("add");
    auto have = Solution().isIsomorphic(s, t);
    auto want = true;

    assert(have == want);

    cout << "test passed" << endl;
}
