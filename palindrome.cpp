#include <iostream>
using namespace std;
void palcheck(string palin) {
    int letteramount = palin.size() -1;
    bool palmatch = false;
    for (int l = 0; l < letteramount/2+1; l++){
        if (palin[l] == palin[letteramount - l]){
            palmatch = true;
        }
        else if (!(palin[l] == palin[letteramount - l])){
            palmatch = false;
            break;
        }
    }
    if (palmatch == true){
        cout << "your word is a palindrome";
    } else {
        cout << "your word isnt a palindrome";
    }
}

string reversestring(string reversein){
    string reversedstring;
    int letteramount = reversein.size();
    for (int l = letteramount; l >= 0; l--){
        cout << l;
        reversedstring[letteramount-l] = reversein[l];
    }
    return reversedstring;
}
void reversenumarray(int array[10]){
    for (int l = 9; l >= 0; l--){
        int temp = array[l];
        array[l] = array[9-l];
        array[9-l] = temp;

    }
}
int main(){
    int numbers[10] = {3,6,9,0,5,9,11,85,37,33};
    int numbers2[10] = {3,6,9,0,5,9,11,85,37,33};
    // string palin;
    //     cin >> palin;
    //     // palcheck(palin);
    // string reversein;
    // cin >> reversein;
    // string newString = reversestring(reversein);
    // cout << newString;
    reversenumarray(numbers);


}