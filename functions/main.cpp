#include <iostream>

using namespace std;

// This is a function
// void function does not return anything
void sayHi(string name, int age){
    cout << "Hello " << name << ", you are " << age << endl;

}

// b. Using function signature, to make sure the function is called and defined before the main function
// void sayHi(string name, int age)


// This is another function
int main()
{
    cout << "Top" << endl;
    //call function
    sayHi("Mike", 60);
    sayHi("John", 43);
    sayHi("Arief", 25);
    cout << "Bottom" << endl;

    return 0;
}

//b. Using function signature
/*
void sayHi(string name, int age){
    cout << "Hello " << name << ", you are " << age << endl;

}*/


