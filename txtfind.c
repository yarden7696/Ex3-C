#include <stdio.h>
# define LINE 256

//int getLine(char s[]);
shift_element(int* arr, int i);


int main(){

// char c [] = "my name yarden\n elon";
// int res= getLine(c);
// printf("%d",res);

int arr[7]={1,2,3,4,5,6,7};
shift_element((arr+2),3);
for(int i=0; i<7; i++)
{
  printf("%d\n", arr[i]);
}
return 0;
}




int getLine(char s[])
{
  int length=0;
  int i=0;
  while((s[i]!= '\0') && (s[i]!= '\n') && (i<LINE))
  {
    length++;
    i++;
  }
   return length;
}


