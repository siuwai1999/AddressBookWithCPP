#include<iostream>
#include<string>
using namespace std;

#define MAX 1000

void pause_cls()
{
	system("pause");
	system("cls");
}

void Menu()
{
	cout << "***************************" << endl;
	cout << "***** 1 �B �K�[�p���H *****" << endl;
	cout << "***** 2 �B ����p���H *****" << endl;
	cout << "***** 3 �B �R���p���H *****" << endl;
	cout << "***** 4 �B �d���p���H *****" << endl;
	cout << "***** 5 �B �ק��p���H *****" << endl;
	cout << "***** 6 �B �M���p��ï *****" << endl;
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
	}
	pause_cls();
};

int null_check(addrbook *book)
{
	if (book->size == 0)
	{
		cout << "�p���H��Ƭ���" << endl;
		pause_cls();
		return 1;
	}
	else
	{
		return 0;
	}
}

void show(addrbook * book)
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
	pause_cls();
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
		if (name_res == -1)
		{
			cout << "�䤣��  "<< name_check <<"  ���p���H���" << endl;
		}
		else
		{
			for (int i = name_res; i < book->size; i++)
			{
				book->array[i] = book->array[i + 1];
			}
			book->size--;
			cout <<"���\�R�� "<< name_check << " ���p���H���" << endl;
		}
	pause_cls();
}

void find(addrbook * book)
{
	string name_check;
	cout << "�d���p���H" << endl;
	cout << "��J�m�W�G";
	cin >> name_check;
	int name_res = check(book, name_check);
	if (name_res != -1)
	{
		cout << "�m�W�G" << book->array[name_res].name
			<< "  �ʧO�G" << (book->array[name_res].sex == 1 ? "�k" : "�k")
			<< "  �~�֡G" << book->array[name_res].age
			<< "  �q�ܡG" << book->array[name_res].phone
			<< "  �a�}�G" << book->array[name_res].addr
			<< endl;
	}
	else
	{
		cout << "�䤣��  " << name_check << "  ���p���H���" << endl;
	}
	pause_cls();
}

void change(addrbook * book)
{
	string name_check;
	cout << "�ק��p���H" << endl;
	cout << "��J�m�W�G";
	cin >> name_check;
	int name_res = check(book, name_check);
	if (name_res != -1)
	{
		string name_temp;
		cout << "�m�W�G";
		cin >> name_temp;
		book->array[name_res].name = name_temp;
		int sex_temp;
		cout << "1 - �k �B 2 - �k" << endl;
		cout << "�ʧO�G";
		cin >> sex_temp;
		book->array[name_res].sex = sex_temp;
		int age_temp;
		cout << "�~�֡G";
		cin >> age_temp;
		book->array[name_res].age = age_temp;
		string phone_temp;
		cout << "�q�ܡG";
		cin >> phone_temp;
		book->array[name_res].phone = phone_temp;
		string addr_temp;
		cout << "�a�}�G";
		cin >> addr_temp;
		book->array[name_res].addr = addr_temp;
		cout << "���\�ק� " << endl;
	}
	else
	{
		cout << "�䤣��  " << name_check << "  ���p���H���" << endl;
	}
	pause_cls();
}

void deleall(addrbook * book)
{
	int deleall;
	cout << "0 - ���� �B 1 - �T�{" << endl;
	cout << "�M���p��ï�G";
	cin >> deleall;
	if (deleall == 1)
	{
		book->size = 0;
		cout << "�w�g�M�ť����p���H" << endl;
	}
	pause_cls();
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
			if (null_check(&book) != 1)
			{
				show(&book);
			}
			break;
		case 3:
			if (null_check(&book) != 1)
			{
				dele(&book);
			}
			break;
		case 4:
			if (null_check(&book) != 1)
			{
				find(&book);
			}
			break;
		case 5:
			if (null_check(&book) != 1)
			{
				change(&book);
			}
			break;
		case 6:
			if (null_check(&book) != 1)
			{
				deleall(&book);
			}
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