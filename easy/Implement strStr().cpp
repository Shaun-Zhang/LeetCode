class Solution {
public:
    int strStr(string haystack, string needle) {
	if (needle == "")
		return 0;
	vector<int> next(needle.size());
	next[0] = -1;
	int begin = -1;
	for (int i = 1; i < needle.size(); ++i)
	{
		int j = next[i - 1];
		while (j >= 0 && needle[i - 1] != needle[j]) j = next[j];//递推计算
		if (j >= 0 && needle[i - 1] == needle[j]) next[i] = j + 1;
		else next[i] = 0;
	}
	for (int index =0;index < haystack.size(); ++index) {
		int pos = 0;
		int iter = index;
		while (iter < haystack.size() && pos < needle.size()) {
			if (haystack[iter] == needle[pos]) { ++iter; ++pos; }
			else {
				if (pos == 0) ++iter;
				else pos = next[pos - 1] + 1;
			}
		}
		if (pos == needle.size() && (iter - index) == needle.size())
        {   
            begin = index;
			break;
	    }
    }
	return begin;
    }
};