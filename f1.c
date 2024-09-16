//Write a prog that creates a child process and makes the child process print numbers from 1 to 10
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
pid_t pid;
pid=fork();
if(pid==0){
printf("I am child process\n");
for(int i=1;i<=10;i++)
printf("number:%d\n",i);
}
else{
wait(NULL);
printf("I am parent process\n");
}
return 0;
}
