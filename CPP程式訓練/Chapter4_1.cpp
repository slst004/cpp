#include <iostream>

using namespace std;

int main() {
	int x = 10, y = 105, w, a;
	if (x >= y)w = y;
	else w = x;
	for (int i = 1; i <= w; i++) {
		if (x%i == 0 && y%i == 0) {
			a = i;
		}
	}
	cout << "最大公因數：" << a << endl;
	int s = y, ss = x;

	while (1) {
		if (ss > s) {
			s+=y;
		}
		else if (s > ss) {
			ss+=x;
		}
		else if (s ==ss) {
			cout << "最小公倍數：" << s << endl;
			break;
		}
	}
	system("pause");
}