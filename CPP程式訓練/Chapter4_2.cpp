#include <iostream>

using namespace std;

int n = 5, m = 5, a[4][5];

int main() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = 0;
		}
	}

	int z = 1, w = 0, q = 0, ss = 1;
	int s = n*m;
	while (1) {
		while (z == 1) {
			if (ss > s)break;
			if (a[w][q] == 0 && q < m) {
				a[w][q] = ss;
				ss++;
				q++;
			}
			else {
				q--;
				w++;
				z = 2;
			}
		}
		while (z == 2) {
			if (ss > s)break;
			if (a[w][q] == 0 && w < n) {
				a[w][q] = ss;
				ss++;
				w++;
			}
			else {
				w--;
				q--;
				z = 3;
			}
		}
		while (z == 3) {
			if (ss > s)break;
			if (a[w][q] == 0 && q >= 0) {
				a[w][q] = ss;
				ss++;
				q--;
			}
			else {
				q++;
				w--;
				z = 4;
			}
		}
		while (z == 4) {
			if (ss > s)break;
			if (a[w][q] == 0 && w >= 0) {
				a[w][q] = ss;
				ss++;
				w--;
			}
			else {
				w++;
				q++;
				z = 1;
			}
		}
		if (ss > s)break;
	}
	
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		if (a[i][j] < 10)cout << " ";
		cout << a[i][j] << " ";
	}
	cout << endl;
}

	system("pause");
}