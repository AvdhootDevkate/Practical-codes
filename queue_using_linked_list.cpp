#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

class queue
{
private:
    node* front;
    node* rear;
public:
    queue()
    {
        front = NULL;
        rear = NULL;
    }
    
    int empty() {
         if(front == NULL) 
             return(1);
         else
             return(0);
    }
  
  
    void enqueue(int x)
    {
        node* p = new node(x);
        if (empty()) {
            front = p;
            rear = p;
        } else {
            rear->next = p;
            rear = p;
        }
    }
    
   
    int dequeue()
    {
        if(empty()) {
            
            return -1; 
        }
        int x = front->data;
        node* p = front;
        front = front->next;
        

        if (front == NULL) {
            rear = NULL;
        }
        
        delete p;
        return(x);
    }
    
    void display()
    {
        if(empty()) {
            cout << "\nQueue is empty" << endl;
            return;
        }
        node* q = front;
        while(q != NULL)
        {
            cout << q->data << " ";
            q = q->next;
        }
        cout << endl;
    }
  
    int peek()
    {
        if(empty()) return -1;
        return(front->data);
    }
};

int main()
{
    queue q;
    int x;
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Queue after enqueuing 10, 20, 30: ";
    q.display();
    
    x = q.peek();
    cout <<"front element is:"<<x << endl;
    
    x = q.dequeue();

    
    cout<<"remaining elements:"<<endl;
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue(); 
    
    return 0;
}
  /*
  > cd "d:\avdhoot124\" ; if ($?) { g++ queue_using_linked_list.cpp -o queue_using_linked_list } ; if ($?) { .\queue_using_linked_list }
Queue after enqueuing 10, 20, 30: 10 20 30 
front element is:10
remaining elements:
20 30 
PS D:\avdhoot124>   
 */