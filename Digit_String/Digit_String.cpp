#include <iostream>
#include <string>
#include <sstream>
using namespace std;




void digitSum(string str) {
    int sum = 0;
    for (char& chr : str)
    {
        if (isdigit(chr)) {
            sum += chr - '0';
        }
    }
    cout << sum;
}
void deletThree(string str) {

    string result;
    result.reserve(str.length());

    int countDigits =0 ; 
    for (char chr : str) {
        if (isdigit(chr)) {
            
            if (countDigits < 3) {
                result += chr;
                countDigits++;
            }
        }
        else {
            
            countDigits = 0;
            
            result += " ";
        }
    }
    cout << result;

}
void digitCount(string str) {
    int cnt = 0;
    for (int i = 0; str[i]; i++) {
        if (isdigit(str[i]) && !isdigit(str[i + 1]))
        {
            cnt++;
        }
    }
    cout << cnt;
}
void naturalSum(string str) {
    int currentNumber = 0;
    int sum = 0;
    for (char c : str) {
        if (isdigit(c)) {
            
            currentNumber = currentNumber * 10 + (c - '0');
        }
        else {
            
            sum += currentNumber;
            currentNumber = 0;
        }
    }
    cout << sum;
}
int main()
{
    string rinda;
    char let;
    cout << "Write a digit string(string can have nondigit symbols too): " << endl;
    getline(cin, rinda);
    cout << "You wrote - " << rinda << endl;
    cout << "Choose function(a-d): " ;
    cin >> let;
    if (let == 'a') {
        digitSum(rinda);
    }
    if (let == 'b') {
        deletThree(rinda);
    }
    if (let == 'c') {
        digitCount(rinda);
    }
    if (let == 'd') {
        naturalSum(rinda);
    }


}




