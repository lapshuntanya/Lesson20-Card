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

    delete mono;
}

