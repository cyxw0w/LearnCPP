#include "pch.h"
#include "Dog.h"

//���Ǻ�
void Dog::ShowInfo() {
	cout << "������ " << _name << " ��(��) " << _age << "�� �Դϴ�." << endl;
}
void Dog::SetInfo(const char *name, int age, Size size) {
	sprintf_s(_name, sizeof(_name), name);
	_age = age;	
	_size = size;
}
void Dog::ShowHowl(){
	cout << endl << "�� ���� ";

	switch (_size) {
	case Biggest:
		if (_age < 5)
			cout << "-��������-" ;
		else
			cout << "-ȣȣȣȣ-" ;
		break;
	case Big:
		if (_age < 5)
			cout << "-�ппп�-" ;
		else
			cout << "-��������-" ;
		break;
	case Normal:
		if (_age < 5)
			cout << "-��������-" ;
		else
			cout << "-��������-" ;
		break;
	case Small:
		if (_age < 5)
			cout << "-�͸�����-" ;
		else
			cout << "-�츣����-";
		break;
	case verySmall:
		if (_age < 5)
			cout << "(���� ¢�¼Ҹ�)" ;
		else
			cout << "-��-"  ;
		break;
	}

	cout << "   ��� ¢���ϴ�." << endl << endl;
}