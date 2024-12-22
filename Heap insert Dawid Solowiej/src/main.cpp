#include <iostream>
#include <vector>
#include <stdexcept>
#include "../include/Heap.h"

int main() {
    std::vector<std::pair<int, int>> elements = { {7, 70}, {5, 50}, {6, 60}, {4, 40}, {2, 20}, {1, 10}, {3, 30} };
    Heap<int, int> heap(elements);

    std::cout << "Kopiec przed usunięciem: ";
    heap.print();

    heap.pop();

    std::cout << "Kopiec po usunięciu: ";
    heap.print();

    return 0;
}
