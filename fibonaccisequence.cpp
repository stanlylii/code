#include <iostream>
using namespace std;
int seq(int ask){
    if (ask == 0){
        return 0;
    }
    else if (ask == 1){
        return 1;
    }
    else{

        return seq(ask-1) + seq(ask-2);
    }
}
int factorial(int ask){
    if (ask==1){
        return 1;
    }
    else {
        return ask * factorial (ask-1);
    }
}
int forfactorial(int ask){
int result;

    for (int n=ask; n<0; n--){
        result = ask * ask-1;
        ask--;
    }
    cout << result;
    return result;
}

int main(){
    int fake;
    int input;
    cin >> input;
    int result = factorial(input);
    // int result2 = factorial(result);
    // cout << result2;
}