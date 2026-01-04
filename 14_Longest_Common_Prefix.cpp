class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return "";

        sort(strs.begin(), strs.end());

        int str_min_len = INT_MAX, len = strs.size();

        for (int i = 0; i < len; i++)
        {
            int str_len = strs[i].size();
            str_min_len = min(str_min_len, str_len);
        }

        int c = 0;

        for (int i = 0; i < str_min_len; i++)
        {
            if (strs[0][i] == strs[len - 1][i])
            {
                c++;
            }
            else
            {
                break;
            }
        }

        if (c == 0)
        {
            return "";
        }
        else
        {
            return strs[0].substr(0, c);
        }
    }
};