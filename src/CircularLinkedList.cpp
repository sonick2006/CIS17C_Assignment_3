#include "CircularLinkedList.h"

void CircularLinkedList :: insert(std::string value){
    Node* newNode = new Node(value);

    if (!head){
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }

    temp ->next = newNode;
    newNode ->next = head;
}

void CircularLinkedList :: print() const{
    if(!head){
        std::cout << "List is empty!!!!" << std::endl;
        return;
    }

    Node*temp = head;
    do{
        std::cout << temp->data << " -> ";
        temp = temp->next;
    } while(temp != head);

    std::cout << "end of circle (back to head)" << std:: endl;
}

bool CircularLinkedList :: search(std::string value) const{
    if(!head) return false;

    Node* temp = head;
    do{
        if (temp->data == value){
            return true;
        }
        temp = temp->next;
    }while(temp != head);

    return false;

}


void CircularLinkedList :: advance(){
    if (head){
        head = head->next;
    }
}

std::string CircularLinkedList :: getHeadVal(){
    return head ? head->data : "No current task!";
}
