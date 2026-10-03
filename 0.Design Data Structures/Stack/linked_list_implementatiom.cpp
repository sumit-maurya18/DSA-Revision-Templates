//Implementing the stack using the linked list
//In this implementation no overflow and underflow conditions occur
//All the operations are in O(1)
//However it has some overhead
//It is not CACHE FRIENDLY

#include<bits/stdc++.h>
using namespace std;

class Stack{

    private:

    //defining linked list node using class
    class Node{

        public:
        int data;
        Node *next;

        Node(int value){
            data = value;
            next = nullptr;
        }
    };

    Node*top;

    //defining a linked list node using struct
    // typedef struct Node{
    //     int data;
    //     Node *next;

    //     Node(int value){
    //         data = value;
    //         next = nullptr;
    //     }
    // }Node;

    public:

    Stack(){
        top = nullptr;
    }

    bool isEmpty(){
        return top == nullptr;
    }

    void push(int value){
        Node *newNode = new Node(value);
        newNode -> next = top;
        top = newNode;

        cout << value << " -> pushed into the stack.\n";
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack undeflow";
        }

        else{
            Node *temp = top;

            int value = top -> data;

            top = top -> next;

            delete temp;

            cout << value << " -> is popped from stack.\n";
        }
    }

    void peek(){
        if(isEmpty()){
            cout << "Stack undeflow";
        }

        else{
            cout << top -> data << " -> is top element.\n";
        }

    }
};

int main(){

    Stack st;
    st.push(1);
    st.push(2);
    st.peek();
    st.push(5);
    st.pop();
    cout << st.isEmpty();
    return 0;
}