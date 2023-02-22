#include "Queue.h"
#include<assert.h>
#include<iostream>
#include<iostream>
using namespace std;

Queue::Queue(int sizeOfQueue) {

    no_of_elements = 0;
    capacity = sizeOfQueue;
    front = -1;
    back = -1;
    arr = new Task[capacity];
}

void Queue::Enqueue(Task NewTask) {

    assert(!IsFull());
    if (no_of_elements == 0) {

        arr[no_of_elements] = NewTask;
        front = 0;
        
    }
    else {

        int i;
        for (i = no_of_elements - 1; i >= 0; i--) {

            if (NewTask.get_p_value() > arr[i].get_p_value()) {

                arr[i + 1] = arr[i];
            }
            else {

                break;
            }
        }
        arr[i+1] = NewTask;
      
    }
    no_of_elements++;
}



void Queue::Dequeue() {
    
    assert(!IsEmpty());
    if (no_of_elements == 1) {

        front = -1;
        
    }
    else {
       
            front = ((front + 1) % capacity);
          
    }
    
    no_of_elements--;
    
}

int Queue::getFront() {

    return front;
}

void Queue::setFront(int value) {

    front = value;
}

bool Queue::IsFull() {

    return (no_of_elements == capacity);
}

bool Queue::IsEmpty() {

    return (no_of_elements == 0);
}

Task Queue::Front() {

    assert(!IsEmpty());
   
    Task res = arr[front];
    
    return res;
}

int Queue::Length() {

    return no_of_elements;
}


