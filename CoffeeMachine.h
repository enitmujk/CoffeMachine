#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H
#include <string>

using namespace std;

class CoffeeMachine
{
    public:
        CoffeeMachine();
        double moneyEntered(double digit);
        //
        void welcomeScreen();
        void showQuantities();
        void selection(char query, double& money);
        void checkMoney();
        void selectionScreen();
        bool returnCorrectValue(double money);
        void recompile(double money);
        void decrementQuantity(char query);
        void insufficient(double money);
        bool askToContinue(char query);
        void checkQuantity();
        //
        void showMachineMoney();
        //
        int getEspressoQ();
        int getMacchiatoQ();
        int getHotChocolateQ();
        int getCappuccinoQ();

    private:
        double espressoPrice = 0.5;
        double macchiatoPrice = 1.0;
        double hotChocolatePrice = 1.5;
        double cappuccinoPrice = 2.0;

        int espressoQ, macchiatoQ, hotChocolateQ, cappuccinoQ;

        int numberOfHalfs = 0;
        int numberOfMarks = 7;
        int numberOfTwoMarks = 0;
        int numberOfFiveMarks = 10;
};

#endif // COFFEEMACHINE_H
