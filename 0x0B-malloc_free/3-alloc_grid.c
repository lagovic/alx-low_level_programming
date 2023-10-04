#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to create grid
* @width: width input
* @height: height input
* Return: pointer to two dimensional array
*/
int **alloc_grid(int width, int height)
{
int **wih;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);

wih = malloc(sizeof(int *) * height);
if (wih == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
wih[x] = malloc(sizeof(int) * width);
if (wih[x] == NULL)
{
for (; x >= 0; x--)
free(wih[x]);
free(wih);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
wih[x][y] = 0;
}
return (wih);
}
