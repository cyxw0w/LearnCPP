#include "pch.h"
#include "Dog.h"

//정의부
void Dog::ShowInfo() {
	cout << "강아지 " << _name << " 은(는) " << _age << "세 입니다." << endl;
}
void Dog::SetInfo(const char *name, int age, Size size) {
	sprintf_s(_name, sizeof(_name), name);
	_age = age;	
	_size = size;
}
void Dog::ShowHowl(){
	cout << endl << "이 개는 ";

	switch (_size) {
	case Biggest:
		if (_age < 5)
			cout << "-하하하하-" ;
		else
			cout << "-호호호호-" ;
		break;
	case Big:
		if (_age < 5)
			cout << "-왈왈왈왈-" ;
		else
			cout << "-월월월월-" ;
		break;
	case Normal:
		if (_age < 5)
			cout << "-으르르르-" ;
		else
			cout << "-르르르르-" ;
		break;
	case Small:
		if (_age < 5)
			cout << "-와르르르-" ;
		else
			cout << "-우르르르-";
		break;
	case verySmall:
		if (_age < 5)
			cout << "(대충 짖는소리)" ;
		else
			cout << "-뭐-"  ;
		break;
	}

	cout << "   라고 짖습니다." << endl << endl;
}