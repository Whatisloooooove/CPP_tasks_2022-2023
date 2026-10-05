#include <iostream>

#include "ring_buffer.hpp"

int main() {
    size_t capacity = 0;
    std::cout << "Enter the capacity of the ring buffer: ";
    std::cin >> capacity;
    
    RingBuffer ring_buffer(capacity);
    
    int choice = 0;
    while (choice != 5) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Push an element\n";
        std::cout << "2. Pop an element\n";
        std::cout << "3. Check if the buffer is empty\n";
        std::cout << "4. Get the current size of the buffer\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
    
        switch (choice) {
        case 1: {
            int element;
            std::cout << "Enter an element to push: ";
            std::cin >> element;
            if (ring_buffer.TryPush(element)) {
            std::cout << "Element pushed successfully.\n";
            } else {
            std::cout << "Buffer is full. Cannot push element.\n";
            }
            break;
        }
        case 2: {
            int element;
            if (ring_buffer.TryPop(&element)) {
            std::cout << "Popped element: " << element << "\n";
            } else {
            std::cout << "Buffer is empty. Cannot pop element.\n";
            }
            break;
        }
        case 3:
            if (ring_buffer.Empty()) {
            std::cout << "Buffer is empty.\n";
            } else {
            std::cout << "Buffer is not empty.\n";
            }
            break;
        case 4:
            std::cout << "Current size of the buffer: " << ring_buffer.Size() << "\n";
            break;
        case 5:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
    
    return 0;
}