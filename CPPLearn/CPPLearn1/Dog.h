#pragma once

//¼±¾ðºÎ
enum Size {
	Biggest = 0,
	Big,
	Normal,
	Small,
	verySmall
};

class Dog {
	char _name[10];
	int _age;	
	Size _size;

public:
	void ShowInfo();
	void SetInfo(const char *name, int age, Size size);
	void ShowHowl();
};