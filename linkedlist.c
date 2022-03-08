#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};

void main()
{

    struct node *first;
    struct node *last;
    struct node *temp;

    int ch,val,count,pos,t,i;
    struct node *p;
    do
    {

    printf("\n\t 1.CREATION");
    printf("\n\t 2.INSERT AT STARTING");
    printf("\n\t 3.INSERT AT MIDDLE(IN BETWEEN)");
    printf("\n\t 4.INSERT AT END");
    printf("\n\t 5.DELETE 1ST NODE");
    printf("\n\t 6.DELETE LAST NODE");
    printf("\n\t 7.DELETE MIDDLE NODE(IN BETWEEN)");
    printf("\n\t 8.DISPLAY");
    printf("\n\t 9.EXIT");
    printf("\n Enter your choice : ");
    scanf("%d",&ch);

    switch(ch){
          case 1:
              {
                  printf("\n Enter the data");
                  first=(struct node*)malloc(sizeof(struct node));
                  scanf("%d",&val);

                  first->data=val;
                  first->next=0;
                  p=first;
                  count=1;
                  break;
              }
          case 2:
            {
                p=(struct node*)malloc(sizeof(struct node));
                printf("enter the data");
                scanf("%d",&p->data);
                p->next=first;
                first=p;
                count++;
                break;

            }
        case 4:
            {
               p=(struct node*)malloc(sizeof(struct node));
               printf("Enter the data");
               scanf("%d",&p->data);
               temp=first;
               while(temp->next!=0){
                temp=temp->next;
               }
               temp->next=p;
               p->next=0;
               count++;
               break;
            }
        case 3:
            {
            printf("Enter any address between 1 and %d",count);
            scanf("%d",&pos);
            t=1;
           p=first;
          while(t!=pos)
           {
            p=p->next;
            t++;
          }
          temp=(struct node*)malloc(sizeof(struct node));
          printf("\n\t ENTER DATA FOR NODE");
          scanf("%d",&temp->data);
          temp->next=p->next;
          p->next=temp;
          count++;
          break;
        }

        case 5:
            {

                p=first;
                first=p->next;
                free(p);
                break;
            }
        case 6:
            {
                p=first;
                while(p->next->next!=0){
                    p=p->next;
                }

                free(p->next->next);
                p->next=0;
                break;
            }
        case 7:
            {

                printf("Enter any address between 1 and %d:",count);
                scanf("%d",&pos);
                t=1;
                p=first;
                while(t<pos-1){
                    p=p->next;
                    t++;
                }
                temp=p->next;
                p->next=temp->next;
                free(temp);
                count--;
                break;
            }

        case 8:
            {
                p=first;
                while(p!=0){
                    printf("\t %d",p->data);
                    p=p->next;
                }
                break;
            }

    }

    }while(ch!=9);



}
