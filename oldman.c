#include <stdio.h>
#include <string.h>
#include <cs50.h>

int i = 1;
void printing(string a, string b);


int
main()
{

  string s1;
  string s2;

  if ( i == 1 )
  {
    s1 = "one";
    s2 = "thumb";
    printing(s1,s2);
  }
  if ( i == 2 )
  {
    s1 = "two";
    s2 = "shoe";
    printing(s1,s2);
  }
  if ( i == 3 )
  {
    s1 = "three";
    s2 = "tree";
    printing(s1,s2);
  }
  if ( i == 4 )
  {
    s1 = "four";
    s2 = "door";
     printing(s1,s2);
 }
  if ( i == 5 )
  {
    s1 = "five";
    s2 = "hive";
    printing(s1,s2);
  }

  if ( i == 6 )
  {
    s1 = "six";
    s2 = "sticks";
    printing(s1,s2);
  }
  if ( i == 7 )
  {
    s1 = "seven";
    s2 = "heaven";
    printing(s1,s2);
  }
  if ( i == 8 )
  {
    s1 = "eight";
    s2 = "gate";
    printing(s1,s2);
  }
  if ( i == 9 )
  {
    s1 = "nine";
    s2 = "spine";
    printing(s1,s2);
  }
  if ( i == 10 )
  {
    s1 = "ten";
    s2 = "again";
    printing(s1,s2);
  }

}

void
printing(string a, string b)
{
    printf("This old man, he played %s\n", a);
    printf("He played knick-knack on my %s\n", b);
    printf("Knick-knack paddywhack, give a dog a bone\n");
    printf("This old man came rolling home\n");
    printf("\n");
    i++;
}




