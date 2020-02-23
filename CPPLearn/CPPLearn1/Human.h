#pragma once

//¼±¾ðºÎ

class Human {
	char _name[10];
	int _age;
	bool _isMan;
	
public:
	void ShowInfo();
	void SetInfo(const char *name, int age, bool isman);
	void Showlaughter();
};