#include <stdio.h>
# define 256 LINE 

int getline(char);

int main(){

}

int getline(char s[])
{
    int length=0;
    char c = ' ';
    s= {0};
    while ((c= getchar()!='\0') && length<=line)
    {
        length++;
      s+=c;
    }
   

}