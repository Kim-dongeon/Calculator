#include <stdio.h>

int  mode_select()
{
  char mode = 0;
  printf("Select Mode : 0.Manual 1.Default 2.Engineering 3.Programmer (q.Quit)\n");
  scanf("%c",&mode);

  return mode;
}
