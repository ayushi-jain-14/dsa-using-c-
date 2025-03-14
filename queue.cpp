#include <iostream>
using namespace std;
class queue
{
private:
    int arr[3];
    int rear, front;

public:
    queue()
    {
        front = -1;
        rear = -1;
    }
    bool isempty()
    {
        return (front == -1);
    }
    bool isfull()
    {
        return (rear == 3 - 1);
    }
    void enqueue(int value)
    {
        if (isfull())
        {
            cout << "queue is full " << value << endl;
            return;
        }
        if (isempty())
        {
            front = 0;
        }
        arr[++rear] = value;
        cout << "enqueue: " << value << endl;
    }
    void dequeue()
    {
        if (isempty())
        {
            cout << "queue is empty" << endl;
            return;
        }
        cout << "dequeue: " << arr[front] << endl;
        if (front >= rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
    void display()
    {
        if (isempty())
        {
            cout << "queue is empty!!" << endl;
            return;
        }
        cout << "queue elements : ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}