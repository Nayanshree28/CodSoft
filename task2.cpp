#include<iostream>
using namespace std;

// this is the task2 at codsoft:
int main()
{
    double value1, value2;
    char operation;

    cout<<"Enter the First Number: ";
    cin>>value1;

    cout<<"Enter the Second Number: ";
    cin>>value2;

    cout<<"Enter the operation ( +, -, * ,/): ";
    cin>>operation;

    double output;

    // use switch case:
    switch(operation){
        case '+':
        output = (value1 + value2);
        cout<<"Output: "<<output<<endl;
        break;

        case '-':
        output = (value1 - value2);
        cout<<"Output: "<<output<<endl;
        break;


        case '*':
        output = (value1 * value2);
        cout<<"Output: "<<output<<endl;
        break;


        case '/':
        if(value2 !=0 ){
        output = (value1 / value2);
        cout<<"Output: "<<output<<endl;
        }
        else{
            cout<<"Error detected: "<<endl;
        }
        break;

        default:
        cout<<"Enter valid operation: "<<endl;
        break;

    }

    return 0;

}