#include<stdio.h>


void quick(int arr[],int s,int e)

{ if(s>=e){

  return;

   }

  int i=s-1;

  int j=s;

  int pivot=e;

 

  while(j<pivot)

  {

if(arr[j]<arr[pivot])

{i++;

int temp=arr[i];

arr[i]=arr[j];

arr[j]=temp;

}

j++;

  }

  i++;

  int temp1=arr[i];

  arr[i]=arr[pivot];

  arr[e]=temp1;

 

  quick(arr,s,i-1);

  quick(arr,i+1,e);

}


void main()

{int n;

printf("Enter the size of Array : ");

scanf("%d",&n);

int arr[n];

for(int i=0;i<n;i++){

if(i==0){

printf("Enter %dst element of Array : ",i+1);

}

else if(i==1){

printf("Enter %dnd element of Array : ",i+1);

}

else if(i==2){

printf("Enter %drd element of Array : ",i+1);

}

else{

printf("Enter %dth element of Array : ",i+1);

}

scanf("%d",&arr[i]);

}

quick(arr,0,n-1);


printf("Array Sorted In Ascending Order By Quick Sort: ");


for(int i=0;i<n;i++){

printf("%d\t",arr[i]);

}

}