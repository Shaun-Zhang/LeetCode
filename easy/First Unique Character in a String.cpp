class Solution {
public
    int firstUniqChar(string s) {
        mapchar, int m;
	for (int i = 0; i  s.length(); i++)
	{
		mapchar, intiterator key = m.find(s[i]);
    	if (key == m.end())
		{
			m.insert(pairchar, int(s[i], i));
		}
        else
        {
            m[s[i]]=s.length();
        }
	}
	int min = s.length();
    for (auto itr  m)
	{
		if (itr.second  min)
		{
			min = itr.second;
		}
	}
	if(min==s.length())
        return -1;
    else
        return min;
        
    }
};