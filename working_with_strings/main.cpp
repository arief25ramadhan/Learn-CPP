#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!\n"; // \n is an alternative for "<< endl"
    cout << "My name is Arief!" << endl;

    string phrase = "Giraffe Academy";

    cout << "Phrase: " << phrase << endl;
    cout << "Length of phrase: " << phrase.length() << endl;
    cout << "First letter of phrase: " << phrase[0] << endl;

    phrase[0] = 'B'; // Change the first letter of the phrase
    cout << "Modified phrase: " << phrase << endl;
    cout << "Check in which index the word 'academy' is: " << phrase.find('academy', 0) << endl; //text.find(word, start_search_index)

    // text.substr(start_index, num_of_character) Get subsection of the string
    string subPhrase = phrase.substr(8,3);
    cout << "Subphrase: " << subPhrase << endl;

    return 0;
}
