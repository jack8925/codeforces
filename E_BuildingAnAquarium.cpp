//https://codeforces.com/contest/1873/problem/E
//#	225538561
//When	Sep/27/2023 23:38UTC+8
//Who	jack8925
//Problem	E - Building an Aquarium
//Lang	GNU C++14
//Verdict	Accepte
//Time	62 ms
//Memory	1600 KB

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while (n--){
		long long int a, b,h;
		cin >> a>>b;
		vector <int> arr;
		
		for (int i = 0; i < a; i++){
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}
		
		sort(arr.begin(), arr.end());
		h = arr[0];
		
		if (a == 1){
			cout << arr[0] + b << '\n';
		}else{		
			for (long long int i = 0; i < a-1; i++){
				b-=(arr[i+1] - arr[i]) * (i + 1);
				h = arr[i+1];
				if (b == 0){
					break;
				}else if(b<0){ 
					h = arr[i+1] + b / (i + 1);
					if(b%(i+1) != 0)	h -= 1;
					
					break;
				}
			}
			if (b >= a){
				h = arr[a-1]+b/a;
			}
			cout << h << '\n';
		}
		
	}
	
	return 0;
}
