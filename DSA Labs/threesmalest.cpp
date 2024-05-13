#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {12, 5, 8, 3, 15, 7, 10, 1, 9, 6};
    
    // Sort the array in ascending order
    std::sort(arr.begin(), arr.end());

    // Print the three smallest values
    std::cout << "The three smallest values are: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
