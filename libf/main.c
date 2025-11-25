#include "libft.h"
int main()
{
     unsigned int	ft_substr_count(char const *s, char c);

    char *str = "morchid student in 1337 med";
    char **s = ft_split(str,' ');
    int cw = ft_substr_count(str,' ');
    int i = 0;
    while (i < cw)
    {
        printf("%s\n",s[i]);
        i++;
    }
    

}