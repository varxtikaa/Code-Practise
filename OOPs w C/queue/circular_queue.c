#include<stdio.h>
#include<stdlib.h>
#define max 5
struct q_struct
{
    int front;
    int rear;
    int queue[max];
};
int isempty(struct q_struct q)
{
    return ((q.rear==-1 && q.front==-1)?1:0);
}
int isfull(struct q_struct q)
{
    return ((q.rear==max-1)?1:0);
}
void enqueue(struct q_struct *q,int ele)
{
    if(isfull(*q))
    {
        printf("full");
        exit(0);
    }
    else if(isempty(*q))
    {
        q->front=0;
        q->rear=0;
    }
    else{
        q->rear=(q->rear+1)%max;
    }
    q->queue[q->rear]=ele;
}
int dequeue(struct q_struct *q)
{
    int item;
    if(isempty(*q))
    {
        exit(0);
    }
    item=q->queue[q->front];
    if(q->front==q->rear)
    {
        q->rear=-1;
        q->front=-1;
    }
    else
    {
        q->front=(q->front+1)%max;
    }
    return item;
}
void display(struct q_struct q)
{
    for(int i=q.front;i<=q.rear;i++)
    {
        printf("%d ",q.queue[i]);
    }
    printf("\n");
}
int main()
{
    struct q_struct q;
    int ch;
    q.front=-1;
    q.rear=-1;
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    display(q);
    dequeue(&q);
    dequeue(&q);
    display(q);
}
