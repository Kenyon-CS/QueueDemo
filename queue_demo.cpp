#include <iostream>
#include <queue>
#include <string>

void displayQueue(std::queue<std::string> q) {
    std::cout << "Queue contents: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
}

int main() {
    std::queue<std::string> q;

    // Adding 5 strings to the queue
    q.push("apple");
    q.push("banana");
    q.push("cherry");
    q.push("date");
    q.push("elderberry");

    std::cout << "After adding 5 strings: " << std::endl;
    displayQueue(q);

    // Removing 3 strings from the queue
    q.pop();
    q.pop();
    q.pop();

    std::cout << "After removing 3 strings: " << std::endl;
    displayQueue(q);

    // Adding 2 more strings to the queue
    q.push("fig");
    q.push("grape");

    std::cout << "After adding 2 more strings: " << std::endl;
    displayQueue(q);

    return 0;
}
