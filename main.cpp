#include <iostream>
#include "circular.h"

int main()
{
    queue* cQueue = new queue;

    cQueue->addElement(1);
    cQueue->addElement(2);
    cQueue->addElement(3);
    cQueue->addElement(4);
    cQueue->addElement(5);
    cQueue->addElement(6);

    cQueue->removeElement();
    cQueue->removeElement();
    cQueue->removeElement();
    cQueue->removeElement();
    cQueue->removeElement();
    cQueue->removeElement();
    cQueue->addElement(6);
    cQueue->addElement(6);
    cQueue->removeElement();
    cQueue->removeElement();
    cQueue->removeElement();
    cQueue->addElement(4);
    cQueue->addElement(4);
    cQueue->addElement(4);
    cQueue->addElement(4);
    cQueue->addElement(4);
    cQueue->removeElement();
    cQueue->removeElement();
    cQueue->removeElement();
    cQueue->removeElement();
    cQueue->removeElement();

    cQueue->getFront();

    delete cQueue;

    return 0;

}