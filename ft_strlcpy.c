
#include <stddef.h>
#include <bsd/string.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    int c;

    c = 0;
    if (size == 0)
        return (strlen(src));
    while (src[c] && size > 1)
    {
        dest[c] = src[c];
        c++;
        size--;   /* code */
    }
    dest[c] = '\0';
    return (strlen(src));
}

#include <stdio.h>

int main(void)
{
    char    arr[] = "hi42kay";
    char    arr1[7];
    char    arr2[7];
    printf("%d\n", strlcpy(arr1, arr, sizeof(arr1)));
    printf("%s\n", arr1);
    printf("%d\n", ft_strlcpy(arr1, arr, sizeof(arr1)));
    printf("%s\n", arr1);



}