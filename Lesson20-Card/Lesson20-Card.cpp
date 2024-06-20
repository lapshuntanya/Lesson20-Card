#include "Card.h"
#include <ctime>

int main()
{
    srand(time(0));

    Card* mono = nullptr;
    bool user;
    cout << "0 - standart card\n";
    cout << "1 - VIP card\n";
    cin >> user;

    if (user == 0) mono = new Card();
    else mono = new Card("Tetiana Lapshun", 25'000);

    mono->showInfo();

    cout << "\n\n=========================================================\n";
    int a, b;
    cout << "Input old pin: "; cin >> a;
    cout << "Input new pin: "; cin >> b;
    mono->setPIN(a, b);
    cout << "\nCard: " << mono->getCardNumber() << " PIN: " << mono->getPIN() << "\n\n";

    cout << "\n\n=========================================================\n";

    cout << "Input pin: "; cin >> a;
    cout << "Input money to topup: "; cin >> b;
    mono->topupCash(a, b);
    cout << "\nCard: " << mono->getCardNumber() << " Cash: " << mono->getCash() << "\n\n";

    cout << "Input pin: "; cin >> a;
    cout << "Input money to withdraw: "; cin >> b;
    mono->withdrawCash(a, b);
    cout << "\nCard: " << mono->getCardNumber() << " Cash: " << mono->getCash() << "\n\n";

    delete mono;
}

