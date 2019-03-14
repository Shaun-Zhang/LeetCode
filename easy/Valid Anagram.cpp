class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m;
        if(s.length()!=t.length())
            return false;
        for(auto i:s)
        {
            m[i]++;
        }
        for(auto i:t)
        {
            if(m[i]!=0)
            {
                m[i]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};