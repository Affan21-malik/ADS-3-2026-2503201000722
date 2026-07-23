#include <iostream>
using namespace std;

const int MAX = 10;

int stack[MAX];
int top = -1;


void push(int value)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = value;
        cout << value << " pushed into stack." << endl;
    }
}


int pop(){
    if(top== -1){
        cout<<" the stack is empty ";
    }
    else{
        int value = stack[top];
        top--;
        return value;


    }
}
 int peek(){
    if(top== -1){
        cout<<" the stack is empty ";
        return -1;
    }
    else{
       return stack[top];
    }

 }


// Display Function
void display()
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack Elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    cout << "Top Element: " << peek() << endl;

    cout << "Popped Element: " << pop() << endl;

    display();

    cout << "Top Element: " << peek() << endl;

    return 0;
}