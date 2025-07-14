// Queue Using Linked List
#include<stdio.h>
#include<stdlib.h>

struct node{
  int info;
  struct node *ptr;
};
struct node *front,*rear,*temp,*front1;
int frontelement();
void enq(int data);
void deq();
void empty();
void display();
void create();
void queuesize();
int count=0;
int main(){
    int no,ch,e;
    create();
    while(1){
	 	printf("\n1 - Enque");
	    printf("\n2 - Deque");
		printf("\n3 - Front element");
    	printf("\n4 - Empty");
    	printf("\n5 - Exit");
    	printf("\n6 - Display");
    	printf("\n7 - Queue Size");

        printf("\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter data: ");
                scanf("%d",&no);
                enq(no);
                break;
            case 2:
                deq();
                break;
            case 3:
                e=frontelement();
                if(e!=0)
                    printf("\nFront element of Queue: %d",e);
                else
                    printf("\nNo front element in Queue. Queue is empty!");
                break;
            case 4:
                empty();
                printf("\nQueue Emptied");
                break;
            case 5:
                exit(0);
                break;
            case 6:
                display();
                break;
            case 7:
                queuesize();
                break;
            default:
                printf("\nWrong Choice, Please enter a valid choice!");
                break;
        }
        printf("\n");
    }
    return 0;
}
void create(){
    front=rear=NULL;
}
void queuesize(){
    printf("\nQueue size: %d",count);
}
void enq(int data){
    if(rear==NULL){
        rear=(struct node *)malloc(1 * sizeof(struct node));
        rear->ptr=NULL;
        rear->info=data;
        front=rear;
    }
    else{
        temp=(struct node*)malloc(1*sizeof(struct node));
        rear->ptr=temp;
        temp->info=data;
        temp->ptr=NULL;
        rear=temp;
    }
    count++;
}
void display(){
    front1=front;
    if(front1==NULL && rear==NULL){
        printf("Queue is empty!");
        return;
    }
    while(front1!=rear){
        printf("%d ",front1->info);
        front1=front1->ptr;
    }
    if(front1==rear)
        printf("%d\n",front1->info);

}
void deq(){
    front1=front;
    if(front1==NULL){
        printf("\nError! Trying to delete elements from an empty queue!");
        return;
    }
    else{
        if(front1->ptr!=NULL){
            front1=front1->ptr;
            printf("\nDequeued Value: %d",front->info);
            free(front);
            front=front1;
        }    
        else{
            printf("\nDequeued Value: %d",front->info);
            free(front);
            front=NULL;
            rear=NULL;
        }
    }
    count--;
}
int frontelement(){
    if(front==NULL && rear==NULL){
        return 0;
    }
    else{
        return(front->info);
    }
}
void empty(){
    if(front==NULL && rear==NULL)
        printf("\nQueue Empty!");
    else
        printf("\nQueue not empty!");
    
}

