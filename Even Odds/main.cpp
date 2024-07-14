#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long a,k;
   cin>>a>>k;

    long long mid = a / 2;
	if (a % 2 != 0)
		mid++;

	if (k <= mid)
		cout << (k - 1) * 2 + 1 << endl;
	else
		cout << (k - mid) * 2 << endl;

}
