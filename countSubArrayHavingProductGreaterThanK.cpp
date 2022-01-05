#include<bits/stdc++.h>
using namespace std;
int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(k<=1) return 0;
        long long prod=1;
        int result=0;
        int left=0,right=0;
        while(right<a.size())
        {
            prod*=a[right];
            while(prod>=k)
            {
                prod/=a[left];
                left++;
            }
            result+=right-left+1;
            right++;
        }
        return result;
}
int main()
{
	int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
	cout << countSubArrayProductLessThanK << endl;
	return 0;
}