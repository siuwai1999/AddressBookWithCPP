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
	cout << "***** 1 、 添加聯絡人 *****" << endl;
	cout << "***** 2 、 顯示聯絡人 *****" << endl;
	cout << "***** 3 、 刪除聯絡人 *****" << endl;
	cout << "***** 4 、 查詢聯絡人 *****" << endl;
	cout << "***** 5 、 修改聯絡人 *****" << endl;
	cout << "***** 6 、 清空聯絡簿 *****" << endl;
	cout << "***** 0 、 退出聯絡簿 *****" << endl;
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
		cout << "聯絡簿已滿" << endl;
		return;
	}
	else
	{
		cout << "添加聯絡人" << endl;
		cout << "姓名： ";
		string name_temp;
		cin >> name_temp;
		book->array[book->size].name = name_temp;

		for (;;)
		{
			cout << "1 - 男 、 2 - 女" << endl;
			cout << "姓別： ";
			int sex_temp = 0;
			cin >> sex_temp;
			if (sex_temp == 1 || sex_temp == 2)
			{
				book->array[book->size].sex = sex_temp;
				break;
			}
			else
			{
				cout << "輸入錯誤" << endl;
			}
		}

		for (;;)
		{
			cout << "年齡： ";
			int age_temp = 0;
			cin >> age_temp;
			if (age_temp > 0)
			{
				book->array[book->size].age = age_temp;
				break;
			}
			else
			{
				cout << "輸入錯誤" << endl;
			}
		}

		cout << "電話： ";
		string phone_temp;
		cin >> phone_temp;
		book->array[book->size].phone = phone_temp;

		cout << "地址： ";
		string addr_temp;
		cin >> addr_temp;
		book->array[book->size].addr = addr_temp;

		book->size++;
		cout << "添加成功" << endl;
	}
	pause_cls();
};

int null_check(addrbook *book)
{
	if (book->size == 0)
	{
		cout << "聯絡人資料為空" << endl;
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
			//	sex_std = "男";
			//}
			//else
			//{
			//	sex_std = "女";
			//}
			cout << "姓名：" << book->array[i].name
				<< "  性別：" << (book->array[i].sex == 1 ? "男" : "女") /*sex_std*/
				<< "  年齡：" << book->array[i].age
				<< "  電話：" << book->array[i].phone
				<< "  地址：" << book->array[i].addr
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
		cout << "刪除聯絡人" << endl;
		cout << "輸入姓名：";
		cin >> name_check;
		int name_res = check(book, name_check);
		if (name_res == -1)
		{
			cout << "找不到  "<< name_check <<"  的聯絡人資料" << endl;
		}
		else
		{
			for (int i = name_res; i < book->size; i++)
			{
				book->array[i] = book->array[i + 1];
			}
			book->size--;
			cout <<"成功刪除 "<< name_check << " 的聯絡人資料" << endl;
		}
	pause_cls();
}

void find(addrbook * book)
{
	string name_check;
	cout << "查詢聯絡人" << endl;
	cout << "輸入姓名：";
	cin >> name_check;
	int name_res = check(book, name_check);
	if (name_res != -1)
	{
		cout << "姓名：" << book->array[name_res].name
			<< "  性別：" << (book->array[name_res].sex == 1 ? "男" : "女")
			<< "  年齡：" << book->array[name_res].age
			<< "  電話：" << book->array[name_res].phone
			<< "  地址：" << book->array[name_res].addr
			<< endl;
	}
	else
	{
		cout << "找不到  " << name_check << "  的聯絡人資料" << endl;
	}
	pause_cls();
}

void change(addrbook * book)
{
	string name_check;
	cout << "修改聯絡人" << endl;
	cout << "輸入姓名：";
	cin >> name_check;
	int name_res = check(book, name_check);
	if (name_res != -1)
	{
		string name_temp;
		cout << "姓名：";
		cin >> name_temp;
		book->array[name_res].name = name_temp;
		int sex_temp;
		cout << "1 - 男 、 2 - 女" << endl;
		cout << "性別：";
		cin >> sex_temp;
		book->array[name_res].sex = sex_temp;
		int age_temp;
		cout << "年齡：";
		cin >> age_temp;
		book->array[name_res].age = age_temp;
		string phone_temp;
		cout << "電話：";
		cin >> phone_temp;
		book->array[name_res].phone = phone_temp;
		string addr_temp;
		cout << "地址：";
		cin >> addr_temp;
		book->array[name_res].addr = addr_temp;
		cout << "成功修改 " << endl;
	}
	else
	{
		cout << "找不到  " << name_check << "  的聯絡人資料" << endl;
	}
	pause_cls();
}

void deleall(addrbook * book)
{
	int deleall;
	cout << "0 - 取消 、 1 - 確認" << endl;
	cout << "清空聯絡簿：";
	cin >> deleall;
	if (deleall == 1)
	{
		book->size = 0;
		cout << "已經清空全部聯絡人" << endl;
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
			cout << "退出聯絡簿" << endl;
			system("pause");
			return 0;
			break;
		}

	}
	system("pause");
	return 0;
}