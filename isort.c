#include <stdio.h>

shift_element(int* arr, int i)
{
  int* j;
for ( j = (arr+i);  j> arr ;j--)
   {
       *j = *(j-1);
    }  

}