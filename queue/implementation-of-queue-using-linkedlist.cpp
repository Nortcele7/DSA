#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* next;

    public:
        Node(int val)
        {
            data = val;
            next = NULL;
        }

};

class Queue{

    Node* head;
    Node* tail;

    public:
        Queue()
        {
            head=tail=NULL;
        }

        void push(int val)
        {
            Node* newNode = new Node(val);
            

            if(empty())
            {
                head=tail=newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }

        }

        void pop()
        {
            if(empty())
            {
                cout<<"The queue is empty"<<endl;
                return;
            }
            else
            { 
                Node* temp = head;

                head = head->next;
                temp->next = NULL;
                delete temp;

                if(head==NULL)
                {
                    tail = NULL;
                }
            }
            
        }

        int front()
        {
            if(empty())
            {
                cout<<"The queue is empty"<<endl;
                return -1;
            }
            else
            {
                return head->data;
            }
        }

        bool empty()
        {
            return head==NULL;  // head NULL raicha bhane true return garcha natra false return garcha
        }

        void print()
        {
            Node* temp = head;

            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }

};
 
int main()
{
    Queue q1;

    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.pop();
    q1.pop();


    cout<<q1.front()<<endl;

    q1.print();

}