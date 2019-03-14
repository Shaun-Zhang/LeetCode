class Solution {
public:
    void onePlus(vector<int>& digits,int i)
    {
        digits[i]++;
        if(digits[i]==10)
        {
            digits[i]=0;
            if(i!=0)
            {
                onePlus(digits,i-1);
            }
            else
            {
                digits.insert(digits.begin(),1);
                return;
            }
        }
        else
        {
            return;
        }
    }
    vector<int> plusOne(vector<int>& digits) {
        onePlus(digits,digits.size()-1);
        return digits;
    }
};