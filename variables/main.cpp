#include <iostream>

using namespace std;

int main()
{
    // Common way to declare variable
    string characterName = "John";

    // Other way to declare variable
    int characterAge;
    characterAge = 35;

    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge <<  " years old" << endl;

    //Change the name halfway
    characterName = "Mike";
    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;
    return 0;
}
