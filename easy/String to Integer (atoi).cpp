class Solution {
public:
    int myAtoi(string str) {
        long long res = 0;
        int pos = 1;
        bool flag = 0;
        for(auto i:str)
        {
            if(i==' ')
            {
               if(flag != 0)
                   return res;
                else
                {
                    continue;
                }
            }
            else if(i=='-') 
            {
                if(flag != 0)
                    return res;
                else
                {
                    pos = -1;
                    flag = 1;
                }
            }
            else if(i=='+')
            {
                if(flag != 0)
                    return res;
                else
                {    pos = 1;
                    flag = 1;         
                }
            }
            else if(i>'9'||i<'0')
            {
                return res;
            }           
            else if(i>='0'&&i<='9')
            {
                flag = 1;
                res = res*10+(i-'0')*pos;
                if(res>INT_MAX)
                    return INT_MAX;
                else if(res<INT_MIN)
                    return INT_MIN;
            }
        }
        return res;
    }
};