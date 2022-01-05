#include<bits/stdc++.h>
using namespace std;
vector<vector<string> > Anagrams(vector<string>& string_list) {
        map<string,vector<string>> m;
        for(int i=0;i<string_list.size();i++)
        {
            string s=string_list[i];
            sort(s.begin(),s.end());
            m[s].push_back(string_list[i]);
        }
        vector<vector<string>> ans(m.size());
        int idx=0;
        for(auto x:m)
        {
            auto v=x.second;
            for(int i=0;i<v.size();i++)
            {
                ans[idx].push_back(v[i]);
            }
            idx++;
        }
        return ans;
}
int main()
{
	int n;
	cin >> n;
	vector<string> v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
	}
	vector<vector<string>> res=Anagrams(v);
	for(int i=0;i<res.size();i++)
	{
		for(int j=0;j<res[i].size();j++)
		{
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}