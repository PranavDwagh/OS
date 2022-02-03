#include "stdio.h"
#include "pthread.h"
#include "unistd.h"
void editor()
{
        int x=0;
        while(x++<10)
        {
                printf("editor code... \n");
                sleep(1);
        }
}

void spellchecker()
{
        int x=0;
        while(x++<10)
        {
                printf("spellchecker code...\n");
                sleep(1);
}


void main()
{
        pthread_t  editthread,spchkthread;

        //attach the path of execution to both the threads
        pthread_create(&editthread,NULL,(void *)editor,NULL);
        pthread_create(&spchkthread,NULL,(void *)spellchecker,NULL);

      //  printf("main waits for editor thread to complete");
        pthread_join(editthread,NULL);
        printf("main ends");
/*
        while(1){
                printf("main thread \n");
                sleep(1);
        }
*/
}