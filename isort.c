#include <stdio.h>

shift_element(int* arr, int i)
{
  int* j;
for ( j = (arr+i);  j> arr ;j--)
   {
       *j = *(j-1);
    }  
}

void insertion_sort(int* arr, int len)
{

  int i, key, j; 
    for (i = 1; i < len; i++) { 
        key = *(arr+i); 
        j = i - 1; 
        while (j >= 0 && *(arr+j) > key) { 
            *(arr +j+1) = *(arr+j); 
            j = j - 1; 
        } 
        *(arr+j + 1) = key; 
    } 
}

int main() 
{ 
    int arr[50] ; 
    int n ; 
	
    printf("\n");
  
    for (int i = 0; i < numbers; i++)
    {
      
     scanf("%d",&arr[i]);

    }
	n = sizeof(arr) / sizeof(arr[0]);
  insertion_sort(arr, n); 

         for (int i = 0; i < numbers; i++)
    {
      
     printf("%d,",arr[i]);

    }
      
    return 0; 
}
