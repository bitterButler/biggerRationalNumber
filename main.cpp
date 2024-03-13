#include <iostream>
using namespace std;

// rational numbers: 7 / 8; 1/3; 3; 0.97; --> i could use float here.
//example numbers: -3.12 and 2.876;

//creating the function, which has 2 parameters and after inputting them, write the bigger one out to screen.

float BiggerRationalNumber(float num1, float num2){
    float result;
    if (num1 > num2){
        result = num1;
    }
    else {
        result = num2;
    }
    return result;
    // this return is needed, or it won't finish with exit code 0, because this is the result, what will be given back to "endResult".
    // simplify possible: use "return num1;, return num2;" in if, else;
}

int main() {
    float num1, num2;
    cout << "Please input 2 ration numbers (ex.: -3.33, 2.653, 1.31, 4.469..): " << endl;
    cout << "Number 1.: ";
    cin >> num1;
    cout << "Number 2.: ";
    cin >> num2;

    /*out.width(3);
    cout << num1 << " and " << num2;*/

    float endResult = BiggerRationalNumber(num1, num2);
    cout << "The larger of the two numbers is: " << endResult << endl;

    return 0;
}
