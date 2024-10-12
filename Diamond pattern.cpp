#include<iostream>
using namespace std; 
int main() {
	int row, col;
	cin >> row >> col;
	int i = 1;
	//upper loop
	while (i <= row) {
		int j = col;
		while (j >= 1) {
			if (j <= i) { cout << " *"; }
			else {
				cout << " ";
			}
			j--;
		}
		cout << endl;
		i++;
	}int l = 1;
	//lower loop
while (l <= row) {
		int k = 1;
		while (k<=col) {
			if (l < k) { cout << " *"; }
			else {
				cout << " ";
			}
				k++;
		}
		cout << endl;
		l++;
	}
	return 0;
}