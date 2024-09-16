//Write a prog which prints its PID and uses fork() system call to create a child process.After fork() system call,both parent and child porcesses print what kind of process they are and their PID.Also the parent process prints its child's PID and the child process prints its parent's PID.
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
pid_t pid=fork();
if(pid==0){
printf("I am child porcess\n");
printf("My PID is %d\n",getpid());
printf("My parent PID is %d\n",getppid());
}
else{
wait(NULL);
printf("I am parent porcess\n");
printf("My PID is %d\n",getpid());
printf("My child PID is %d\n",pid);
}
return 0;
}

