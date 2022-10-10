#include <lpc214x.h>
int main(void){
	unsigned long int c = 0xFF0000;
	IO0DIR = c;
	IO0SET = c;
	while(1){
		c = IO1PIN;
		IO0PIN = c;
	}
}