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

	while (t--) {
		int coin = 0;

		string str;
		cin >> str;


		for (int i = 0; i < str.size()-1; i++) {
			if (str[i] == 'A' && str[i + 1] == 'B') {
				if (i + 2 < str.size()) {
					if (str[i + 2] == 'A') {
						str[i + 1] = 'C';
						str[i + 2] = 'B';
						coin++;
						i = -1;
					} else {
						str[i] = 'B';
						str[i + 1] = 'C';
						coin++;
						i = -1;
					}
				}else {
					str[i] = 'B';
					str[i + 1] = 'C';
					coin++;
					i = -1;
				}
			}else if(str[i] == 'B' && str[i + 1] == 'A'){
				str[i] = 'C';
				str[i + 1] = 'B';
				coin++;
				i = -1;
			}

		}

		cout << coin << '\n';

	}


	return 0;
}