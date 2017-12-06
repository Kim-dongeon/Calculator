#include <stdio.h>

char  mode_select()
{
  char mode = 0;
  char temp=0;
  printf("=======================================================================\n");
  printf("Select Mode : 0.Manual 1.Default 2.Engineering 3.Programmer 4.converter(q.Quit)\n");
  printf(":");
  scanf("%c",&mode);
  temp = getchar();
  return mode;
}
