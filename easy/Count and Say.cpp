class Solution {
public:
    string count(string in)
    {
        string out;
        char count = '1';
        char now = in[0];
        for(int i=1;i<=in.length();i++)
        {
            if(now == in[i])
            {
                count++;
            }
            else
            {
                out.push_back(count); 
                out.push_back(now);
                now = in[i];
                count = '1';
            }
        }
        return out;
    }
    string countAndSay(int n) {
        string str = "1";
        for(int i = 1;i < n;i++)
        {
            str = count(str);
        }
        return str;
    }
};