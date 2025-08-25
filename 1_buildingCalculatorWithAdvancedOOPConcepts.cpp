#include <iostream>
using namespace std;
class Calculator
{
private:
    double variable1;
    double variable2;

public:
    Calculator(double variable1 = 0.0, double variable2 = 0.0)
    {
        setVariable1(variable1);
        setVariable2(variable2);
    }
    void setVariable1(int variable1)
    {
        this->variable1 = variable1;
    }
    double getVariable1(void) const
    {
        return variable1;
    }

    void setVariable2(int variable2)
    {
        this->variable2 = variable2;
    }
    double getVariable2(void) const
    {
        return variable2;
    }

    double getSum(void) const
    {
        return variable1 + variable2;
    }
    double getDifference(void) const
    {
        return variable1 - variable2;
    }
    double getProduct(void) const
    {
        return variable1 * variable2;
    }
    double getDivision(void) const
    {
        return variable1 / variable2;
    }
    void displaySum(void) const
    {
        cout << "The sum of the two numbers is " << getSum() << "\n";
    }
    void displayDifference(void) const
    {
        cout << "The difference of the two numbers is " << getDifference() << "\n";
    }
    void displayProduct(void) const
    {
        cout << "The product of the two numbers is " << getProduct() << "\n";
    }
    void displayDivision(void) const
    {
        cout << "The division of the two numbers is " << getDivision() << "\n";
    }
    void displayDetails(void) const
    {
        displaySum();
        displayDifference();
        displayProduct();
        displayDivision();
    }
};
int main()
{
    double variable1;
    double variable2;

    cout << "Enter the first Number: ";
    cin >> variable1;
    cout << "Enter the first Number: ";
    cin >> variable2;
    Calculator object(variable1, variable2);
    int userChoice;
    do
    {
        cout << "\t\t Calculator Menu \n";
        cout << "1. Sum \n";
        cout << "2. Difference \n";
        cout << "3. Product \n";
        cout << "4. Division \n";
        cout << "5. Display All details \n";
        cout << "6. Close the program \n\n";

        cout << "Enter your choice: ";
        cin >> userChoice;
        switch (userChoice)
        {
        case 1:
            object.displaySum();
            break;

        case 2:
            object.displayDifference();
            break;
        case 3:
            object.displayProduct();
            break;
        case 4:
            object.displayDivision();
            break;
        case 5:
            object.displayDetails();
            break;
        case 6:
            return 0;
        }
    } while (userChoice <= 6 && userChoice >= 1);
}