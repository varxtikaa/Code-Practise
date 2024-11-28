#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct q_struct
{
    int front;
    int rear;
    int queue[MAX];
};

int isempty(struct q_struct q)
{
    if(q.front==-1 && q.rear==-1)
    {
        return 1;
    }
    return 0;
}

int isfull(struct q_struct q)
{
    if(q.rear==MAX-1)
    {
        return 1;
    }
    return 0;
}

int enqueue(struct q_struct *q, int ele)
{
    if(isfull(*q))
    {
        exit(0);
    }
    else if(isempty(*q))
    {
        q->front++;
        q->rear++;
        q->queue[q->rear]=ele;
    }
    else
    {
        q->queue[++q->rear]=ele;
    }
    return 0;
}
int dequeue(struct q_struct *q)
{
    int val;
    if(isempty(*q))
    {
        exit(0);
    }
    else if(q->front==q->rear)
    {
        val=q->queue[q->front];
        q->front=-1;
        q->rear=-1;
    }
    else 
    {
        val=q->queue[q->front++];
    }
    return val;
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
    int ch,condition=1;
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