#include <iostream>

// Node class for the linked list
struct Node {
    int data;
    Node* next;
};

// Linked List class
class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    // Append a node to the linked list
    void append(int data) {
        Node* new_node = new Node();
        new_node->data = data;
        new_node->next = nullptr;

        if (!head) {
            head = new_node;
            return;
        }

        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = new_node;
    }

    // Delete N nodes after M nodes
    void delete_n_nodes_after_m_nodes(int m, int n) {
        Node* current = head;
        while (current) {
            // Skip M nodes
            for (int i = 0; i < m - 1 && current; i++) {
                current = current->next;
            }

            // Delete N nodes
            if (current) {
                Node* temp = current->next;
                for (int i = 0; i < n && temp; i++) {
                    Node* next_node = temp->next;
                    delete temp;
                    temp = next_node;
                }
                current->next = temp;
                current = temp;
            }
        }
    }

    // Print the linked list
    void print_list() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

private:
    Node* head;
};

// Example usage
int main() {
    LinkedList ll;
    ll.append(1);
    ll.append(2);
    ll.append(3);
    ll.append(4);
    ll.append(5);
    ll.append(6);
    ll.append(7);
    ll.append(8);

    std::cout << "Original Linked List:" << std::endl;
    ll.print_list();

    int m = 2;
    int n = 2;
    ll.delete_n_nodes_after_m_nodes(m, n);

    std::cout << "Linked List after deletion:" << std::endl;
    ll.print_list();

    return 0;
}