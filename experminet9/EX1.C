#include <lpc21xx.h>
void delay(void);
int main(void){
unsigned long int c = 0xFF0000;
	IO0DIR = c;
	c = 0;
	VPBDIV = 2;
	T0MCR = (1<<0) | (1<<2);
	T0MR0 = 1000000;
	T0PR = 29;
	
	while(1){
	IO0SET = c;
	delay();
	c += 0x10000;
	IO0CLR = 0XFF0000;
	}
}
void delay(void){
	T0TCR = (1<<0);
	while(!(T0IR & (1<<0)));
	T0IR = (1<<0);
	T0TCR = (1<<1);
	}