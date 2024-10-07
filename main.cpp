#include <iostream>
#include "source/commands.cpp"
using namespace std;

int main()
{
    string command;
    Window();
    while(true)
    {
        cout << endl << "Welcome to Linux that is made in C++" << endl << endl;
        cout << "Enter Command: ";
        getline(cin, command);
        ExecuteCommand(command);
    }

    return 0;
}