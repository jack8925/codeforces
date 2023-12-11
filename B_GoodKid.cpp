#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	//scanf("%d", &t);

	int ans, lowest;

	while (t--) {
		ans = 1;
		lowest = 0;

		int n;
		cin >> n;
		vector <int> arr;

		for (int i = 0; i < n; i++) {
			int temp;
			cin >> temp;
			arr.push_back(temp);
			if (arr[lowest] > temp)	lowest = i;
		}
		arr[lowest] += 1;

		for (int i = 0; i < arr.size(); i++) {
			ans *= arr[i];
		}

		cout << ans << '\n';

	}


	return 0;
}