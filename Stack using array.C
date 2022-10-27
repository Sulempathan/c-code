// Stack using arrays


#include<stdio.h>

#include<conio.h>

int a[10],top=-1;

char ans = 'y';

void main()

{
 
 void push();
 
 void pop();
 
 void display();

 int a;

 clrscr();

 while( ans == 'y')

 {

  printf("Enter your choice:- \n1: Push\n2: Pop\n3: Display\n");

  scanf("%d",&a);

  switch(a)

  {

   case 1:push();

	break;
    
   case 2: pop();

	break;
   
   case 3: display();

        break;

   default:printf("Wrong choice: \n");

  }

  printf("Do you want to continue(y/n):- ");

  scanf("%s",&ans);

 }

 getch();

}


void push()

{

 if (top==9)

  printf("Overflow:");

 else

 {

  int b;

  printf("Enter data:- ");

  scanf("%d",&b);

  top += 1;

  a[top]=b;

 }

}


void pop()
]
{

 if(top == -1)

  printf("Underflow: ");

 else

  printf("Sucessfully pop: %d\n",a[top]);

  top -= 1;

}

void display()

{

 int i;

 if (top == -1)

  printf("No data: ");

 else

 {

  printf("Data store:-\n");

  for (i=top; i>=0 ;i--)

   printf("%d\n",a[i]);

 }

}


