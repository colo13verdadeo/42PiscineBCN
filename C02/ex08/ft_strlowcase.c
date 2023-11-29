#include <unistd.h>
int ft_strlowcase(char *str)
{
  int i;
  int c;
  i = 0;
  while (str[i] != '\0')
  {
    //write(1, &str[i], 1);
    str[i] = str[i] + 32;
    i++;
  }
  return(str);
}

void showme( char *ar)
{
  int i;
  i = 0;
while (ar[i] != '\0')
  {
  write(1, &ar[i], 1);
  i++;
  }
  }

int main()
{
    char v1[] = "A";
    char v2[] = "B";
    char v3[] = "Z";
    char v4[] = "C";
    char v5[] = "J";
    int nmain;
    nmain = 4;
    ft_str_is_lowercase(v1);
    ft_str_is_lowercase(v2);
    ft_str_is_lowercase(v3);
    ft_str_is_lowercase(v4);
    ft_str_is_lowercase(v5);
    //showme(v1);
    //showme(v2);
}