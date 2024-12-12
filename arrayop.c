#include<stdio.h>
#include<stdlib.h>
int n,i,k,a[50];
 
void create()
 {
 int i;
printf("enter the size of the aray");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
} 
}

void insert()
{
int item;

printf("enter the element to be inserted: ");
scanf("%d",&item);

printf("enter the location where you want to insert the element: ");
scanf("%d",&k);
for(i=n;i>=k;i--)
{
a[i+1] = a[i];
}
a[k] =item;
n=n+1;

}

void delete()
{
printf("enter the position to be deleted");
scanf("%d",&k);
for(i=k;i<n;i++)
{
a[i] = a[i+1];
}
n=n-1;
}

void traverse()
{
printf("\n array elements are ");
for(i=0;i<n;i++)
printf("%d",a[i]);
}

int main()
{
int ch;


printf("array operations \n");

while(1)
{
printf("enter 1 create , 2 insert, 3 delete , 4 traverse, 5 exit \n ");
printf("\n enter your choice");
scanf("%d",&ch);


switch(ch)
{
case 1:create();
       break;
       
case 2:insert();
       break;
       
case 3:delete();
       break;
       
case 4:traverse();
       break;
       
case 5:exit(0);
       break;
default:printf("invalid");
       
}

}
return 0;
}


