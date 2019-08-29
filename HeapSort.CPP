#include<stdio.h>
#include<conio.h>
int a[10],heap[10];
int outputarray[10];
int n=0,i=0;
int heapsize=0;
int count=0;
void heapify(int array[],int i,int sizeofheap)
{
count++;
 int l,r,largest;
 l=i*2+1;
 r=i*2+2;

if(l<sizeofheap && heap[1]>heap[i])
  largest=1;
else
  largest=i;
if(r<sizeofheap && heap[r]>heap[largest])
  largest=r;
if(largest!=i)
{
  int temp=heap[largest];
  heap[largest]=heap[i];
  heap[i]=temp;
int parent2=((i+1)/2)-1;
if(parent2<0)
  parent2=0;
  heapify(heap,parent2,sizeofheap);

}
}
void heap_insert(int key)
{
count++;
heapsize=heapsize+1;
if(heapsize==1)
  heap[heapsize-1]=key;
else
{
  heap[heapsize-1]=key;
int parent=(heapsize)/2;
heapify(heap,parent-1,heapsize);
}
}

void heap_sort()
{
int totalitems=n;
int j=totalitems-1;
while(j>=0)
{
count++;
outputarray[j]=heap[0];
heap[0]=heap[j];
j=j-1;
heapify(heap,0,j+1);
}
}


void main()
{
clrscr();
printf("Enter No. of Elements\t");
scanf("%d",&n);
printf("Enter %d values",n);
for(i=0;i<n;i++)
{
count++;
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
count++;
heap_insert(a[i]);
}
printf("The Given Heap is -");
for(i=0;i<n;i++)
{
printf("\t%d",heap[i]);
}
heap_sort();
printf("\nSorted Heap-\n");
for(i=0;i<n;i++)
{
printf("\n%d",outputarray[i]);
}
printf("\nTotal Steps are \n%d",count);
getch();
}












