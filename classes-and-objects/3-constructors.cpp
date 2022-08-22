#include <iostream>
#include <string>
using namespace std;

class Painting {
    private:
    string name;
    public:
    Painting(string x) {

        cout << x << endl;

    }        
};
int main() {
    string name;
    cin >> name;

    Painting painting(name);

    return 0;
}