#include "pch.h"
#include "Human.h"

//���Ǻ�
void Human::ShowInfo() {
	char sex[10] = { 0. };
	if (_isMan)
		sprintf_s(sex, sizeof(sex), "����");
	else
		sprintf_s(sex, sizeof(sex), "����");
	cout << "�̸� : " << _name << ", ���� : " << _age << sex << endl;
}
void Human::SetInfo(const char *name, int age, bool isman) {
	sprintf_s(_name, sizeof(_name), name);
	_age = age;
	_isMan = isman;
}
void Human::Showlaughter() {
	if (_isMan)
		cout << "��������" << endl;
	else
		cout << "ȣȣȣȣ" << endl;
}