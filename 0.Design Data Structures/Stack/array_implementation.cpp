//Implementing the stack using the fixed-size array
//In this implementation, overflow and underflow conditions occur
//All the operations are in O(1)
//It is CACHE FRIENDLY

#include<bits/stdc++.h>
using namespace std;

class Stack{

    private:

    int *arr;
    int top;
    int size;

    public:

    Stack(int size){
        this -> size = size;
        top = -1;
        arr = new int[size];
    }

    ~Stack(){
        delete []arr;
    }
    
    bool isEmpty(){
        return top == -1;
    }

    bool isFull(){
        return top == size - 1;
    }

    //designing push opeartion
    void push(int num){
        if(isFull()){
            cout << "Stack overflow.\n"; 
        }

        else{
            top++;
            cout << num << " -> pushed in stack.\n";
            arr[top] = num;
        }
    }

    //designing pop operation
    void pop(){
        if(isEmpty()){
            cout << "Stack underflow.\n";
        }

        else{
            int result = arr[top];
            top--;
            cout << result << " -> popped from stack.\n";
        }
    }

    //designing top / peek opeation
    void peek(){
        if(isEmpty()){
            cout << "Stack underflow.\n";
        }

        else{
            cout << arr[top] << " -> is top element."<< "\n";
        }
    }
};

int main()
{
    Stack st(5);

    st.push(1);
    st.push(2);
    st.peek();
    st.pop();
    st.push(5);
    cout << st.isEmpty() <<"\n";
    return 0;
}