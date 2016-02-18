#include<stdio.h>
#include<stdlib.h>
struct link
{
   int coeff;
   int pow;
   struct link *next;
   };
struct link *poly1=NULL,*poly2=NULL,*poly=NULL;
void create(struct link *node)
{
 int d;
 do
 {
  printf("\n\nenter coefficient\t:");
  scanf("%d",&node->coeff);
  printf("\nenter power\t:");
  scanf("%d",&node->pow);
  node->next=(struct link*)malloc(sizeof(struct link));
  node=node->next;
  node->next=NULL;
printf("\npress 1 to continue..");
scanf("%d",&d);
}
while(d==1);
}

void show(struct link *node)
{
while(node->next!=NULL)
{

printf("%dx^%d",node->coeff,node->pow);
node=node->next;
if(node->next!=NULL)
printf(" + ");


}
}
void polyadd(struct link *poly1,struct link *poly2,struct link *poly)
{
 while(poly1->next &&  poly2->next)
 {
  if(poly1->pow>poly2->pow)
  {
   poly->pow=poly1->pow;
   poly->coeff=poly1->coeff;
   poly1=poly1->next;
   }
  else if(poly1->pow<poly2->pow)
  {
   poly->pow=poly2->pow;
   poly->coeff=poly2->coeff;
   poly2=poly2->next;
   }
  else
  {
   poly->pow=poly1->pow;
   poly->coeff=poly1->coeff+poly2->coeff;
   poly1=poly1->next;
   poly2=poly2->next;
   }
  poly->next=(struct link *)malloc(sizeof(struct link));
  poly=poly->next;
  poly->next=NULL;
 }
 while(poly1->next || poly2->next)
 {
  if(poly1->next)
  {
   poly->pow=poly1->pow;
   poly->coeff=poly1->coeff;
   poly1=poly1->next;
   }
  if(poly2->next)
  {
   poly->pow=poly2->pow;
   poly->coeff=poly2->coeff;
   poly2=poly2->next;
   }
   poly->next=(struct link *)malloc(sizeof(struct link));
   poly=poly->next;
   poly->next=NULL;
   }

}


void polysub(struct link *poly1,struct link *poly2,struct link *poly)
{
 while(poly1->next &&  poly2->next)
 {
  if(poly1->pow>poly2->pow)
  {
   poly->pow=poly1->pow;
   poly->coeff=poly1->coeff;
   poly1=poly1->next;
   }
  else if(poly1->pow<poly2->pow)
  {
   poly->pow=poly2->pow;
   poly->coeff=poly2->coeff;
   poly2=poly2->next;
   }
  else
  {
   poly->pow=poly1->pow;
   poly->coeff=poly1->coeff-poly2->coeff;
   poly1=poly1->next;
   poly2=poly2->next;
   }
  poly->next=(struct link *)malloc(sizeof(struct link));
  poly=poly->next;
  poly->next=NULL;
 }
 while(poly1->next || poly2->next)
 {
  if(poly1->next)
  {
   poly->pow=poly1->pow;
   poly->coeff=poly1->coeff;
   poly1=poly1->next;
   }
  if(poly2->next)
  {
   poly->pow=poly2->pow;
   poly->coeff=poly2->coeff;
   poly2=poly2->next;
   }
   poly->next=(struct link *)malloc(sizeof(struct link));
   poly=poly->next;
   poly->next=NULL;
   }

}


  void main()
  {
  int choice;
  int c;
  do{
  poly1=(struct link *)malloc(sizeof(struct link));
  poly2=(struct link *)malloc(sizeof(struct link));
  poly=(struct link *)malloc(sizeof(struct link));
  printf("\n\n1.Addition\n2.Subtraction\n\nEnter your choice\n");
  scanf("%d",&choice);
  switch(choice)
  {
        case 1:
            printf("\n\nenter 1st polynomial:");
            create(poly1);
            printf("\n\nenter 2nd polynomial:");
            create(poly2);
            printf("\n1st Polynomial:\t");
            show(poly1);
            printf("\n2nd Polynomial:\t");
            show(poly2);
            polyadd(poly1,poly2,poly);
            printf("\nAdded polynomial:\t");
            show(poly);
            break;
        case 2:
            printf("\n\nenter 1st polynomial:\t");
            create(poly1);
            printf("\n\nenter 2nd polynomial:\t");
            create(poly2);
            printf("\n\n1st Polynomial:\t");
            show(poly1);
            printf("\n\n2nd Polynomial:\t");
            show(poly2);
            polysub(poly1,poly2,poly);
            printf("\n\nSubtracted polynomial:\t");
            show(poly);
            break;  
        
        }

 printf("\n Press 1 to continue..\n");
 scanf("%d",&c);
  }while(c==1);

}
