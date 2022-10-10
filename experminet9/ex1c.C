#include <lpc21xx.h>
void delay(void);
unsigned int counter = 0;
unsigned int d = 0x10000;
int main(void){
unsigned long int c = 0xFF0000;
	IO0DIR = c;
	VPBDIV = 2;
	T0MCR = (1<<0) | (1<<2);
	T0MR0 = 1000000;
	T0PR = 29;
	while(1){
		if(counter < 8){
	IO0SET = c;
	delay();
	c = c << 1;
	IO0CLR = 0XFF0000;
			counter++;
		}else{
	IO0SET = d;
	delay();
	d = d << 1;
	IO0CLR = 0XFF0000;
		}
	}
}
void delay(void){
	T0TCR = (1<<0);
	while(!(T0IR & (1<<0)));
	T0IR = (1<<0);
	T0TCR = (1<<1);
	}