#include<stdio.h>
#include<conio.h>
int c;
void inputarray(int a[],int n)
{
int count;
for (count=0;count<n;count++)
{
scanf("%d",&a[count]);
}
}

void outputarray(int a[],int n)
{
int count ;
for (count=0;count<n;count++)
{
printf("%d\n",a[count]);
}
}
int insertionsort(int a[],int n)      //insertionsort
{
int j,i,key;
c++;
for(j=1;j<n;j++)
{
c++;
key =a[j];
c++;
i=j-1;
c++;
while(i>=0 && a[i]>key)
{
c++;  c++;
a[i+1]=a[i];
c++;
i=i-1;
c++;
}
a[i+1]=key;
c++;
}
}
void main()           // main function start
{                                           // function defination
void inputarray(int [],int n);
void outputarray(int [],int n);
int insertionsort(int [],int n);
int a[100],n;
clrscr();
printf("enter element of array\n");              //size of array
scanf("%d",&n);
printf("enter element of array\n");
inputarray(a,n);
printf("array before sorting\n");
outputarray(a,n);
insertionsort(a,n);                //insertion sort
printf("array after sorting\n");
outputarray(a,n);
printf("value of counter --> %d",c);
getch();
}