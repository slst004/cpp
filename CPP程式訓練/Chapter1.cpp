
#include <iostream>
using namespace std;

int main() {
	char a;
	int aa[10] = {72,101,108,108,111,32,87,111,114,100};
	for (int i = 0; i <= 9; i++) {
		a = aa[i];
		cout << a;
	}
	cout << endl;
	system("pause");
	return 0;
}