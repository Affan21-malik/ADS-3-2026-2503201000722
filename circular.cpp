#include<iostream>
using namespace std;

#define size 5

int f=-1,r=-1;
int q[size];

bool isempty()
{
    if(f==-1)
    {
        cout<<"\nqueue is empty"<<endl;
        return true;
    }
    else
        return false;
}

bool isfull()
{
    if((r+1)%size==f)
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
        {
            f=0;
            r=0;
        }
        else
            r=(r+1)%size;

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

        if(f==r)
        {
            f=-1;
            r=-1;
        }
        else
            f=(f+1)%size;
    }
}

void display()
{
    if(isempty())
        cout<<"\nqueue is empty"<<endl;
    else
    {
        cout<<"\nqueue elements are: ";

        int i=f;

        while(true)
        {
            cout<<q[i]<<" ";

            if(i==r)
                break;

            i=(i+1)%size;
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
    enqueue(70);

    display();

    return 0;
}