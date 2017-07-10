#include <iostream>
using namespace std;

void main() {
	int x = 0, *y = new int[100];
	while (1) {
		cout << "½Ð¿é¤J¼Æ¦r¡G";
		cin >> y[x];
		if (y[x] == 0)break;
		x++;
	}
	for (int i=0; i < x; i++) {
		cout << y[i] << " ";
	}
	system("pause");
}