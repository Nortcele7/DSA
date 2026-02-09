#include<iostream>
using namespace std;

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

class List
{
    public:
        Node* head;
        Node* tail;
    
    public:
        List()
        {
            head = NULL;
            tail = NULL;
        }

        void push_front(int val)
        {
            Node* newNode = new Node(val); // This helps us to create a dynamic object. This will create object in heap memory which will be preserved even after the function ends and will only be deted if delete is called.

            // Node newNode(val); // This helps us to create a static object. This will create object in stack memory which will be


            if(head == NULL)
            {
                head = tail = newNode;
                return;
            }

            else{
                newNode->next = head;
                head = newNode;
            }
        }

        void push_back(int val)
        {
            Node* newNode = new Node(val);

            if(tail==NULL)
            {
                head=tail=newNode;
                return;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }

        void pop_front()
        {

            if(head==NULL)
            {
                return;
            }

            Node * temp = head; 
            head = temp->next; 
            temp->next = NULL;
            delete temp;
        }

        void pop_back()
        {
            Node* temp = head;

            while(temp->next != tail)
            {
                temp = temp->next;
            }
            
            temp->next = NULL;
            delete tail;
            tail = temp;
        }

        void insert(int val, int pos)
        {
            Node* newNode = new Node(val);

            Node* temp = head;

            if(pos<0)
            {
                return;
            }
            
            if(pos==0)
            {
                push_front(val);
            }

            for(int i=0; i<pos-1; i++)
            {
                temp = temp->next;
            }
            
            newNode->next = temp->next;
            temp->next = newNode;
        }

        void printLL()
        {
            Node* temp = head;

                while(temp!=NULL)
                {
                    cout<<temp->data<<"->";
                    temp=temp->next;
                    
                }
        }
};

int main()
{
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_back(5);
    ll.pop_front();
    ll.pop_front();
    ll.pop_back();

    ll.insert(5,1);

    ll.printLL();

    
}