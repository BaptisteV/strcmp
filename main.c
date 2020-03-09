#include <stdio.h>

#define TRUE 1
#define FALSE 0

int str_len(char *str)
{
      int i = 0;
      while (str[i] != '\0')
      {
            i++;
      }
      return i;
}

int str_cmp(char *s1, char *s2)
{
      if (str_len(s1) != str_len(s2))
      {
            return FALSE;
      }

      int i;
      for (i = 0; i < str_len(s1); i++)
      {
            if (s1[i] != s2[i])
            {
                  return FALSE;
            }
      }

      return TRUE;
}

int main(int argc, const char *argv[])
{
      char s1[21] = "This is first string";
      char s2[21] = "This is first string";

      printf("%s %d\n", s1, str_len(s1));

      if (str_cmp(s1, s2))
      {
            printf("Both strings are equal\n");
      }
      else
      {
            printf("Strings are not equal\n");
      }
}
