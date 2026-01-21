#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>
int main(){
    int arr[30],key1,key2,status;pid-t p1,p2;
    srand(time(NULL));
    printf("Array:");
    for(int i=0;i<30;i++) {
    arr[i]=rand() % 50+1;
    printf("%d",arr[i]);
    }
    printf("\n\n Enter key 1 and key 2: ");
    scanf("%d %d, &key 1, &key 2);
   //child 1
   p1=fork();
   if(p1==0){
   int found=0;
   int i=0;
   while(i<30){
   i=i+1;
   if(arr[i]==key 1){
   found=1;
   break;
   }}
   exit(found);
   }
   //parent waits for child 1
   waitpid(p1,&status,0);
   int res1=WEXITSTATUS(status);
   //child 2
   p2=fork();
   if(){int found=0;
   int i=0;
   while(i<30){
   i=i+1;
   if(arr[i]==key 2){
   found=1;
   break;
   }}
   exit(found);
   }
   //parent waits for child 2
   waitpid(p2,&status,0);
   int res2 = WEXITSTATUS(status);
  return 0;
}





