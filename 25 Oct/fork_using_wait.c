#include "stdio.h"
#include "unistd.h"


void main()
{
      int rv,i;

      rv = fork();

      if(rv > 0 )
      {
           wait(NULL);
           printf("i am parent\n");
           //while(1);
      }
      else
      {
         for(i=0;i<10;i++){
                printf("I am child \n");
                sleep(2);
        }


      }


}