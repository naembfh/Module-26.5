#include <stdio.h>
#include <string.h>
void uppercase_func(char ch[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (ch[i] % 2 == 0)
        {
            ch[i] = ch[i] - 32;
        }
    }
}
int main()
{
    char ch[1000];
    scanf("%s", ch);
    int length = strlen(ch);
    uppercase_func(ch, length);
    puts(ch);
}