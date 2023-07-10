#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string input;
void palin();
int main() {
    cout << "Enter : ";
    cin >> input;
    palin();
    return 0;
}

void palin () {
    int length = input.length();
//    cout << "length : " <<length<<endl;
    char inputArray[length-1];
    int checkEven = 0;
    int checkOdd = 0;
    char targetFL;
    char targetLL;
    int position;
    for (int i = 0; i < length; i++) {
        inputArray[i] = input[i];
    }
    if (length %2 == 0){
        for (int a = 0; a < length / 2; a++ ){
            if ( inputArray[a] != inputArray[length - a - 1] ){
                checkEven++;
                targetFL = inputArray[a];
                targetLL = inputArray[length - a - 1];
                position = a;
//                cout << " target : " << targetL << endl;
//                cout << " position : " << position << endl;
            }
        }
    }
    else {
        for (int a = 0; a < length / 2; a++ ){
            if ( inputArray[a] != inputArray[length - a - 1 ] ){
                checkOdd++;
                targetFL = inputArray[a];
                targetLL = inputArray[length - a - 1];
                position = a;
//                cout << " target : " << targetL << endl;
//                cout << " position : " << position << endl;
            }
        }
        
    }
    if (checkEven == 0 && checkOdd == 0) {
        cout << "It's already a Palindrome";
    }
    if (checkEven > 1 || checkOdd > 1) {
        cout << "It can not be a Palindrome";
    }
    if (checkEven == 1 || checkOdd == 1) {
        cout << "It can be a Palindrome by changing only 1 character" << endl;
        inputArray[length - position - 1] = targetFL;
//        cout << "Here's the Palindrome : "<< inputArray << endl;
        cout << "Here's the Palindrome : ";
        for (int i = 0; i < length; i++) {
            cout << inputArray[i];
        }
        
        inputArray[position] = targetLL;
        inputArray[length - position - 1] = targetLL;
        cout << "  Or  ";
        for (int i = 0; i < length; i++) {
            cout << inputArray[i];
        }
        cout << endl;
    }
}
