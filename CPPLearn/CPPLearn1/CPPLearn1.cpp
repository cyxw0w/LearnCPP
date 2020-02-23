#include "pch.h"
#include "Human.h"
#include "Dog.h"

int main()
{
	////객체생성
	//Human man, girl;
	//man.SetInfo("김철수", 18, true);
	//girl.SetInfo("이영희", 18, false);
	//man.ShowInfo();
	//man.Showlaughter();
	//girl.ShowInfo();
	//girl.Showlaughter();

	Dog siba, sib2, sib3, sib4, sib5, sib6;
	siba.SetInfo("철수", 5, Big);
	siba.ShowInfo();
	siba.ShowHowl();
	cout << "======================================" << endl;
	sib2.SetInfo("길동", 23, Biggest);
	sib2.ShowInfo();
	sib2.ShowHowl();
	cout << "======================================" << endl;
	sib3.SetInfo("미세", 2, Normal);
	sib3.ShowInfo();
	sib3.ShowHowl();
	cout << "======================================" << endl;
	sib4.SetInfo("먼지", 1, Small);
	sib4.ShowInfo();
	sib4.ShowHowl();
	cout << "======================================" << endl;
	sib5.SetInfo("코로나", 1, verySmall);
	sib5.ShowInfo();
	sib5.ShowHowl();
	cout << "======================================" << endl;
	sib6.SetInfo("초초", 71, verySmall);
	sib6.ShowInfo();
	sib6.ShowHowl();

	system("pause");
	return 0;
}
