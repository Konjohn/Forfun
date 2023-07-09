#include <iostream>
#include <cmath>
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
    cout << "length : " <<length<<endl;
    char inputArray[length];
    for (int i =0; i < length; i++) {
        inputArray[i] = input[i];
    }
    
    
}
