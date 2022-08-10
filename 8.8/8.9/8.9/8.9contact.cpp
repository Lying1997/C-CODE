#include<iostream>
#include"contact.h"
using namespace std;


void menu()
{
	cout << "********************************" << endl;
	cout << "********1.add       2.del*******" << endl;
	cout << "********3.serch     4.modify****" << endl;
	cout << "********5.sort      6.print*****" << endl;
	cout << "***********   0.exit   *********" << endl;
	cout << "********************************" << endl;
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SERCH,
	MODIFY,
	CLEAN,
	PRINT
};

int main()
{
	int select = 0;
	
	contact abs;
	abs.size = 0;


	while (true)
	{
		menu();

		cin >> select;
		
		switch (select)
		{
		case ADD:
			ADDContact(&abs);
			break;
		case DEL:
			DELContact(&abs);
			break;
		case SERCH:
			SERCHContact(&abs);
			break;
		case MODIFY:
			MODIFYContact(&abs);
			break;
		case CLEAN:
			CLEANContact(&abs);
			break;
		case PRINT:
			PRINTContact(&abs);
			break;
		case EXIT:
			cout << "欢迎下次使用" << endl;
			system("pause");
			break;
		default:
			printf("错误");
			break;
		}
	}

	

	

	


	system("pause");
	return 0;
}