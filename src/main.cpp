#include "CircularLinkedList.h"

int main(){
    CircularLinkedList tasks;

    tasks.insert("Eat breakfast");
    tasks.insert("Brush teeth");
    tasks.insert("Work out");
    tasks.insert("Shower");
    tasks.insert("Go to school");

    tasks.print();

    
    for (int i = 0; i < 10; i++) {
        std::cout << "Current Task: " << tasks.getHeadVal() << std::endl;
        tasks.advance();
    }

    return 0;
}