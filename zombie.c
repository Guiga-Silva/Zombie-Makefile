#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
        pid_t pid;

        printf("PAI - pid: %d\n", getpid());
        
        pid = fork();
     
        if (pid == 0)
        {
                printf("FILHO - pid: %d\n", getpid());  
                exit(0);
        }
        else if (pid == -1) {
                printf("ERRO!, nao foi possivel criar um processo filho!");
                exit(-1);
        }
        else
        {
                sleep(30);  
        }

        return 0;
}