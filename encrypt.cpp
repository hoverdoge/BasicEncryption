#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    //sets up alphabet and key
    string alpha {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr "};
    cout << "What would you like to encrypt?\n";
    //sets and saves user input to "original"
    string original;
    getline(cin, original);
    cout << "You have entered '" << original << "' " << "with the size of " << original.size() << endl;
    //adds characters to the final string
    string final;
    for (int i = 0; i < original.size(); i++)
    {
        final += key.at(alpha.find(original.at(i)));
    }
    cout << "Here is your encrypted string: " << final << endl;
}
