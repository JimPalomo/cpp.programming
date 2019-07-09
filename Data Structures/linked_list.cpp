// Creating a linked list 

#include <iostream>
using namespace std;

// Creating a struct to define a single node with one data type
struct node {
    int data;
    node *next;
};

// Creating a class to hold functions that will handle each node
class list {
    private:
        node *head, *tail;  // Linked list will always have a head and a tail
    
    public:
        list() {
            head = NULL;
            tail = NULL;
        }

    // Creating a function to create nodes for the linked list
    void createnode(int value) {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        
        if(head == NULL) {
            head = temp;
            tail = temp;
            temp = NULL;
        
        } else {

            tail->next = temp;
            tail=temp;
        }
    }

    // Function to display the linked list
    void display() {
        node *temp = new node;
        temp = head;
        while(temp != NULL) {
            cout << temp->data << "\t";
            temp = temp->next;
        }
    }

    // Function to insert a node at the start
    void insert_start(int value) {
        node *temp = new node;
        temp->data = value;
        temp->next = head;
        head = temp;
    }

    // Function to insert a node at a specific spot
    void insert_position(int pos, int value) {
        node *pre = new node;
        node *cur = new node;
        node *temp = new node;
        cur = head;
        
        for(int i = 1; i < pos; i++) {
            pre = cur;
            cur = cur->next;
        }

        temp->data = value;
        pre->next = temp;
        temp->next=cur;
    }

    // Function to delete the first node
    void delete_first() {
        node *temp = new node;
        temp = head;
        head = head->next;
        delete temp;
    }

    // Function to delete the last node
    void delete_last() {
        node *current = new node;
        node *previous = new node;
        current = head;

        while(current->next != NULL) {
            previous = current;
            current = current->next;
        }
        tail = previous;
        previous->next = NULL;
        delete current;
    }

    // Deleting node a specific spot
    void delete_position(int pos) {
        node *current = new node;
        node *previous = new node;
        current = head;

        for(int i = 1; i < pos; i++) {
            previous = current;
            current = current->next;
        }
        previous->next = current->next;
    }

};

int main() {
    list obj;
    obj.createnode(5);  // Create node with data of int 5
    obj.display();

    return 0;
}