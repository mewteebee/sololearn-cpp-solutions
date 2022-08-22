#include <iostream>

int main() {
    int n;
    std::cin >> n; 
    int nums = 0;
    std::cin >> nums;
    int max = nums;

    for(int i=0; i<n; i++) {
        
        std::cin >> nums;

        if(nums > max)
            max = nums;
    }
    std::cout << max << std::endl;

    return 0;
}