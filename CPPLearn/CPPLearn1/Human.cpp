#include "pch.h"
#include "Human.h"

//정의부
void Human::ShowInfo() {
	char sex[10] = { 0. };
	if (_isMan)
		sprintf_s(sex, sizeof(sex), "남자");
	else
		sprintf_s(sex, sizeof(sex), "여자");
	cout << "이름 : " << _name << ", 나이 : " << _age << sex << endl;
}
void Human::SetInfo(const char *name, int age, bool isman) {
	sprintf_s(_name, sizeof(_name), name);
	_age = age;
	_isMan = isman;
}
void Human::Showlaughter() {
	if (_isMan)
		cout << "하하하하" << endl;
	else
		cout << "호호호호" << endl;
}