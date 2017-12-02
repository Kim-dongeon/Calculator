#include <stdio.h>
#include "defaultCal.h"
#include <string.h>

int main()
{
  int mode=0;


  while(1)
  {
    mode = mode_select();
    if(mode == 0)
    {
	printf("Current Mode : Manual\n");
    }else if(mode == 1)
    {
	printf("Current Mode : Default\n");
	while(getchar() !='\n');
	while(execution_defaultCal())
	{
	}
 	mode =-1;
    }else if(mode == 2)
    {
	printf("Current Mode : Engineering\n");
    }else if(mode == 3)
    {
	printf("Current Mode : Programmer\n");
    }else if(mode == 'q')
    {
	printf("Program exit\n");
	return 0;
    }
  }
  return 0;
}
