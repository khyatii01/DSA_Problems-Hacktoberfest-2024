#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n;
		cin >> k;
        int cal, count;
        cal = count = 0;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(int i = 0; i < n; i++){
			cal = cal +arr[i];
			if(cal > k){
				break;
			}
			else{
				count++;
			}
		}
		cout << count << "\n";
	}
}
