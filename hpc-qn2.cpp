/*  Nick Sweeting 2013/10/09
    References vs Values in C++
    MIT License
    Takes input and removes puctuation and spaces, using two different methods.
    It is referred from: https://github.com/pirate/Cpp-Data-Structures/
*/

#include <stdlib.h>
#include <iostream>
using namespace std;
// returns true if input character q is puctuation, else false
bool ispunctuation(char q) {
    char puncts[31] = ".!-_? <>,$#@=+*&^$!;:'()[]{}|`";
    int i;
    for (i=0;i<sizeof(puncts);i++) if (q == puncts[i]) return true;
    return false;


}

char* modifyAndCopy(char *raw_input)
{
    // complete the functions here ...
    char* new_input= new char[80];
    int i=0, j=0;
    for(i=0;i<sizeof(new_input);i++)
    {
        if(ispunctuation(raw_input[i])== true);
        else
        {
            new_input[j]=raw_input[i];
            j++;
        }
    }
    return new_input;

}

char* modifyInPlace(char *raw_input) {
    // complete the functions here ...
    int j=0;
for(int i=0;i<sizeof(raw_input);i++)
    {
        if(ispunctuation(raw_input[i])== true);
        else{
            raw_input[j]=raw_input[i];
            j++;
        }
    }
    return raw_input;
}

int main() {
    // user input
    char raw_input[80] = {0};
    cout << "Please enter a sentence with punctuation: ";
    cin.getline(raw_input,80);

    cout << "Modify and Copy: " << endl;
    cout << "Original: " << raw_input << endl;
    cout << "Modified: " << modifyAndCopy(raw_input) << endl << endl;

    cout << "Modify in Place: " << endl;
    cout << "Original: " << raw_input << endl;
    cout << "Modified: " << modifyInPlace(raw_input) << endl;
}
