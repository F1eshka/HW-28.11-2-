#include <iostream>
using namespace std;

//Номер 1 - проверка почты
int main()
{
	setlocale(LC_ALL, "");	
	bool flag = 0;
	const char* logins[4] = { ("@"),("."),("gmail"),("com") };
	char* email = new char[100];
	cout << "Правила: почта должна содержать символы «@», «.», «com», «gmail» и иметь длину более пяти строк." << "\n";
	cout << "Введите почту: ";
	gets_s(email, 100);
	for (int i = 0; i < strlen(email); i++)
	{
		if (email == logins[i] and strlen(email) > 5)
		{
			cout << "Почта принята!";
			flag = true;
		}
		else
		{
			continue;
		}
	}
	if (flag == false)
	{
		cout << "Почта не подходит :(" << "\n";
	}

//Номер 2 - сколько раз встречается слово в предложении

	int length;
	length = 50;
	char symbol;
	int word = 0;
	char* name = new char[length] {};
	cout << name << "\n";
	cout << "Пожалуйста введите текст: ";
	gets_s(name, length);
	cout << "Введите слово: ";
	cin >> symbol;
	for (int i = 0; i < strlen(name); i++)
	{
		cout << name[i] << "";
		if (name[i] == symbol)
		{
			word++;
		}
	}
	cout << "\n";
	cout << "Слово: " << word << "\n";

	delete[] name;

//Номер 3 - генерация пароля
	srand(time(NULL));
	int a;
	cout << "Введите размер пароля: ";
	cin >> a;
	char* password = new char[a];
	int* number = new int[a];
	char* re[100]{};
	cout << "Пароль: ";
	for (int f = 0; f < a; f++)
	{
		number[f] = rand() % a;
		password[f] = 'a' + rand() % 26;
		cout << number[f] << password[f];
	}
}