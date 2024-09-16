//write a prog that creates a chain of processes where each child creates another child.The chain should be of length 3,and each process should print its PID and the PID of its parent.
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
pid_t pid;
printf("Original parent and PID %d\n",getpid());
for(int i=0;i<3;i++){
pid=fork();
if(pid==0){
printf("Child %d\n",i+1);
printf("My PID is %d\n",getpid());
printf("My parent PID is %d\n",getppid());
}
else{
wait(NULL);
break;
}
}
return 0;
}
