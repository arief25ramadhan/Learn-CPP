#include <iostream>

using namespace std;

int main()
{
    int age;
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name << endl;

    cout << "Enter your age: ";
    cin >> age; //Get user input

    cout << "You are " << age << " years old";

    return 0;
}
