#include<stdio.h>
#include <unistd.h>
int main(){
    while(1){
        printf("Hi, from background process1\n");
        sleep(5);
    }
}