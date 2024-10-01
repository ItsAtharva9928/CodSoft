#include<iostream>
using namespace std;
int main(){
    char choice;
    double num1,num2,res;
    do {
        cout << "\nEnter two numebrs: ";
        cin >> num1 >> num2;

        cout << "\nChoose an operation (+, -, *, /): ";
        cin >> choice;

        switch(choice){
            case '+': 
                res=num1+num2;
                break;
            case '-':
                res=num1-num2;
                break;
            case '*':
                res=num1*num2;
                break;
            case '/':
                res=num1/num2;
                break;
            default:
                cout << "\nInvalid operator.";
        }
        cout << "Result = " << res << endl;
        cout << "Do you want to perform another calculation?  (y/n): ";
        cin >> choice;
    }while(choice=='y' || choice=='Y');
    cout << "Calculator program terminated.";
    return 0;
}