#include <cs50.h>
#include <stdio.h>
void print(char c, int h);

int main(void)
{
    int h, i, j;
    do
    {
        h = get_int("Height: ");
    }
    while ((h < 1) || (h > 8));

    for (i = 0; i < h; i++)
    {
      print(' ', h - 1 - i);
      print('#', i + 1);
      print(' ', 2);
      print('#', i + 1);

      printf("\n");
    }
}

void print(char c, int h)
{
    for (int i = 0; i < h; i++)
    {
        printf("%c", c);
    }
}