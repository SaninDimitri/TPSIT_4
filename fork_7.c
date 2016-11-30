#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<wait.h>
#include<stdlib.h>

main(){

    int n,i;
    pid_t pid;

    do{
        printf("Inserisci il numero di processi da creare\n");
        scanf("%d",&n);
    }while((n<1)||(n>3));

    for(i=0;i<n;i++){
       pid=fork();
        if(pid==0){
            sleep(1);
            printf("Pid figlio :%d ||Pid padre :%d \n",getpid(),getppid());

        }
    }
    exit(0);
}
