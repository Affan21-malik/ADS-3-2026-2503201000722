#include<iostream>
using namespace std;

#define size 5

int f=-1,r=-1;
int q[size];

bool isempty()
{
    if(f>r||f==-1)
    {
        // cout<<"\nqueue is empty"<<endl;
        return true;
    }
    else
        return false;
}

bool isfull()
{
    if(r==size-1)
    {
        cout<<"\nqueue is full"<<endl;
        return true;
    }
    else
        return false;
}

void enqueue(int x)
{
    if(isfull())
        cout<<"\noverflow"<<endl;
    else
    {
        if(f==-1)
            f=0;

        r++;
        q[r]=x;
    }
}

void dequeue()
{
    if(isempty())
        cout<<"\nunderflow"<<endl;
    else
    {
        cout<<"\ndeleted element = "<<q[f]<<endl;
        f++;

        if(f>r)
        {
            f=-1;
            r=-1;
        }
    }
}

void display()
{
    if(isempty())
        cout<<"\nqueue is empty"<<endl;
    else
    {
        cout<<"\nqueue elements are: ";

        for(int i=f;i<=r;i++)
        {
            cout<<q[i]<<" ";
        }

        cout<<endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();
    dequeue();

    display();

    enqueue(60);

    display();

    return 0;
}