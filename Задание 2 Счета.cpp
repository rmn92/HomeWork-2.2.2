#include <iostream>

using namespace std;

struct bankID
{
	int accountNumber;
	string nameHolder;
	float valueMoney;
};

void changeBalance(bankID& account, float newValueMoney);

int main()
{
	setlocale(LC_ALL, "rus");

	bankID account;
	float newValueMoney = 0;
	int accountNumber = 0;

	cout << "Введите номер счёта: ";
	cin >> account.accountNumber;
	cout << "Введите имя владельца : ";
	cin >> account.nameHolder;
	cout << "Введите баланс: ";
	cin >> account.valueMoney;
	cout << "Введите новый баланс: ";
	cin >> newValueMoney;
	changeBalance(account, newValueMoney);
	cout << "Ваш счёт: " << account.nameHolder << ", " << account.accountNumber << ", " << account.valueMoney;

}

void changeBalance(bankID& account, float newValueMoney)
{
	account.valueMoney = newValueMoney;
}