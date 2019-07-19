class Solution {
public:
	int romanToInt(string s) {
		unordered_map< char, int > m;
		int value;
		m['I'] = 1;
		m['V'] = 5;
		m['X'] = 10;
		m['L'] = 50;
		m['C'] = 100;
		m['D'] = 500;
		m['M'] = 1000;
		value = m[s[0]];
		for (int i = 1; i<s.length(); i++){
			if (m[s[i]]>m[s[i - 1]])
			{
				value = value + m[s[i]] - 2 * m[s[i - 1]];
			}
			else
			{
				value = value + m[s[i]];
			}
			
		}
		return value;
	}
};