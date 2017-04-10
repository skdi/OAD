
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*Function prototypes*/
string addCommas(string digits);

/*Main program*/
int main(){
    while(true){
        string digits;
        cout << "Enter a number: ";
        getline(cin, digits);
        if (digits == "") break;
        cout << addCommas(digits) << endl;
    }
    return 0;
}

/*Function: addCommas
 *Usage: string addCommas(string digits)
 *---------------------------------------
 *Adds commas to long digits
 */
string addCommas(string digits){
    string result;
    if (digits.length() > 3){
        int t = 0;

        for(int i = digits.length() - 1; i >= 0; i --){
            result = digits[i] + result;
            t++;
            if(t%3 == 0){
                result = ',' + result;

            }
        }
        if(result[0] == ','){
            result.erase(0, 1);
        }
    } else {
        result = digits;
    }
    return result;
}
