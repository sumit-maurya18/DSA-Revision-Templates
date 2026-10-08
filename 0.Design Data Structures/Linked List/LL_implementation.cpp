#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this -> data = data;
        this -> next = nullptr;
    }
};

int main()
{
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;

    Node *temp = first;

    while(temp != nullptr)
    {
        cout << temp -> data << endl;
        temp = temp -> next;
    }

}