#include<stdio.h>
#include<stdlib.h>
#define n 4
int top = -1, stack[n];
void push();
void pop();
void show();

int main()
{

int choice;

while(1)
{
printf("\n 1 push \n 2 pop \n 3 show \n 4 exit");
printf("\n enter the choice");
scanf("%d",&choice);
switch (choice)
{
case 1:
push();
break;

case 2:
pop();
break;

case 3:
show();
break;

case 4:
exit(0);
 default:
 printf("invalid choice \n");
}
}
}
void push()
{
int item;
if(top == n-1)
{
printf("stack overflow");
}


else
{
printf("enter the item to be inserted: ");
scanf("%d",&item);

top = top+1;
stack[top]=item;
}
}
void pop()
{
if(top == -1)
{
printf("stack is underflow");

}
else{
printf("deleted element is %d",stack[top]);
top = top-1;

}
}
void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i){
            printf("%d\n", stack[i]);
    }}
}
