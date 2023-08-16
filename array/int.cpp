#include <iostream>

int main() {
    int size1, size2;

    // Get size of the first array from the user
    std::cout << "Enter the size of the first array: ";
    std::cin >> size1;

    // Get elements of the first array from the user
    int arr1[size1];
    std::cout << "Enter elements of the first array (sorted): ";
    for (int i = 0; i < size1; ++i) {
        std::cin >> arr1[i];
    }

    // Get size of the second array from the user
    std::cout << "Enter the size of the second array: ";
    std::cin >> size2;

    // Get elements of the second array from the user
    int arr2[size2];
    std::cout << "Enter elements of the second array (sorted): ";
    for (int i = 0; i < size2; ++i) {
        std::cin >> arr2[i];
    }

    // Find and print the intersection of elements
    std::cout << "Intersection of the two arrays: ";
    int i = 0, j = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            ++i;
        } else if (arr1[i] > arr2[j]) {
            ++j;
        } else {
            std::cout << arr1[i] << " ";
            ++i;
            ++j;
        }
    }

    std::cout << std::endl;

    return 0;
}
