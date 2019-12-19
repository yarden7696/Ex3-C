#include <stdio.h>
#include <string.h>
# define LINE 256
# define WORD 30

int getLine(char s[]);
int getLine(char s[]);
int similar(char *s, char *t,int n);
int substring( char * str1, char * str2);
void print_similar_words(char *str);

int main()
{
  char s2 []="cat";
  char s1 []="ccas";
  int res= substring( s1, s2);
  printf("%d",res);
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


int getword(char w[])
{
  int count = 0;
  for(int i = 0;w[i]!=' ' && w[i] != '\0' && w[i] != '\n'&& w[i] != '\t' && i<30;i++)
  {
    count++;
  }
    return count;
}

/*
* *s - the complet sting
  *t - the string to be checked
  n - char can be in word
*/

int similar(char *s, char *t,int n)
{
/// s can be modifaied
 int _n = n;
 int s_index = 0, t_index = 0;

    if(n == 0)
    {
        while ( *(s+s_index) != '\0' && *(t+t_index) != '\0' )
        {

          if( *(s+s_index) != *(t+t_index) )
          {
            return 0;
          }
          t_index++;
          s_index++;

        }
             return 1;

    }
  
  while ( *(s+s_index) != '\0' && *(t+t_index) != '\0' )
  {

      if( *(s+s_index) != *(t+t_index) )
      {

        if (n >= 0)
        {
          n--;
         t_index--;
          
        }
        else
        {
          break;
        }
        

      }
      t_index++;
      s_index++;

  }
 
if (_n==0)
{
  return 1;
}

  return 0;
}


void print_similar_words(char *str)
{
  char *str_local = str;
  char ch[WORD] = {'\0'};
  char temp[WORD] = {'\0'};
  int position = 1; 

  fgets(ch, sizeof(ch), stdin);
while (*str_local != '\0' && position > 0)
{
  position = getword(str_local);

  strncpy(temp,str_local,position);
  if(similar(temp,ch,1) == 1)
  {
    printf(temp);
    printf("\n");
  }
     

  str_local = str_local + position+1; 
  
  for (int i = 0; *(temp + i) == '\0'  ; i++)
  {
    
    *(temp+i) ='\0';
  }
  

}

  
}

// Checks whether str2 is contained in str1 as it is
int substring( char * str1, char * str2)
{
  int length1= getword(str1);
  int length2= getword(str2);
  int i,j;
  int size= length1-length2;
  char subCheck [length2];
  for(i=0; i<=size; i++)
  {
     for(j=0; j<length2 ; j++)
     {
      subCheck[j]=str1[j];   
     }
     if(similar(subCheck,str2,0)==1) {return 1;}
     else{return 0;}
  }
}
