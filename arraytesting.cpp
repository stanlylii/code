#include <iostream>
using namespace std;
string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
void square(int row, int level){
    char star = '*';
    for (int i= 0; i < level; i++){ // height
        for (int j = 0; j < row; j++){ // lenggth
            cout << star;
        }
        cout<< endl;
    }
}
void hardtriangle(int level){
    char star = '*', spaces = ' ';
    for (int l=0; l < level; l++){//sdf
        for (int sp = level-l-1; sp > 0;sp--){
            cout << spaces;
        }
        for (int st=2*l+1; st>0; st--) {
            cout << star;
        }
        cout<<endl;
    }
}
void bottomltriangle(int level){
    char star = '*';
    for (int l=0; l < level; l++){
        for (int st=2*l+1; st>0; st--) {
            cout << star;
        }
        cout<<endl;
    }
}
void topltriangle(int level){
    char star = '*';
    for (int l=0; l < level; l++){
        for (int st=2*level-2*l-1; st>0; st--) {
            cout << star;
        }
        cout<<endl;
    }
}
int main() {
    // square(10,10);
    // hardtriangle(50);
    // bottomltriangle(6);
    topltriangle(6);
}