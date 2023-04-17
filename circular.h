#ifndef CIRCULAR_H
#define CIRCULAR_H


class queue
{
private:
    int front;
    int rear;
    int size;
    int count;
    int array[5];
public:
    queue();
    void addElement(int);
    void removeElement();
    void getFront() const;
    void getRear() const;
    ~queue();

};



#endif