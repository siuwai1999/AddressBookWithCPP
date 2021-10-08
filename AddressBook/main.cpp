#include<iostream>
#include<string>
#include <windows.h>
using namespace std;

#define MAX 1000

void SetColor(int color = 7)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}

void pause_cls()
{
	system("pause");
	system("cls");
}

void Menu()
{
	cout << " " << endl;
	cout << "  ¢i¢i¢i¢i¢iùß  ¢i¢i¢i¢i¢i¢iùß  ¢i¢i¢i¢i¢i¢iùß  ¢i¢i¢i¢i¢i¢iùß  ¢i¢i¢i¢i¢i¢i¢iùß ¢i¢i¢i¢i¢i¢i¢iùß ¢i¢i¢i¢i¢i¢i¢iùß" << endl;
	cout << " ¢i¢iùÝùùùù¢i¢iùß ¢i¢iùÝùùùù¢i¢iùß ¢i¢iùÝùùùù¢i¢iùß ¢i¢iùÝùùùù¢i¢iùß ¢i¢iùÝùùùùùùùùùå ¢i¢iùÝùùùùùùùùùå ¢i¢iùÝùùùùùùùùùå" << endl;
	cout << " ¢i¢i¢i¢i¢i¢i¢iùø ¢i¢iùø  ¢i¢iùø ¢i¢iùø  ¢i¢iùø ¢i¢i¢i¢i¢i¢iùÝùå ¢i¢i¢i¢i¢iùß   ¢i¢i¢i¢i¢i¢i¢iùß ¢i¢i¢i¢i¢i¢i¢iùß" << endl;
	cout << " ¢i¢iùÝùùùù¢i¢iùø ¢i¢iùø  ¢i¢iùø ¢i¢iùø  ¢i¢iùø ¢i¢iùÝùùùù¢i¢iùß ¢i¢iùÝùùùùùå   ùãùùùùùùùù¢i¢iùø ùãùùùùùùùù¢i¢iùø" << endl;
	cout << " ¢i¢iùø  ¢i¢iùø ¢i¢i¢i¢i¢i¢iùÝùå ¢i¢i¢i¢i¢i¢iùÝùå ¢i¢iùø  ¢i¢iùø ¢i¢i¢i¢i¢i¢i¢iùß ¢i¢i¢i¢i¢i¢i¢iùø ¢i¢i¢i¢i¢i¢i¢iùø" << endl;
	cout << " ùãùùùå  ùãùùùå ùãùùùùùùùùùùùå  ùãùùùùùùùùùùùå  ùãùùùå  ùãùùùå ùãùùùùùùùùùùùùùå ùãùùùùùùùùùùùùùå ùãùùùùùùùùùùùùùå" << endl;
	cout << " " << endl;
	cout << "\t¢i¢i¢i¢i¢i¢iùß      ¢i¢i¢i¢i¢i¢iùß      ¢i¢i¢i¢i¢i¢iùß     ¢i¢iùß  ¢i¢iùß " << endl;
	cout << "\t¢i¢iùÝùùùù¢i¢iùß    ¢i¢iùÝùùùùùù¢i¢iùß    ¢i¢iùÝùùùùùù¢i¢iùß    ¢i¢iùø ¢i¢iùÝùå " << endl;
	cout << "\t¢i¢i¢i¢i¢i¢iùÝùå    ¢i¢iùø   ¢i¢iùø    ¢i¢iùø   ¢i¢iùø    ¢i¢i¢i¢i¢iùÝùå " << endl;
	cout << "\t¢i¢iùÝùùùù¢i¢iùß    ¢i¢iùø   ¢i¢iùø    ¢i¢iùø   ¢i¢iùø    ¢i¢iùÝùù¢i¢iùß " << endl;
	cout << "\t¢i¢i¢i¢i¢i¢iùÝùå    ùã¢i¢i¢i¢i¢i¢iùÝùå    ùã¢i¢i¢i¢i¢i¢iùÝùå    ¢i¢iùø  ¢i¢iùß " << endl;
	cout << "\tùãùùùùùùùùùùùå      ùãùùùùùùùùùùùå      ùãùùùùùùùùùùùå     ùãùùùå  ùãùùùå " << endl;
	cout << " " << endl;
	cout << "\t\t***************************" << endl;
	cout << "\t\t***** 1 ¡B ²K¥[Ápµ¸¤H *****" << endl;
	cout << "\t\t***** 2 ¡B Åã¥ÜÁpµ¸¤H *****" << endl;
	cout << "\t\t***** 3 ¡B §R°£Ápµ¸¤H *****" << endl;
	cout << "\t\t***** 4 ¡B ¬d¸ßÁpµ¸¤H *****" << endl;
	cout << "\t\t***** 5 ¡B ­×§ïÁpµ¸¤H *****" << endl;
	cout << "\t\t***** 6 ¡B ²MªÅÁpµ¸Ã¯ *****" << endl;
	cout << "\t\t***** 0 ¡B °h¥XÁpµ¸Ã¯ *****" << endl;
	cout << "\t\t***************************" << endl;
	cout << " " << endl;
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
		SetColor(12);
		cout << "Ápµ¸Ã¯¤wº¡" << endl;
		SetColor(10);
		return;
	}
	else
	{
		cout << "²K¥[Ápµ¸¤H" << endl;
		cout << "©m¦W¡G ";
		string name_temp;
		cin >> name_temp;
		book->array[book->size].name = name_temp;

		for (;;)
		{
			cout << "1 - ¨k ¡B 2 - ¤k" << endl;
			cout << "©m§O¡G";
			int sex_temp = 0;
			cin >> sex_temp;
			if (sex_temp == 1 || sex_temp == 2)
			{
				book->array[book->size].sex = sex_temp;
				break;
			}
			else
			{
				cout << "¿é¤J¿ù»~" << endl;
			}
		}

		for (;;)
		{
			cout << "¦~ÄÖ¡G";
			int age_temp = 0;
			cin >> age_temp;
			if (age_temp > 0)
			{
				book->array[book->size].age = age_temp;
				break;
			}
			else
			{
				cout << "¿é¤J¿ù»~" << endl;
			}
		}

		cout << "¹q¸Ü¡G";
		string phone_temp;
		cin >> phone_temp;
		book->array[book->size].phone = phone_temp;

		cout << "¦a§}¡G";
		string addr_temp;
		cin >> addr_temp;
		book->array[book->size].addr = addr_temp;

		book->size++;
		cout << "²K¥[¦¨¥\" << endl;
	}
	pause_cls();
};

