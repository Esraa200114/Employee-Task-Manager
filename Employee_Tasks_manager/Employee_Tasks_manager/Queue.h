#include"Task.h"
using namespace std;

class Queue
{
    int no_of_elements;
    int capacity;
    int front, back;
    Task* arr;
   
public:

    Queue(int sizeOfQueue);
    void Enqueue(Task newTask);
    void Dequeue();
    bool IsFull();
    bool IsEmpty();
    Task Front();
    int Length();
    int getFront();
    void setFront(int);
};









