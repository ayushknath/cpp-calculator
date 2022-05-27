#include <iostream>
using namespace std;

void calc(int *num1, int *num2, float *ans, char operation)
{
    switch (operation)
    {
    case '+':
        *ans = *num1 + *num2;
        break;
    case '-':
        *ans = *num1 - *num2;
        break;
    case '*':
        *ans = (*num1) * (*num2);
        break;
    case '/':
        *ans = *num1 / (float)*num2;
        break;
    default:
        cout << "Invalid opeartion\n";
        break;
    }
}

int main()
{
    int num1, num2;
    float ans;
    char user_wish, operation;

    do
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        cout << "+ for addition\n- for subtraction\n* for multiplication\n/ for division\n";
        cout << "Enter operation: ";
        cin >> operation;

        calc(&num1, &num2, &ans, operation);
        cout << "Result: " << ans << '\n';

        cout << "\nDo you wish to continue? [y/n] ";
        cin >> user_wish;
        cout << '\n';
    } while (user_wish == 'y');

    return 0;
}
