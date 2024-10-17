#include <iostream>
#include <string>
#include "CoffeeMachine.h"

using namespace std;

int main()
{

    CoffeeMachine machine1;
    char query;

    machine1.welcomeScreen();

    do {

    double money;
    char selection;

    machine1.checkMoney();

    cin >> money;
    machine1.recompile(money);
    machine1.selectionScreen();
    cin >> selection;
    machine1.checkQuantity();
    machine1.selection(selection, money);
    machine1.showQuantities();
    machine1.showMachineMoney();

    cout << "Displaying your current balance: " << money << " KM." << endl;
    cout << endl;
    cout << "Do you want to exit the program? (Y/N): ";
    cin >> query;

    if(machine1.askToContinue(query))
        continue;
    else {
        cout << "\n--> PROGRAM ENDED <---";
        break;
    }

    } while(true);

    return 0;
}

