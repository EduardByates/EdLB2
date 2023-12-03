#include <iostream>
#include <algorithm>

using namespace std;

size_t sumOfOddElements(const int arr[], size_t size) {

    int oddSum = 0;
    for (size_t i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            oddSum += arr[i];
        }
    }
    return oddSum;
}

int productBetweenMinMax(const int arr[], size_t size) {

    size_t minIndex = 0;
    size_t maxIndex = 0;

    for (size_t i = 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        else if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    size_t start = std::min(minIndex, maxIndex) + 1;
    size_t end = std::max(minIndex, maxIndex);

    int product = 1;
    for (size_t i = start; i < end; ++i) {
        product *= arr[i];
    }

    return product;
}

void sortInDescendingOrder(int arr[], size_t size) {
    std::sort(arr, arr + size, std::greater<int>());
}

int main() {

    const size_t size = 9;
    int array[size] = { 3, 7, 1, 5, 9, 2, 8, 4, 6 };

    std::cout << "Sum of odd elements: " << sumOfOddElements(array, size) << std::endl;
    std::cout << "Product of elements between min and max: "
        << productBetweenMinMax(array, size) << std::endl;

    sortInDescendingOrder(array, size);

    std::cout << "Array sorted in descending order: ";
    for (const auto& element : array) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
