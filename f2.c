//Write a prog that creates 2 child process.Each child process should print its own PID and the PID of its parent.
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
pid_t pid1,pid2;
pid1=fork();
if(pid1==0){
printf("I am child1 and my PID is %d\n",getpid());
printf("My parent PID is %d\n",getppid());
}
else{
pid2=fork();
if(pid2==0){
printf("I am child2 and my PID is %d\n",getpid());
printf("My parent PID is %d\n",getppid());
}
else{
wait(NULL);
printf("I am main process and my PID is %d\n",getpid());
}
}
return 0;
}
