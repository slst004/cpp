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
		cout << "�ثe�r��:" << aa << endl;
		sun = sizeof(aa)/sizeof(aa[0]) - 1;
		cout << "1.���r�� 2.��j�g 3.��p�g 4.���}" << endl;
		cout << "�п�J�\��ﶵ:";
		cin >> a;

		//���r��
		while (a == 1) {
			cout << "�ثe�r��:" << aa << endl;
			cout << "1.������� 2.��@��� 3.���}" << endl;
			cout << "�п�J�\��ﶵ:";
			cin >> b;
			if (b == 1) {
				cin >> aa;
			}
			else if (b == 2) {
				cout << "�п�J����蠟��m:";
				cin >> c;
				cout << "�п�J���ᤧ�r��:";
				cin >> cc;
				aa[c - 1] = cc;
				cout << "�ثe�r��:" << aa << endl;
			}
			else if (b == 3) break;
		}
		//��j�g
		while (a == 2) {
			cout << "�ثe�r��:" << aa << endl;
			cout << "1.������j�g 2.��@��j�g 3.���}" << endl;
			cout << "�п�J�\��ﶵ:";
			cin >> b;
			//������j�g
			if (b == 1) {
				for (int i = 0; i < sun; i++) {
					aa[i] = toupper(aa[i]);
				}
			}
			else if (b == 2) {
				cout << "�п�J����蠟��m:";
				cin >> c;
				aa[c - 1] = toupper(aa[c - 1]);
			}
			else if (b == 3) break;
		}
		//��p�g
		while (a == 3) {
			cout << "�ثe�r��:" << aa << endl;
			cout << "1.������p�g 2.��@��p�g 3.���}" << endl;
			cout << "�п�J�\��ﶵ:";
			cin >> b;
			//������p�g
			if (b == 1) {
				for (int i = 0; i < sun; i++) {
					aa[i] = tolower(aa[i]);
				}
			}
			else if (b == 2) {
				cout << "�п�J���ഫ����m:";
				cin >> c;
				aa[c - 1] = tolower(aa[c - 1]);
			}
			else if (b == 3) break;
		}
		//�������}
		while (a == 4) break;
	}
	return 0;
}
/*==============================================================*/