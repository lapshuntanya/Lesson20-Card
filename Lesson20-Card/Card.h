#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Card
{
private:
	unsigned long	cardNumber; // Номер картки
	char	name[50];			// Ім’я власника
	char	expiredDate[6];		// Дата дії
	int		PIN;				// Код картки
	double	cash;				// Сума грошей на картці

public:
	Card(); //Конструктор за замовченням
	Card(const char* name, double cash);//З параметрами
	~Card(); //Деструктор

	//Аксесори
	unsigned long getCardNumber();
	const char* getName();
	void setExiredDate(const char* date);
	const char* getExpiredDate();
	void setPIN(int oldPIN, int newPIN);
	int getPIN();
	double getCash();

	// Iнші
	void showInfo();
	void topupCash(int pin, double money); //Поповнення картки
	void withdrawCash(int pin, double money); //Зняття грошей
};

