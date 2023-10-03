#include <stdio.h>
#include <unistd.h>
int main(){
    printf("soy el proceso padre\n");
    int pid=fork();
    if(pid==0){
        printf("\nsoy proceso hijo\n");
    } else{
        printf("soy el proceso padre y mi hijo es: %d", pid);
    }
    return 0;
}