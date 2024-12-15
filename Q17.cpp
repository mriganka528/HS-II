#include <iostream>
using namespace std;

class Stack
{
    int top;
    int *arr;
    int max_size;

public:
    Stack(int size)
    {
        max_size = size;
        arr = new int[max_size];
        top = -1;
    }
    void push(int num)
    {
        if (top >= (max_size - 1))
        {
            cout << "Stack Overflow";
            return;
        }
        else
        {
            arr[++top] = num;
        }
    }

    int pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow";
            return -1;
        }
        else
        {
            return arr[top--];
        }
    }
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack is Empty";
            return 0;
        }
        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        return (top < 0);
    }
};

int main()
{
    Stack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << s.pop() << " Popped from stack\n";

    cout << "Top element is : " << s.peek() << endl;

    cout << "Elements present in stack : ";
    while (!s.isEmpty())
    {
        cout << s.peek() << " ";
        s.pop();
    }

    return 0;
}

