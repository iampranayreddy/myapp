#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int day;
    char event[30];
    struct node *next;
};
int main()
{
struct node *head;
struct node *trav=NULL;
//struct node *end=NULL;
void first()
{
    struct node *link = (struct node*) malloc(sizeof(struct node));
    //int tempday;
    printf("enter the first day\n");
    scanf("%d",&link->day);
    printf("enter the first task\n");
    scanf("%s",&link->event);
  //  link->next=NULL;
    head=link;
    printf("head value %d\n",head->day);
}


void append()
{
struct node *link = (struct node*) malloc(sizeof(struct node));
link->next=NULL;
printf("enter the day of appending task\n");
scanf("%d",&link->day);
printf("enter the appending task\n");
scanf("%s",&link->event);
trav=head;
 //printf("head value %d\n",head->day);
//traverse till last node
while(trav->next!=NULL)
{
    trav=trav->next;
}
trav->next=link;

//trav->next=NULL;


}
void display()
{
    trav=head;
    //printf("head has\n");
    //printf("head has %d\n",head->day);
    printf("the displayed elements are: \n");
    while(trav!=NULL)
    {
    
        printf("---%d\n",trav->day);
        printf("%s\n",trav->event);
        trav=trav->next;
       
    
    }
    printf("\n");
}

int choice;
while(1)
{
printf("1.first\n");
printf("2.append\n");
printf("3.display\n");
printf("4.exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
    case 1:first(); break;
    case 2:append();break;
    case 3:display();break;
    case 4:exit(0);break;
}
}

return 0;
}
