#include<lpc214x.h>

void main(){
		unsigned int a = 0x200;
		IO0DIR = a;
		IO0SET = a;
}
