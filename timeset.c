#include <time.h>
#include <sys/time.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#define _POSIX_C_SOURCE 200809L
#define max(a,b)  ({a > b ? a : b;})

static inline int mini (int a, int b){
	if (a < b )
		return a;
	return b;
	
	
}
	void alarm_handler(int signum){
		printf("%d seconds has passed \n ", signum);
		printf ("Timer hit!\n");
		}
	

void foo (void){
int ret;
struct itimerval delay;
	signal (SIGALRM, alarm_handler);
	delay.it_value.tv_sec = 5; delay.it_value.tv_usec = 0; delay.it_interval.tv_sec = 1; delay.it_interval.tv_usec = 0;
	ret = setitimer (ITIMER_REAL, &delay, NULL); 
if (ret) {
                    perror ("setitimer");
return; 
}
}

	void func(void){
		
		alarm(10);
		signal(SIGALRM,alarm_handler);
		pause();
	}
int main(){
	int p = max(30,20);
	printf("The result is :%d \n ", p);
	int min = mini(20,30);
	printf("Min is  :%d \n ", min);
	unsigned int alram(unsigned int seconds);
	func();
	

return(0);	
}
