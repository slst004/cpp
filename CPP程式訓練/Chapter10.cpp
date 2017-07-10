/****************************************************************
Name : 
Date : 2017/07/07
By   : WENWEICHENG
Final: 2017/07/07
*****************************************************************/	
#include <iostream>
#include <cassert>
using namespace std;

class Fraction{
	private:
		int num;	//分子
		int den;	//分母
	public:
		Fraction();
		Fraction(int x, int y);
		Fraction(int z, int x, int y);
	public:
		print(int num, int den);
};

Fraction::Fraction(){};

Fraction::Fraction(int x, int y) : num(x), den(y){
	assert(y != 0);
	if(y < 0){
		num *= -1;
		den *= -1;
	}
}

Fraction::Fraction(int z, int x, int y) : den(y){
	assert(y > 0 && x >= 0);
	num = (z > 0 ? z * y + x : z * y - x);
	print(num,den);
}

Fraction::print(int num, int den){
	cout << num << "/" << den << endl;
	cout << "整數 = " << num / den << endl;
	cout << "小數 = " << num / static_cast<float>(den) << endl;	
	return 0;
}

//================================================================
int main(int argc, char const *argv[]){
	int a,b,c;
	cin >> a >> b >> c;
	Fraction s(a,b,c);
    return 0;
}
//================================================================
