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
	int point;
	string target;
	int target_point[10][10] = {
					1,1,1,1,1,1,1,1,1,1,
					1,2,2,2,2,2,2,2,2,1,
					1,2,3,3,3,3,3,3,2,1,
					1,2,3,4,4,4,4,3,2,1,
					1,2,3,4,5,5,4,3,2,1,
					1,2,3,4,5,5,4,3,2,1,
					1,2,3,4,4,4,4,3,2,1,
					1,2,3,3,3,3,3,3,2,1,
					1,2,2,2,2,2,2,2,2,1,
					1,1,1,1,1,1,1,1,1,1
	};
	int i, j;



	while (t--) {
		point = 0;
		for (i = 0; i < 10; i++) {
			cin >> target;
			//scanf("%s", &target);
			for (j = 0; j < 10; j++) {
				if (target[j] == 'X')	point += target_point[j][i];
				//printf("%s",target[j]);
			}
		}
		cout << point << endl;
		//printf("%d\n",point);
	}


	return 0;
}