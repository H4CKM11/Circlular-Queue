#include "circular.h"
#include <iostream>

queue::queue()
{
    size = 5;
    front = -1;
    rear = -1;
    count = 0;
}

void queue::addElement(int element)
{
    //Checking if queue is empty
    if(front == -1)
    {
        array[0] = element;
        front = rear = 0;
        count++;

        return;
    }

    if(front == size - 1)
    {
        front = 0;
        array[front] = element;
        rear++;
    }

    else
    {
        front++;
        array[front] = element;
        count++;
    }

}

void queue::removeElement()
{
    //Checking if the queue is empty
    if(count == 0)
    {
        std::cout << "Queue is empty" << std::endl;
        return;
    }
    
    if(rear == size - 1)
    {
        array[rear] = 0;
        rear = 0;
        count--;
        if(count == 0){ front = rear = -1; };
    }
    else
    {
        array[rear] = 0;
        rear++;
        count--;
        if(count == 0){ front = rear = -1; };
    }
}

void queue::getFront() const
{
    (count == 0) ? std::cout << "Queue is empty \n" : std::cout << array[front];
    return; 
}
void queue::getRear() const
{
    (count == 0) ? std::cout << "Queue is empty \n" : std::cout << array[rear];
    return; 
}

queue::~queue()
{
    std::cout << "Destructor Called" << std::endl;
}