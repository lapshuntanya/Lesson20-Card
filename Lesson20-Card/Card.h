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
	~Card(); //Дуструктор

	void showInfo();
};

