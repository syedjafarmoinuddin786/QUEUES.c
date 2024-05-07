//  LINEAR QUEUE's USING LINKED LIST 
#include<stdio.h>
#include<stdlib.h>
struct node{
		int data;
		struct node *next;
};
typedef struct node NODE;
// declare the head pointer globlally 
NODE *head=NULL;
// SUBFUNCTIONS
//void create();
void enqueue_rear(int);
void dequeue_front();
void display();
int main(){								// main funtion
		int choice,entry;
		//create();
		while(1){
			printf("***** **** *** ** *MENU* ** *** **** *****\n");
			printf("1.ENQUEUE_REAR\n");
			printf("2.DEQUEUE_FRONT\n");
			printf("3.DISPLAY\n");
			printf("4.EXIT\n");
			printf("ENTER YOUR CHOICE:\n");
			scanf("%d",&choice);
			switch(choice){
					
					case 1:enqueue_rear(entry);
						 break;
					case 2:dequeue_front();
						break;
					case 3:display();
						break;
					case 4:exit(0);
					default:printf("INVALID CHOICE.\n");
			}	
		}
}
/*void create(){
		NODE *temp,*front;
		int ch;
		do{
			
			temp=(NODE*)malloc(sizeof(NODE));
			temp=head;
			if(head==NULL)
				head=front=temp;
			else{
				front->next=temp;
				front=temp;
			}
			printf("DO YOU WANT CONTINUE (0/1):");
			scanf("%d",&ch);	
		}while(ch==1);
		front->next=NULL;
}*/
void enqueue_rear(int entry){
				NODE *temp,*rear;
				printf("ENTER the ELEMENT TO BE INSERTED:\n");
				scanf("%d",&entry);
				temp=(NODE*)malloc(sizeof(NODE));
				temp->data=entry;
				if(head==NULL){
						head=temp;
				}
				else{
					rear=head;
					while(rear->next!=NULL){
								rear=rear->next;
							}
							rear->next=temp;		
					}
					temp->next=NULL;
}		
void dequeue_front(){
			NODE *temp,*front;
			front=head;
			temp=head;
			head=front->next;
			printf("deleted element:%d\n",temp->data);
}
void display(){
		NODE *front;
		front=head;
		if(head==NULL)
			printf("QUEUE CONTENT  IS EMPTY\n");
		else{
			printf("QUEUE CONTENT:\n");
			while(front!=NULL){
						printf("%d",front->data);
						front=front->next;
				}
		}	
}
							






					
									
			
			
			
			
			
			
		
		
		
		
		
		
		









