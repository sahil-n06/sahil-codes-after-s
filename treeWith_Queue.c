#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct queue{
    int front;
    int rear;
    int size;
    int capacity;
    int *array;
};

struct node {
    struct node *left;
    int data;
    struct node *right;
}*t=NULL;

void create(struct queue *q){
    q->capacity=10;
    q->front=-1;
    q->rear=-1;
    q->size=0;
    q->array=(int *)malloc(sizeof(int)*q->capacity);
}

bool isfull(struct queue *q){
    return q->rear == q->capacity-1;
}

bool isempty(struct queue *q){
    return q->front == q->rear;
}

void enqueue(struct queue *q,int data){
    if(isfull(q))
        printf("Overflow");
    else{
        q->rear++;
        q->size++;
        q->array[q->rear]=data;
    }
}

int dequeue(struct queue *q){
    int x=-1;
    if(isempty(q))
        return x;
    else{
        x=q->array[q->front];
        q->front++;
        q->size--;
    }
    return x;
}

void display(struct queue *q){
    for(int i=q->front;i<=q->rear;i++){
        printf("%d\t",q->array[i]);
    }
}

struct node *newnode() {
   struct node *t=(struct node*)malloc(sizeof(struct node));
   t->data=x;
   t->left=t->right=NULL;
   return t;
}

void createbst(int x){
    
}

int main(){
    struct queue q;
    create(&q);
    int n;
    printf("How many elements you want to insert in the tree: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int check,x;
        printf("Enter 1 to enter left child and enter 2 to enter right child: ");
        scanf("%d",&check);
        if(check==1){
            printf("Enter the left element: ");
            scanf("%d",&x);
            createbst(x);
        }
        else if (check==2) {
            printf("Enter the right element: ");
            scanf("%d",&x);
            createbst(x);
        }
    }
    return 0;
}
