#include <iostream>
#include "commands/stage.h"

using namespace std;

int main(int argc, char* argv[])
{
    // No Arguments
    if (argc == 1)
    {
        cout << "No command provided." << endl;
        return 0;
    }

    // Map Commands
    string command = argv[1];

    if (command == "add") stage(argv);
    
    return 0;
}
