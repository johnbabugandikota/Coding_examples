#include<stdio.h>

#define MAX 3

int queue[MAX];
int front=-1,rear=-1;

int isempty(){
    if (front==-1 && rear==-1) {
        printf("queue is empty\n");
    return 1;
    }
    else return 0;
}

int isfull(){
   int flag= (front==(rear+1)%MAX);
   if (flag){
    printf("queue is full\n");
   }
   return flag;
}

void enqueue(){
    if(isfull()) return;
    int data;
    printf("enter data\n");
    scanf("%d",&data);
    if(front==-1) ++front;
    rear=(rear+1)%MAX;
    queue[rear]=data;
    printf("%d enqueue successfully\n",data);
}

void dequeue(){
    if(isempty()) return ;
     int data=queue[front];
    if(front==rear){
        front=rear=-1;
    }else front=(front+1)%MAX;
    printf("%d dequeue successfully \n",data);
}

void menu(){
    puts("1.enqueue\n");
    puts("2.dequeue\n");
    puts("3.Peek\n");
}
void peek(){
    if(isempty()) return;
    printf("Front is at %d with data %d\n",front,queue[front]);
    printf("rear is at %d with data %d\n",rear,queue[rear]);
}

int main(){
    int option;
    while(1){
        menu();
        printf("enter option \n");
        scanf("%d",&option);
        switch(option){
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: peek();
                    break;
            default: printf("invalid option\n");
        }
    }
}