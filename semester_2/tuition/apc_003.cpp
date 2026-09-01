/* Doubly linked list using template */

#include <iostream>
using namespace std;

// Node class
template <class T>
class Node
{
public:
    T data;
    Node<T>* prev;
    Node<T>* next;

    // Constructor
    Node(T value)
    {
        this->data = value;
        this->prev = NULL;
        this->next = NULL;
    }
};


// Doubly Linked List class
template <class T>
class DoublyLinkedList
{
private:
    Node<T>* head;

public:

    // Default Constructor
    DoublyLinkedList()
    {
        head = NULL;
    }


    // Copy Constructor
    DoublyLinkedList(const DoublyLinkedList<T>& other)
    {
        head = NULL;

        Node<T>* temp = other.head;

        while (temp != NULL)
        {
            insertAtEnd(temp->data);
            temp = temp->next;
        }
    }


    // Insert at beginning
    void insertAtBeginning(T value)
    {
        Node<T>* newNode = new Node<T>(value);

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }


    // Insert at end
    void insertAtEnd(T value)
    {
        Node<T>* newNode = new Node<T>(value);

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node<T>* temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }


    // Delete a value
    void deleteNode(T value)
    {
        if (head == NULL)
        {
            cout << "List is empty.\n";
            return;
        }

        Node<T>* temp = head;

        // Search for the value
        while (temp != NULL && temp->data != value)
        {
            temp = temp->next;
        }

        // Value not found
        if (temp == NULL)
        {
            cout << "Value not found.\n";
            return;
        }

        // Delete first node
        if (temp == head)
        {
            head = head->next;

            if (head != NULL)
                head->prev = NULL;
        }
        else
        {
            temp->prev->next = temp->next;

            if (temp->next != NULL)
                temp->next->prev = temp->prev;
        }

        delete temp;

        cout << "Value deleted successfully.\n";
    }


    // Search
    void search(T value)
    {
        Node<T>* temp = head;
        int position = 1;

        while (temp != NULL)
        {
            if (temp->data == value)
            {
                cout << "Value found at position "
                     << position << ".\n";
                return;
            }

            temp = temp->next;
            position++;
        }

        cout << "Value not found.\n";
    }


    // Display forward
    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty.\n";
            return;
        }

        Node<T>* temp = head;

        cout << "List: ";

        while (temp != NULL)
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }


    // Display backward
    void displayReverse()
    {
        if (head == NULL)
        {
            cout << "List is empty.\n";
            return;
        }

        Node<T>* temp = head;

        // Go to last node
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        cout << "Reverse: ";

        while (temp != NULL)
        {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }

        cout << "NULL\n";
    }


    // Reverse the linked list
    void reverseList()
    {
        Node<T>* current = head;
        Node<T>* temp = NULL;

        while (current != NULL)
        {
            // Swap next and prev
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;

            // Move to next node
            current = current->prev;
        }

        if (temp != NULL)
        {
            head = temp->prev;
        }

        cout << "List reversed successfully.\n";
    }
};


// Main function
int main()
{
    DoublyLinkedList<int> list;

    int choice;
    int value;

    do
    {
        cout << "\n========== DOUBLY LINKED LIST ==========\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete\n";
        cout << "4. Search\n";
        cout << "5. Display\n";
        cout << "6. Display Reverse\n";
        cout << "7. Reverse List\n";
        cout << "8. Copy List\n";
        cout << "9. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtEnd(value);
            break;

        case 3:
            cout << "Enter value to delete: ";
            cin >> value;
            list.deleteNode(value);
            break;

        case 4:
            cout << "Enter value to search: ";
            cin >> value;
            list.search(value);
            break;

        case 5:
            list.display();
            break;

        case 6:
            list.displayReverse();
            break;

        case 7:
            list.reverseList();
            break;

        case 8:
        {
            // Copy constructor is called
            DoublyLinkedList<int> copy(list);

            cout << "Copied List: ";
            copy.display();

            break;
        }

        case 9:
            cout << "Program terminated.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 9);

    return 0;
}