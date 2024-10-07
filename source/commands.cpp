#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void Window()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
void ExecuteCommand(string& command)
{
    if(command == "exit")
    {
        cout << "Exiting Terminal..." << endl;
        exit(EXIT_SUCCESS);
    }
    else if(command == "clear")
        Window();
    else
    {
        cout << "Invalid Command" << endl;
        system("pause");
    }
}