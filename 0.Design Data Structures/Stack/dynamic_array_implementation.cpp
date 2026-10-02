//Implementing the stack using the array doubling technique
//In this implementation only underflow condition occur
//All the operations are in O(1)
//It is CACHE FRIENDLY

#include<bits/stdc++.h>
using namespace std;

class Stack{

    private:
    int *arr;
    int top;
    int capacity;

    //array doubling logic
    void doubleArraySize(){

        int *newArray = new int[2 * capacity];

        for(int i = 0; i < top; i++){
            newArray[i] = arr[i];
        }

        delete [] arr;

        arr = newArray;
        capacity *= 2;

        cout << "Array resized to size -> " << capacity << " .\n";
    }

    public:

    //Stack constructor
    Stack(int capacity){

        this -> capacity = capacity;
        top = -1;
        arr = new int[capacity];
    }

    //destructor
    ~Stack(){
        delete [] arr;
    }

    //checking if current stack is full
    bool isFull(){
        return top == capacity - 1;
    }

    //checking if stack is empty
    bool isEmpty(){
        return top == -1;
    }

    //implementing push operation
    void push(int num){

        if(isFull()){
            doubleArraySize();
        }

        top++;
        
        arr[top] = num;
        cout << num << " -> pushed into the stack.\n";
    }

    //implementing pop operation
    void pop(){

        if(isEmpty()){
            cout << "Stack underflow.\n";
        }

        else{
            cout << arr[top] << " -> popped from the stack.\n";
            top--;
        }
    }

    //implement peek operation
    void peek(){
        if(isEmpty()){
            cout << "Stack underflow.\n";
        }

        else{
            cout << arr[top] << " -> is top element.\n";
        }
    }

};

int main(){


    Stack st(1);
    
    st.push(1);
    st.peek();
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.peek();
    st.pop();
    cout << st.isEmpty() << "\n";

    return 0;
}