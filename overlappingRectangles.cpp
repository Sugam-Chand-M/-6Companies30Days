#include<bits/stdc++.h>
using namespace std;
int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        /*if(L1[0]==R1[0] || L1[1]==R1[1] || L2[0]==R2[0] || L2[1]==R2[1]) //straight line
        {
            return 0;
        }*/
        if(L1[0]>R2[0] || L2[0]>R1[0]) // left side of rectangle
        {
            return 0;
        }
        if(R2[1]>L1[1] || R1[1]>L2[1]) // above the rectangle
        {
            return 0;
        }
        return 1;
}
int main()
{
	int p[2],q[2],r[2],s[2];
	cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
	int ans=doOverlap(p,q,r,s);
	cout << ans << endl;
	return 0;
}