#include <iostream>
using namespace std;
int add (int num1,int num2){
    cout<<"your 2 numbers added are: ";
    return num1 + num2;
}
int subtract (int num1,int num2){
    cout<<"your 2 numbers subtracted are: ";
    return num1 - num2;
}
int multiply (int num1,int num2){
    cout<<"your 2 numbers multiplied are: ";   
    return num1 * num2;
}
int divide (int num1,int num2){
    cout<<"your 2 numbers divided are: "  ;
    return num1 / num2 ;
}
void askcon (){
    cout<<"do u wanna continue"<<endl;
}
int main() {
    char op;
    int num1;
    int num2;
    int result;
    bool con = true;

    while (con == true){
        
        cout << "insert ur operator";
        cin >> op;
        cout << "gimme first number ";
        cin >> num1;
        cout << "gimme second number ";
        cin >> num2;
        if (op == '+'){
            cout<< add(num1, num2)<<endl;
        } else if (op == '-'){
            cout<<subtract(num1, num2)<<endl;
        } else if (op == '*'){
            cout<<multiply(num1, num2)<<endl;
        } else if (op == '/'){
            cout<<divide(num1, num2)<<endl;
        }else{
            cout << "operator is invalid ";
        }
        askcon();
        string response;
        cin >> response;
        if (response == "no"){
            con = false;
        }
    }
}