#include "Card.h"

Card::Card(){
	cardNumber = rand() * pow(10, 10) + rand();
	strcpy_s(name, 50, "undefined");
	strcpy_s(expiredDate, 6, "01/34");
	PIN = rand() % 9999 + 1000;
	cash = 0;
	cout << "Opened STANDART card: " << cardNumber << endl;
}

Card::Card(const char* name, double cash){
	cardNumber = rand() * pow(10, 10) + rand();
	strcpy_s(this->name, 50, name);//!!!!
	strcpy_s(expiredDate, 6, "01/34");
	PIN = rand() % 9999 + 1000;
	this->cash = cash;//!!!
	cout << "Opened VIP card: " << cardNumber << endl;//!!!
}

Card::~Card(){
	cout << "Closed " << cardNumber << " card\n";
}

unsigned long Card::getCardNumber(){	return cardNumber;}
const char* Card::getName(){	return name;}

void Card::setExiredDate(const char* date)
{
	int year = atoi(date + 3);
	if (year > 24) {
		strcpy_s(expiredDate, 6, date);
	}
	else cout << "Error: setExiredDate!\n ";
}

const char* Card::getExpiredDate(){	return expiredDate;}

void Card::setPIN(int oldPIN, int newPIN)
{
	if (oldPIN == PIN)
	{
		PIN = newPIN;
	}
	else cout << "Error: oldPIN is wrong!\n ";
}

int Card::getPIN(){	return PIN; }
double Card::getCash(){	return cash; }

void Card::showInfo(){
	cout << "++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "| \t Card:     " << cardNumber << endl;
	cout << "| \t Client:   " << name << endl;
	cout << "| \t Exp date: " << expiredDate << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "| \t PIN:      " << PIN << endl;
	cout << "| \t Cash:     " << cash << " UAH" << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++\n";
}
