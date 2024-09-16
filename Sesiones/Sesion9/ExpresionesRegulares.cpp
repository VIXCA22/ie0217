#include <iostream>
#include <regex>

using namespace std;

int main() {
    auto const regex = regex("(my|your) regex");

    auto const myText = string("A piece of text that contains my regex.");
    bool const myTextContainsRegex = regex_search(myText , regex);

    auto const yourText = string("A piece of text that contains my regex.");
    bool const yourTextContainsRegex = regex_search(yourText , regex);

     auto const theirText = string("A piece of text that contains my regex.");
    bool const theirTextContainsRegex = regex_search(theirText , regex);

    cout << boolalpha 
         << myTextContainsRegex << '\n'
         << yourTextContainsRegex << '\n'
         << theirTextContainsRegex << '\n';
}