#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
    //Checking for errors
    if (argc!=2)
    {
        printf("You gave me %d arguements. I need 1 to continue\n", argc-1);
        return 1;
    }
  int k = atoi(argv[1]);
  if ( k > 26 )
  {
    k = k % 26;
  }
  if ( k < 0 )
  {
    printf("You gave me a negative number. Hence I'm exiting.\n");
    return 2;
  }
  if ( argc > 2 )
  {
    printf("Be cool\n");
    return 3;
  }
  //Asking for input
  printf("plaintext:  ");
  string p;
  p = GetString();
  int n;
  printf("ciphertext: ");
  for (int i = 0, n = strlen(p); i < n; i++)
  {
    int a = (int)p[i];
    int x = a + k;

    if(p[i] == ' ')
    {
      printf(" ");
      continue;
    }
    if((a >=65 && a <=90) && x > 90)
    {
      x = x - 26;
      printf("%c", (char)x);
      continue;
    }
    if(a >= 65 && a <= 90)
    {
      printf("%c", (char)x);
      continue;
    }
    if((a >= 97 && a<= 122) && x > 122)
    {
      x = x - 26;
      printf("%c", (char)x);
      continue;
    }
    if(a >=97 && a <= 122)
    {
      printf("%c", (char)x);
      continue;
    }
    else
    {
      printf("%c", p[i]);
      continue;
    }

  }
printf("\n");
}
