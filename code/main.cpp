#include <iostream>
#include "utils.h"

using std::cout, std::endl;

int main() {
    int a[] = {5, 4, 2, 6, 1, 3};

    insertion_sort(a, 6);

    std::cout << "Sorted integer array: ";
    for (int i = 0; i < 6; ++i) {
        std::cout << a[i] << " ";
    }
    
    std::cout << std::endl;
}