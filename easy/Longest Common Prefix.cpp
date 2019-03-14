class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre;
        if(strs.empty())
        {
            return pre;
        }
        for(int i=0;i<strs[0].length();++i)
        {
            char tmp = strs[0][i];
            for(int j=1;j<strs.size();++j)
            {
                if(strs[j][i]!=tmp)
                {
                    return pre;
                }
            }
            pre.push_back(tmp);
        }
        return pre;
    }
};