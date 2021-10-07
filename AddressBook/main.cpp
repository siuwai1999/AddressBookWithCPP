#include<iostream>
#include<string>
using namespace std;

#define MAX 1000

void Menu()
{
	cout << "***************************" << endl;
	cout << "***** 1 �B �K�[�p���H *****" << endl;
	cout << "***** 2 �B ����p���H *****" << endl;
	cout << "***** 3 �B �R���p���H *****" << endl;
	cout << "***** 4 �B �d���p���H *****" << endl;
	cout << "***** 5 �B �ק��p���H *****" << endl;
	cout << "***** 6 �B �M���p���H *****" << endl;
	cout << "***** 0 �B �h�X�p��ï *****" << endl;
	cout << "***************************" << endl;
};

struct info
{
	string name;
	int sex;
	int age;
	string phone;
	string addr;
};

struct addrbook
{
	struct info array[MAX];
	int size;
};

void add(addrbook * book)
{
	if (book->size == MAX)
	{
		cout << "�p��ï�w��" << endl;
		return;
	}
	else
	{
		cout << "�K�[�p���H" << endl;
		cout << "�m�W�G ";
		string name_temp;
		cin >> name_temp;
		book->array[book->size].name = name_temp;

		for (;;)
		{
			cout << "1 - �k �B 2 - �k" << endl;
			cout << "�m�O�G ";
			int sex_temp = 0;
			cin >> sex_temp;
			if (sex_temp == 1 || sex_temp == 2)
			{
				book->array[book->size].sex = sex_temp;
				break;
			}
			else
			{
				cout << "��J���~" << endl;
			}
		}

		for (;;)
		{
			cout << "�~�֡G ";
			int age_temp = 0;
			cin >> age_temp;
			if (age_temp > 0)
			{
				book->array[book->size].age = age_temp;
				break;
			}
			else
			{
				cout << "��J���~" << endl;
			}
		}

		cout << "�q�ܡG ";
		string phone_temp;
		cin >> phone_temp;
		book->array[book->size].phone = phone_temp;

		cout << "�a�}�G ";
		string addr_temp;
		cin >> addr_temp;
		book->array[book->size].addr = addr_temp;

		book->size++;
		cout << "�K�[���\" << endl;
		system("pause");
		system("cls");
	}

};

void show(addrbook * book)
{
	if (book->size == 0)
	{
		cout << "�L�p���H���" << endl;
	}
	else
	{
		for (int i = 0; i < book->size; i++)
		{
			//string sex_std;
			//if (book->array[i].sex == 1)
			//{
			//	sex_std = "�k";
			//}
			//else
			//{
			//	sex_std = "�k";
			//}
			cout << "�m�W�G" << book->array[i].name
				<< "  �ʧO�G" << (book->array[i].sex == 1 ? "�k" : "�k") /*sex_std*/
				<< "  �~�֡G" << book->array[i].age
				<< "  �q�ܡG" << book->array[i].phone
				<< "  �a�}�G" << book->array[i].addr
				<<endl;
		}
		system("pause");
		system("cls");
	}

}

int check(addrbook* book , string name_check)
{
	for (int i = 0; i < book->size; i++)
	{
		if (book->array[i].name == name_check)
		{
			return i;
		}
	}
	return -1;
}

void dele(addrbook *book)
{
	string name_check;
	cout << "�R���p���H" << endl;
	cout << "��J�m�W�G";
	cin >> name_check;
	int name_res = check(book, name_check);
	cout << name_res;
}

int main()
{
	int select = 0;

	addrbook book;

	book.size = 0;

	for (; ; )
	{

		Menu();

		cin >> select;

		switch (select)
		{
		case 1:
			add(&book);
			break;
		case 2:
			show(&book);
			break;
		case 3:
			dele(&book);
			break;
		default:
			cout << "�h�X�p��ï" << endl;
			system("pause");
			return 0;
			break;
		}

	}

	system("pause");
	return 0;
}