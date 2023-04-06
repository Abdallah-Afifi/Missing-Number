#include <iostream>

using namespace std;


void findMissing(int arr[], int N)
{
	int i;
	int temp[10];
	int x = 0;
	for (int i = 0; i < N; i++) {
		temp[i] = 0;
	}

	for (i = 0; i < N-1; i++) {
		x = arr[i] - 1;
		temp[x] = 1;
	}


	int ans = 0;
	for (i = 0; i <= N; i++) {
		if (temp[i] == 0)
			ans = i + 1;
	}
	cout << ans;
}


int main() {
	
	int arr[10];
	int n;

	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		cin >> arr[i];
	}
		findMissing(arr, n);

	
	
	
	
	
	
	
	return 0;
}