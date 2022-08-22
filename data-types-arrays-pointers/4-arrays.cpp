#include <iostream>

int main() {
    double items[] = {500, 12.4, 94, 45, 3, 81, 1000.9, 85, 90, 1, 35};
    
    int p;
    for (int x; x < 11; x++ )
    {
        std::cin >> p;
        std::cout << items[x]-items[x]*p/100 << " ";
    }
    
    return 0;
}