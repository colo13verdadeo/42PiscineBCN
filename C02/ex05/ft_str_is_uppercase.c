#include <unistd.h>
int ft_str_is_lowercase(char *str)
{
  int i;
  i = 0;
  while (str[i] != '\0')
  {
    //write(1, &str[i], 1);
    if (!(str[i] >= 65 && str[i] < 91))
    {
    write(1, "0", 1);
    return (0);
    }
    i++;
  }
  write(1, "1", 1);
  return(1);
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
    char v2[] = "-123A";
    char v3[] = "0";
    char v4[] = "9";
    char v5[] = "z";
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