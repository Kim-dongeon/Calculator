#include <stdio.h>
#include "defaultCal.h"

int main()
{
  char mode=0;

  mode = mode_select();

  while(1)
  {
    if(mode == '0')
    {
	printf("Current Mode : Manual\n");
    }else if(mode == '1')
    {
	printf("Current Mode : Default\n");
	execution_defaultCal();
    }else if(mode == '2')
    {
	printf("Current Mode : Engineering\n");
    }else if(mode == '3')
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
