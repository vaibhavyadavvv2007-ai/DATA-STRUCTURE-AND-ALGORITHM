#include<iostream>
#include<list>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
    
};
class queue{
    Node* head;
    Node* tail;
public:
    queue(){
        head=tail=NULL;
    }
    void push(int val){
        Node* newnode=new Node(val);
        if (empty())
        {
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }

    }
    void pop(){
        if (empty())
        {
            cout<<"queue is empty";
            return;
        }
        else{
            Node* temp=head;
            head=head->next;
            // temp->next=NULL;
            delete temp;
            
        }
    
    }
    int front(){
        return head->data;
    }
    bool empty(){
        return head==NULL;
        
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    while (!q.empty())
    {
        cout<<q.front();
        q.pop();
    }
    

}