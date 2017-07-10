/*****************************************************************
Name : 
Date : 2017/02/09
By   : Username
Final: 2017/02/09
*****************************************************************/
#include <iostream>
using namespace std;
/*==============================================================*/
int main(int argc, char const *argv[]){
	int a = 0, b = 0, c = 0, sun = 0;
	char aa[50] = "google", bb, cc;
	while (a != 4) {
		cout << "目前字串:" << aa << endl;
		sun = sizeof(aa)/sizeof(aa[0]) - 1;
		cout << "1.更改字串 2.轉大寫 3.轉小寫 4.離開" << endl;
		cout << "請輸入功能選項:";
		cin >> a;

		//更改字串
		while (a == 1) {
			cout << "目前字串:" << aa << endl;
			cout << "1.全部更改 2.單一更改 3.離開" << endl;
			cout << "請輸入功能選項:";
			cin >> b;
			if (b == 1) {
				cin >> aa;
			}
			else if (b == 2) {
				cout << "請輸入欲更改之位置:";
				cin >> c;
				cout << "請輸入更改後之字元:";
				cin >> cc;
				aa[c - 1] = cc;
				cout << "目前字串:" << aa << endl;
			}
			else if (b == 3) break;
		}
		//轉大寫
		while (a == 2) {
			cout << "目前字串:" << aa << endl;
			cout << "1.全部轉大寫 2.單一轉大寫 3.離開" << endl;
			cout << "請輸入功能選項:";
			cin >> b;
			//全部轉大寫
			if (b == 1) {
				for (int i = 0; i < sun; i++) {
					aa[i] = toupper(aa[i]);
				}
			}
			else if (b == 2) {
				cout << "請輸入欲更改之位置:";
				cin >> c;
				aa[c - 1] = toupper(aa[c - 1]);
			}
			else if (b == 3) break;
		}
		//轉小寫
		while (a == 3) {
			cout << "目前字串:" << aa << endl;
			cout << "1.全部轉小寫 2.單一轉小寫 3.離開" << endl;
			cout << "請輸入功能選項:";
			cin >> b;
			//全部轉小寫
			if (b == 1) {
				for (int i = 0; i < sun; i++) {
					aa[i] = tolower(aa[i]);
				}
			}
			else if (b == 2) {
				cout << "請輸入欲轉換之位置:";
				cin >> c;
				aa[c - 1] = tolower(aa[c - 1]);
			}
			else if (b == 3) break;
		}
		//結束離開
		while (a == 4) break;
	}
	return 0;
}
/*==============================================================*/