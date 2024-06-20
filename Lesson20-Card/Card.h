#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Card
{
	unsigned long	cardNumber; // Номер картки
	char	name[50];			// Ім’я власника
	char	expiredDate[6];		// Дата дії
	int		PIN;				// Код картки
	double	cash;				// Сума грошей на картці

};

