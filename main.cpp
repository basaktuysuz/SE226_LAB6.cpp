
#include <iostream>

using namespace std;

double func1(double n){
    if(n<1){return -10;}
    else{
        return (((n / n + 2)) - 10) * func1(n-1);
    }
}

bool helper = false;
double num;

double func2(){

    double number2;

    if(helper == false){
        cout << "Please enter the number to solve equation 2 in lab 6 without paremeter: " << endl;
        cin >> number2;
        num = number2;
        helper = true;
    }
    else{num--; number2 = num;}

    if(number2<1){return -10;}
    else{
        return (((number2 / number2 + 2)) - 10) * func2();
    }
}


int main()
{
    double num;
    cout << "Please enter the number to solve equation : " << endl;
    cin >> num;
    cout << "The Result : " << func1(num) << endl;

    cout << "The Result : " << func2() << endl;

    return 0;
}
