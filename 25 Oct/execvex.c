#include<stdio.h>
#include<unistd.h>

void main()
{
    //char *arglist[]={"test",NULL};
char *arglist[]={"ls","-l",NULL};
    int pid;

    pid=fork();

    if(pid>0)
    {

      while(1){
        printf("parent still runs \n");
        sleep(2);
     }
     
}
    else{
    //execv("./test",arglist);
   execv("/bin/ls",arglist);
}
}