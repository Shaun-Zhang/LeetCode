class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        char l,r;
        while(i<j)
        {
            if (!((s[i] >= 'A'&&s[i] <= 'Z') || (s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= '0'&&s[i] <= '9')))
		{
			i++;
			continue;
		}
		if (!((s[j] >= 'A'&&s[j] <= 'Z') || (s[j] >= 'a'&&s[j] <= 'z') || (s[j] >= '0'&&s[j] <= '9')))
		{
			j--;
			continue;
		}			
		l = tolower(s[i]);
		i++;	
		r = tolower(s[j]);
		j--;		
		if (l != r)
		{
			return false;
		}
        }
        return true;
    }
};