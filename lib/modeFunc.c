#include <stdio.h>

int  mode_select()
{
  int mode = 0;
  printf("Select Mode : 0.Manual 1.Default 2.Engineering 3.Programmer (q.Quit)\n");
  scanf("%d",&mode);

  return mode;
}
