#include <stdio.h>
#include <string.h>
# define LINE 256
# define WORD 30

int getLine(char s[]);
int getLine(char s[]);
int similar(char *s, char *t,int n);
int substring( char * str1, char * str2);
void print_similar_words(char *str);
void print_lines(char * str);

int main()
{
  char *input, 
  char method;
  scanf("%s %c",&input,&method);
  if(method == 'a')
    print_lines(char * str); 
  if (method == 'b')
    print_similar_words(input);
  
  
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
 int s_size = strlen(s);
	int t_size = strlen(t);
	int ch = 0;
	int s_index = 0;
	int t_index = 0;
	if (s_size - t_size > n || s_size - t_size < 0) {
		return 0;
	}
	while (*(t+t_index) != 0) 
	{
		if (*(s+s_index) != *(t+t_index))
		{
		    ch++;
			s_index++;
			if (ch > n) 
				return 0;
		}
		else
		{
			s_index++;
			t_index++;
		}
	}
	return 1;
    
}


void print_similar_words(char *str)
{
//char *str_local = { '\0' };
  char *ch = str;
  char temp[WORD] = { '\0' };
  char position = 1;

  char line[LINE];
  char *ln = line;

  while (fgets (ln, LINE, stdin) != NULL)
    {
      //printf (" %s", line);

      while (*ln != '\0' && position > 0 && *ln != '\n')
	{
	  position = getword (ln);

	  strncpy (temp, ln, position);
	  if (similar (temp, ch, 1) == 1)
	    {
	      printf (temp);
	      printf ("\n");
	    }


	  ln = (ln + position + 1);

	  for (int i = 0; *(temp+i) != '\0'; i++)
	    {

	      *(temp + i) = '\0';
	    }


	}
	ln = line;
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

void print_lines(char * str)
{



}
