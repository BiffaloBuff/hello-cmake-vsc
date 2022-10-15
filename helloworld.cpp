#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    vector<string> msg {"Hello", "World", "from", "VS Code", "and CMake"};

    for (const string& word : msg) {
        cout << word << " ";
    }
    cout << endl;

    cout << "Number of arguments: " << argc << endl;
    if (argc > 1) {
        for (auto && arg : vector<string> { argv, argv + argc }) {
            cout << arg << " | ";
        }
        cout << endl;
    }
}