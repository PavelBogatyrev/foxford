#include <iostream>
using namespace std;

int main()
{
	int n, k, ans;
	cin >> n >> k;
	ans = (n >>= k);
	ans = (n <<= k);
	cout << ans << endl;
}