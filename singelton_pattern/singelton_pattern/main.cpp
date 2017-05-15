#include<iostream>
#include"singelton.h"

void first_marrige();
void second_marrige();

int main()
{
	cout << "before marrige:  " << singelton::instance()->get_name() << '\n';
	first_marrige();
	second_marrige();
	system("pause");
}

void first_marrige()
{
	singelton::instance()->set_name("Mary");
	cout << "in first marrige John's wife's name is " << singelton::instance()->get_name() << '\n';
}

void second_marrige()
{
	singelton::instance()->set_name("Sara");
	cout << "in second marrige John's wife's name is " << singelton::instance()->get_name() << '\n';
}