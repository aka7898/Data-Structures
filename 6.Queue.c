/*
                                         QUEUE

in Indian Railways, while purchasing ticket we stand in a line, who comes first
will get the ticket first.

Queue is a linear data structure, that is used for First come First Serve.


                                         ADT OF QUEUE
                                        
MINIMAL REQUIREMENTS:
1.  storage
2.  insertion end pointer
3.  deletion end  pointer

METHODS/OPERATIONS
1.  enqueue      inserting an element
2.  dequeu       deleting an element
3.  firstVal     value of first element
4.  lastVal      value of last element
5.  peek(pos)
6.  isEmpty
7.  isFull

                                         IMPLEMENTATION OF QUEUE USING AN ARRAY
ENQUEUE
1. increment back index
2. inset at back index    

    struct  Queue {
        int size;       size of array
        int f;          index value
        int r;
        int * arr;      pointer
    };

    void Enqueue(struct queue * q, int val){
        if (isFull(q)){
                    printf("STACK OS OVERFLOW");
                    return 0;
                }
                else{
                    q -> r = q -> r+1;
                    q -> arr [q -> r] = val;
                }
    }

    int main(){
        struct Queue q;
        q.size = 10;
        q.f = q.r = -1;
        Queue.arr=(int*)malloc(q.size * sizeof(int));
        printf("ENQUEUE = %d\n",Enqueue(q));
        return 0;
    }

DEQUEUE
1. remove element at index0
2. shift all elements

    struct  Queue {
        int size;       size of array
        int f;          index value
        int r;
        int * arr;      pointer
    };

    void Dequeue(struct queue * q, int val){
        if (isEmpty(){
                    printf("STACK OS UNDERFLOW");
                    return -1;
                }
                else{
                    q -> f++;
                    a = q -> arr[f];
                }
                return a;
    }

    int main(){
        struct Queue q;
        q.size = 10;
        q.f = q.r = -1;
        Queue.arr=(int*)malloc(q.size * sizeof(int));
        printf("DEQUEUE = %d\n",Dequeue(q));
        return 0;
    }


                                             CIRCULAR QUEUE

A Circular Queue is an extended version of a normal queue where the last element 
of the queue is connected to the first element of the queue forming a circle.          

The operations are performed based on FIFO (First In First Out) principle. It is 
also called ‘Ring Buffer’. 

Implement Circular Queue using Array:
Initialize an array queue of size n, where n is the maximum number of elements that the queue can hold.
Initialize two variables front and rear to -1.

Enqueue: To enqueue an element x into the queue, do the following:
    Increment rear by 1.
    If rear is equal to n, set rear to 0.
    If front is -1, set front to 0.
    Set queue[rear] to x.

Dequeue: To dequeue an element from the queue, do the following:
    Check if the queue is empty by checking if front is -1. 
    If it is, return an error message indicating that the queue is empty.
    Set x to queue[front].
    If front is equal to rear, set front and rear to -1.
    Otherwise, increment front by 1 and if front is equal to n, set front to 0.
    Return x.


                                             IMPLEMENTATION OF QUEUE USING LINKED LIST

Create a class QNode with data members integer data and QNode* next
A parameterized constructor that takes an integer x value as a parameter and sets data equal to x and next as NULL
Create a class Queue with data members QNode front and rear

Enqueue Operation with parameter x: 
    Initialize QNode* temp with data = x
    If the rear is set to NULL then set the front and rear to temp and return(Base Case)
    Else set rear next to temp and then move rear to temp

Dequeue Operation:
    If the front is set to NULL return(Base Case)
    Initialize QNode temp with front and set front to its next
    If the front is equal to NULL then set the rear to NULL
    Delete temp from the memory  


                                             DOUBLE ENDED QUEUE (DEQueue)     

Double ended queue is a more generalized form of queue data structure which allows insertion and removal of elements 
from both the ends, i.e , front and back.                                                                                 

OPERATIONS
clear(): Remove all the elements from the deque. It leaves the deque with a size of 0.
erase(): Remove one or more elements from the deque. It takes an iterator specifying the position of the first element to be removed, and an optional second iterator specifying the position of the last element to be removed.
swap(): Swap the contents of one deque with another deque.
emplace_front(): Insert a new element at the front of the deque. It is similar to the insert operation, but it avoids the copy constructor of the element being inserted.
emplace_back(): Insert a new element at the back of the deque. It is similar to the insert operation, but it avoids the copy constructor of the element being inserted.
resize(): Change the number of elements in the deque to a specific number. If the new size is larger than the current size, new elements are appended to the deque. If the new size is smaller than the current size, elements are removed from the deque.
assign(): Assign new values to the elements in the deque. It replaces the current contents of the deque with new elements.
reverse(): Reverse the order of the elements in the deque.
sort(): Sort the elements in the deque in ascending order. It uses the less-than operator to compare the elements.

APPLICATIONS
Applied as both stack and queue, as it supports both operations.
Storing a web browser’s history.
Storing a software application’s list of undo operations.
Job scheduling algorithm
*/