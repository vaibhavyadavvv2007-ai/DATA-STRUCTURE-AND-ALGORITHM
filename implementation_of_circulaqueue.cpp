#include<iostream>
using namespace std;

class circularqueue{
    int* arr;
    int f;
    int r;
    int currsize;
    int cap=0;
public:
    circularqueue(int size){
        cap=size;
        f=0;
        r=-1;
        arr=new int[cap];
       currsize=0;
    }
    void push(int val){
        if(currsize==cap){
            cout<<"queue is full";
            return;
        }
        r=(r+1)%cap;
        arr[r]=val;
        currsize++;
    }
    void pop(){
        if (empty())
        {
            cout<<"queue is empty";
            return;
        }
        f=(f+1)%cap;
        currsize--;

    }
    int front(){
        return arr[f];
    }
    bool empty(){
        return currsize==0;
    }
    void print(){
        for (int i = 0; i < cap; i++)
        {
            cout<<arr[i];
        }
        
    }
};
int main (){
    circularqueue q(3);
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    q.push(4);
    q.print();
    cout<<endl;
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
}