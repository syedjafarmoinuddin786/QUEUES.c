// PERFORMING OPERATIONS ON DOUBLE ENDED queue USING ARRAY  
#include<stdio.h>
#include<stdlib.h>
#define MAX 7 
int DEqueue[MAX];
int rear=-1;	
int front=-1;

//DECLARE THE SUBFUNCTIONS THAT ARE TO BE CREATED 

void enqueue_front(int);
void enqueue_rear(int);
void dequeue_front();
void dequeue_rear();
void display();
// MAIN FUNCTION
int main(){
		int entry,choice;
		while(1){
			printf("** * * MENU * * **\n");
			printf("1.ENQUEUE_FRONT \n");
			printf("2.ENQUEUE_REAR \n");
			printf("3.deQUEUE_FRONT \n");
			printf("4.deQUEUE_REAR \n");	
			printf("5.DISPLAY \n");
			printf("6.EXIT\n");
			printf("ENTER YOUR CHOICE:\n");
			scanf("%d",&choice);
			switch(choice){
						
					case 1:printf("ENTER THE ELEMENT TO BE INSERTED :\n");
						scanf("%d",&entry);
						enqueue_front(entry);
						break;
					case 2:printf("ENTER THE ELEMENT T OBE INSERTED :\n");
						scanf("%d",&entry);
						enqueue_rear(entry);
						break;							
					case 3:dequeue_front();
						break;
					case 4:dequeue_rear();
						break;
					case 5:display();
						break;
					case 6:exit(0);
						break;
					default:printf("INVALID CHOICE \n");
			}
				
		  }
	
}
// INSERTION 
void enqueue_front(int entry){
			if(front==((rear+1)%MAX))
				printf("QUEUE IS FULL\n");
			else if(front==-1){
					front=rear=0;
					DEqueue[front]=entry;
				}
			else if(front==0){
					front=MAX-1;
					DEqueue[front]=entry;							
				}
			else{
				front--;
				DEqueue[front]=entry;
				}			
}
void enqueue_rear(int entry){
			if(front==(rear+1)%MAX)
				printf("QUEUE IS FULL\n");
			else if(front==-1){
				front=rear=0;
				DEqueue[rear]=entry;
				}		
			else{
				rear=(rear+1)%MAX;
				DEqueue[rear]=entry;
			
				}
}		
// DELETION		
void dequeue_front(){
		if(front==-1)
			printf("QUEUE IS EMPTY\n");
		else{
			printf("DELETED ELEMENT %d \n",DEqueue[front]);
			if(front==rear)
				front=rear=-1;
			else{
				front=(front+1)%MAX;
			}
		}	
}			
void dequeue_rear(){
		if(front==-1)
			printf("QUEUE IS EMPTY\n");
		else{
			printf("%4d",DEqueue[rear]);
			if(front==rear)
				front=rear=-1;
			else if(rear==0)
				rear=MAX-1;
			else
			{
				rear--;
			}
			 
		}
}
//        display function
void display(){
		int i=front;
		if(front==-1)
			printf("QUEUE IS EMPTY\n");
		else{
			while(i!=rear)
				printf("4%d\n",DEqueue[i]);
				i=(i+1)%MAX;
		}
		printf("4%d\n",DEqueue[rear]);
}
		 	











		


