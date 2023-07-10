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
    char inputArray[length];
    int checkEven = 0;
    int checkOdd = 0;
    for (int i = 0; i < length; i++) {
        inputArray[i] = input[i];
    }
    if (length %2 == 0){
        for (int a = 0; a < length / 2; a++ ){
            if ( inputArray[a] != inputArray[length - a - 1] ){
                checkEven++;
            }
        }
    }
    else {
        for (int a = 0; a < length / 2; a++ ){
            if ( inputArray[a] != inputArray[length - a - 1 ] ){
                checkOdd++;
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
        cout << "It can be a Palindrome by changing only 1 character";
    }
}
