#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int a[10][10],aa[10][10];
	//初始化
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			a[i][j] = 0;
			aa[i][j] = 0;
		}
	}
	//亂數
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			a[i][j] = (rand() % 50) + 1;
		}
	}
	//第i行與第i-1行相加置入新陣列第i行
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0)
				aa[i][j] = a[i][j];
			else
				aa[i][j] = a[i][j] + a[i - 1][j];
		}
	}
	//印出初陣列
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (a[i][j] < 10)
				cout << " ";
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "---------------------------------" << endl;
	//印出結果
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (aa[i][j] < 10)
				cout << " ";
			cout << aa[i][j] << " ";
		}	
		cout << endl;
	}

	system("pause");
	return 0;
}