int null_check(addrbook *book)
{
	if (book->size == 0)
	{
		SetColor(12);
		cout << "Ápµ¸¤H¸ê®Æ¬°ªÅ" << endl;
		SetColor(10);
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
	cout << "Åã¥ÜÁpµ¸¤H" << endl;
	for (int i = 0; i < book->size; i++)
	{
		//string sex_std;
		//if (book->array[i].sex == 1)
		//{
		//	sex_std = "¨k";
		//}
		//else
		//{
		//	sex_std = "¤k";
		//}
		cout << "©m¦W¡G" << book->array[i].name << "\t"
			<< " ©Ê§O¡G" << (book->array[i].sex == 1 ? "¨k" : "¤k") << "\t" /*sex_std*/
			<< " ¦~ÄÖ¡G" << book->array[i].age << "\t"
			<< " ¹q¸Ü¡G" << book->array[i].phone << "\t"
			<< " ¦a§}¡G" << book->array[i].addr << "\t"
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
		cout << "§R°£Ápµ¸¤H" << endl;
		cout << "¿é¤J©m¦W¡G";
		cin >> name_check;
		int name_res = check(book, name_check);
		if (name_res == -1)
		{
			SetColor(12);
			cout << "§ä¤£¨ì  "<< name_check <<"  ªºÁpµ¸¤H¸ê®Æ" << endl;
			SetColor(10);
		}
		else
		{
			for (int i = name_res; i < book->size; i++)
			{
				book->array[i] = book->array[i + 1];
			}
			book->size--;
			SetColor(12);
			cout <<"¦¨¥\§R°£ "<< name_check << " ªºÁpµ¸¤H¸ê®Æ" << endl;
			SetColor(10);
		}
	pause_cls();
}

void find(addrbook * book)
{
	string name_check;
	cout << "¬d¸ßÁpµ¸¤H" << endl;
	cout << "¿é¤J©m¦W¡G";
	cin >> name_check;
	int name_res = check(book, name_check);
	if (name_res != -1)
	{
		cout << "©m¦W¡G" << book->array[name_res].name
			<< "  ©Ê§O¡G" << (book->array[name_res].sex == 1 ? "¨k" : "¤k")
			<< "  ¦~ÄÖ¡G" << book->array[name_res].age
			<< "  ¹q¸Ü¡G" << book->array[name_res].phone
			<< "  ¦a§}¡G" << book->array[name_res].addr
			<< endl;
	}
	else
	{
		SetColor(12);
		cout << "§ä¤£¨ì  " << name_check << "  ªºÁpµ¸¤H¸ê®Æ" << endl;
		SetColor(10);
	}
	pause_cls();
}

void change(addrbook * book)
{
	string name_check;
	cout << "­×§ïÁpµ¸¤H" << endl;
	cout << "¿é¤J©m¦W¡G";
	cin >> name_check;
	int name_res = check(book, name_check);
	if (name_res != -1)
	{
		string name_temp;
		cout << "©m¦W¡G";
		cin >> name_temp;
		book->array[name_res].name = name_temp;
		int sex_temp;
		cout << "1 - ¨k ¡B 2 - ¤k" << endl;
		cout << "©Ê§O¡G";
		cin >> sex_temp;
		book->array[name_res].sex = sex_temp;
		int age_temp;
		cout << "¦~ÄÖ¡G";
		cin >> age_temp;
		book->array[name_res].age = age_temp;
		string phone_temp;
		cout << "¹q¸Ü¡G";
		cin >> phone_temp;
		book->array[name_res].phone = phone_temp;
		string addr_temp;
		cout << "¦a§}¡G";
		cin >> addr_temp;
		book->array[name_res].addr = addr_temp;
		SetColor(12);
		cout << "¦¨¥\­×§ï " << endl;
		SetColor(10);
	}
	else
	{
		cout << "§ä¤£¨ì  " << name_check << "  ªºÁpµ¸¤H¸ê®Æ" << endl;
	}
	pause_cls();
}

void deleall(addrbook * book)
{
	int deleall;
	cout << "0 - ¨ú®ø  ";
	SetColor(192);
	cout << "1 - ½T»{" << endl;
	SetColor(10);
	cout << "²MªÅÁpµ¸Ã¯¡G";
	cin >> deleall;
	if (deleall == 1)
	{
		book->size = 0;
		SetColor(12);
		cout << "¤w¸g²MªÅ¥þ³¡Ápµ¸¤H" << endl;
		SetColor(10);
	}
	else
	{
		cout << "¤w¨ú®ø" << endl;
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
		SetColor(10);
		Menu();
		cout << "½Ð¿ï¾Ü¥\¯à ( 0 ~ 6 )¡G";
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
			SetColor(12);
			cout << "°h¥XÁpµ¸Ã¯" << endl;
			SetColor(10);
			system("pause");
			return 0;
			break;
		}

	}
	system("pause");
	return 0;
}