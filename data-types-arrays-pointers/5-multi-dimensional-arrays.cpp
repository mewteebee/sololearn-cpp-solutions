#include <iostream>
using namespace std;

int main() {
    
    string arr[3][3] = {
        {"Python", "JS", "C++"},
        {"PHP", "SQL", "Java"},
        {"C#", "Swift", "Kotlin"},
    };

    cout << arr[0][2];

    return 0;
}