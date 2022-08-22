#include <iostream>

int main() {
    int ages[5];
    double finalPrice = 50;

    for (int i = 0; i < 5; ++i) {
        std::cin >> ages[i];
    }

    double temp = ages[5];

    for (int i = 0; i < 5; i++)
    {
        if (temp > ages[i])
        {
            temp = ages[i];
        }
    }

    temp = temp/100;

    finalPrice =  finalPrice - (finalPrice * temp);

    std::cout << finalPrice << std::endl;
    
    return 0;
}