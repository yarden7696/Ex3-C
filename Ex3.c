#include <stdio.h>
# define LINE 256
# define WORD 30

int similar(char *s, char *t,int n);

int main()
{
  char s[] = "swsystems";
  char t[] = "ssysems";
  int result = similar(s, t,2) ;
  printf(" %d",result);
}

int getword(char w[])
{
  int count = 0;
  for(int i = 0; w[i] != '\0' || w[i] != '\n'&& w[i] != '\t' && i<30;i++)
  {
    count++;
  }
    return count;
}


int similar(char *s, char *t,int n)
{
/// s can be modifaied
 int _n = n;
 int s_index = 0, t_index = 0;

  while ( *(s+s_index) != '\0' || *(t+t_index) != '\0')
  {

      if( *(s+s_index) != *(t+t_index) )
      {

        if (n >= 0)
        {
          _n--;
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
  
  
if (n==0)
{
  return 1;
}

  return 0;
}
