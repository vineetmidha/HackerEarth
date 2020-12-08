
// Right Rotation by K 

#include<bits/stdc++.h>

using namespace std;

void reverse(int a[], int start, int end){
	while (start < end){
		swap(a[start], a[end]);
		start++;
		end--;
	}
}
void display(int a[], int n){
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void solve(int a[], int n, int k){
	k = k % n;

	// reverse k elements
	reverse (a, n-k, n-1);

	// reverse n-k elements
	reverse (a, 0, n-k-1);

	// reverse n elements
	reverse (a, 0, n-1);

    display(a, n);
}
int main()
{
	int t;
	cin >> t;

	while (t--){
		int n, k;

		cin >> n >> k;

		int a[n];

		for (int i=0; i<n; i++){
			cin >> a[i];
		}

		solve(a, n, k);
	}
}


