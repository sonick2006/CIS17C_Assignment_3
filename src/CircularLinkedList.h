#include <iostream>


struct Node{
    std::string data;
    Node* next;
    Node(std::string value) : data(value), next(nullptr){}
};


class CircularLinkedList{
    public:
        CircularLinkedList() : head(nullptr){}

        void insert(std::string value);
        void print() const;
        void advance();
        bool search(std::string value) const;
        std::string getHeadVal();

    private:
        Node* head;
};