#include"sleep.h"

#include <stdio.h>
#include <time.h>
 
time_t now, later;
 
void sleep(int delay)
{
 now=time(NULL);
 later=now+delay;
 while(now<=later)now=time(NULL);
}

