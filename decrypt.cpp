#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    //sets up alphabet and key
    string alpha {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr "};
    cout << "What would you like to decrypt?\n";
    //sets and saves user input to "original"
    string original;
    getline(cin, original);
    cout << "You have entered '" << original << "' " << "with the size of " << original.size() << endl;
    //adds characters to the final string
    string final;
    for (int i = 0; i < original.size(); i++)
    {
        final += alpha.at(key.find(original.at(i)));
    }
    cout << "Here is your decrypted string: " << final << endl;
}
