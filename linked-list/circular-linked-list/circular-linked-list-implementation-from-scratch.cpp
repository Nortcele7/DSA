#include<iostream>
using namespace std;

// This implements the individual node
class Node{
    public:
        int data;
        Node* next;

        Node(int val)
        {
            data = val;
            next = NULL;
        }

    
};

// This implements the aggregation of individual nodes 

class CircularList{
    Node* head;
    Node* tail;


    public:

        CircularList()
        {
            head = tail = NULL;
        }

        void insertAtHead(int val)
        {
            Node* newNode = new Node(val);

            if(head==NULL)          // We can also check tail==NULL in any linked list because both symbolizes that the linked list is empty
            {
                head = tail = newNode;
                tail->next = head;
            }
            else
            {
                newNode->next = head;
                head = newNode;
                tail->next = head;
            }
        }

        void insertAtTail(int val)
        {
            Node* newNode = new Node(val);

            if(head==NULL)
            {
                head = tail = newNode;
                tail->next = head;
            }

            else
            {
                newNode->next = head;
                tail->next = newNode;
                tail = newNode;
            }
        }

        void print()
        {
            if(head==NULL)
            {
                return;
            }

            cout<<head->data<<"->";
            Node* temp = head->next;

            // Circular linked list has no end. There is no next pointer pointing to NULL value
            while(temp!= head)
            {
                cout<< temp->data<<"->";
                temp = temp->next;
            }

            cout<<temp->data;
        }
};

int main()
{
    CircularList cll;
    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);
    cll.insertAtTail(4);
    
    cll.print();


}