#include<stdio.h>
#include<stdlib.h>
int front =-1 ;
int rear=-1 ;
int maxsize=8 ;
int queue[8];

//check if queue is empty
int isempty()
{
    if(front<0||front>rear)
    {
        return 1 ;
    }
    else
        return 0 ;
}

// check if queue is full
int isfull()
{
    if(rear==maxsize-1)
        {
            return 1;
        }
        else
            return 0;
}

// add element to the end of the queue
int enqueue(int data)
{
    if(!isfull())
        {
            rear=rear+1;
            queue[rear]=data ;
        }
    else
        printf("queue is full ,cant add any more elements \n");
}

//remove element from from queue
int dequeue()
{
   if(!isempty())
    {
        int removed_element ;
        removed_element= queue[front];
        front++;
    }
    else
        printf("the queue is empty ,cant remove any elements \n") ;
}

// view the front element
int peek()
{
    if(!isempty())
    {
    return queue[front] ;
    }
    else
        printf("queue is empty \n");
}

// view rear element
int getrear()
{
    return queue[rear];
}


int main()
{
    front++;
 enqueue(1);
 enqueue(2);
 enqueue(3);
 enqueue(4);
 enqueue(5);
 enqueue(6);
 enqueue(7);
 enqueue(8);
 enqueue(9);

int k ;
printf("the elements of the queue are : \n");
for(k=0;k<=rear;k++)
    {
        printf("%d \n",queue[k]);
    }

}





















