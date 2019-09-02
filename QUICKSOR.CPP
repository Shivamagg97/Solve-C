#include<stdio.h>
#include<conio.h>
int c=0;
void inputarray(int a[],int n)
{
     int count;
     for(count=0;count<n;count++)
     {
     scanf("%d",&a[count]);
     }
}
    void outputarray(int a[],int n)
{
    int count;
    for(count=0;count<n;count++)
    {
       printf("%d\n",a[count]);
       }
    }
    int partition(int a[],int p,int r)
      {
      int x,i,j,temp;
      x=a[r];
      i=p-1;
      for(j=p;j<r;j++)
      {
      c++;        c++;

       if(a[j]<=x)
       {
       c++;
       i=i+1;         c++;
       temp=a[i];     c++;
       a[i]=a[j];     c++;
       a[j]=temp;     c++;
       }
    }
    temp=a[i+1];     c++;
    a[i+1]=a[r];     c++;
    a[r]=temp;       c++;
    return i+1;
    }

      void quicksort(int a[],int p,int r)
      {
      if(p<r)
      {
       int q=partition(a,p,r);
       quicksort(a,p,q-1);
       quicksort(a,q+1,r);
       }
    }



      void main()

	{
	  void inputarray(int a[],int n);
	  void outputarray(int a[],int n);
	  int partition(int a[],int p,int r);
	     int n,a[100];
	     clrscr();
    printf("Enter the size of Array\n");
    scanf("%d",&n);


    printf("Enter the Elements\n");
    inputarray(a,n);

    printf("Array before Sorting\n");
    outputarray(a,n);
    quicksort(a,0,n-1);
    printf("Array after Sorting\n");
    outputarray(a,n);
    printf("count = %d",c);

    getch();
}







