// Fulgence Muhirwa | Patrick Nsengumuremyi | Herve Musangwa
 
 
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
 
 
pthread_mutex_t mutex;
int numberOfPizza=0;
int maxNumberOfPizza;
 
// Producing the pizza
void*chiefFunc(void*arg)
{
 int pthread_mutex_lock(pthread_mutex_t*mutex);
 
 while (numberOfPizza<=maxNumberOfPizza)
 {
   numberOfPizza= numberOfPizza+1;
 
   if(numberOfPizza==maxNumberOfPizza)
   {
     printf("Please. Chef stop producing because tray is full\n Clients, you may eat please\n\n");
   }
   else{
      printf("the chef is adding PIZZA. The current number of Pizza is: %d\n", numberOfPizza);
 
   }
 
   sleep(2);
 }
 return NULL;
 
 int pthread_mutex_unlock(pthread_mutex_t*mutex);
}
 
 
// function clients conusmption
void*clientFunc(void*arg)
 {
 int pthread_mutex_lock(pthread_mutex_t*mutex);
 while (numberOfPizza>0)
 {
   numberOfPizza= numberOfPizza-1;
    printf("the client eat one pizza then The current number of Pizza is: %d\n", numberOfPizza);
 
    if(numberOfPizza==0)
    {
      printf(" clients, stop eating, tray is empty\n please chef you should add more pizza\n\n");
    }
    
  
   sleep(2);
 }
 return NULL;
 int pthread_mutex_unlock(pthread_mutex_t*mutex);
}
 
 
// main function
int main()
{
pthread_t client, chef;
 
printf("What is the maximum number of Pizza that your tray can contain? ");
scanf("%d", &maxNumberOfPizza);
if(maxNumberOfPizza<0)
{
  printf("The number of is not allowed\n");
}
while(1)
{
 
pthread_create(&chef,NULL, chiefFunc, NULL);
pthread_create(&client,NULL, clientFunc, NULL);
 
pthread_join(client,NULL);
pthread_join(chef, NULL);
}
 
 
return(0);
}
