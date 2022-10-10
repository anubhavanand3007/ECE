#include <lpc214x.h>
int main(void){
	unsigned long int c = 0xFF0000;
	IO0DIR = c;
	IO0SET = c;
	while(1){
		c = IO1PIN;
		if(c == 0xffFE0000){
			IO0PIN = c;
		}else if(c == 0xffFD0000){
			IO0PIN = 0XFC0000;
		}else if(c == 0xffFB0000){
			IO0PIN = 0XF00000;
		}else if(c == 0xfff70000){
			IO0PIN = 0X00;
		}else{
			IO0PIN = 0XFF0000;
		}
	}
}