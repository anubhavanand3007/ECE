#include<lpc21xx.h>
#include <stdio.h>
void lcd_init(void);
void clr_disp(void);
void lcd_com(void);
void lcd_data(void);
void wr_cn(void);
void wr_dn(void);
void display(void);
void delay(unsigned int);
unsigned char temp,temp1;
unsigned int r,r1,com[]={0x30,0x30,0x20,0x28,0x0c,6,0x80};
unsigned char *ptr,disp[] = "WELCOME MANIPAL";
int main(){
	IO0DIR = 0XFC;
	lcd_init();
	delay(3200);
	clr_disp();
	delay(3200);
	ptr = disp;
	while(*ptr != '\0'){
		temp1 = *ptr;
		lcd_data();
		ptr ++;
	}
	while(1);
}
void lcd_init (void){
	temp = 0x30;
	wr_cn();
	delay(3200);
	temp = 0x30;
	wr_cn();
	delay(3200);
	temp = 0x30;
	wr_cn();
	delay(3200);
	temp = 0x20;
	wr_cn();
	delay(3200);
	temp = 0x28;
	lcd_com();
	delay(3200);
	temp1 = 0xC;
	lcd_com();
	delay(800);
	temp1 = 0x06;
	lcd_com();
	delay(800);
	temp1 = 0x80;
	lcd_com();
	delay(800);
}
void lcd_data(void){
	temp = temp1 & 0xf0;
	wr_dn();
	temp = temp1 & 0x0f;
	temp = temp << 4;
	wr_dn();
	delay(100);
}
void wr_dn(void){
	IO0CLR = 0XFC;
	IO0SET = temp;
	IO0SET = 0x4;
	IO0SET = 0x8;
	delay(10);
	IO0CLR = 0x8;
}
void lcd_com(void){
	temp = temp1 & 0xf0;
	wr_cn();
	temp = temp1 & 0x0f;
	temp = temp << 4;
	wr_cn();
	delay(500);
}
void wr_cn(void){
	IO0CLR = 0xFC;
	IO0SET = temp;
	IO0CLR = 0x4;
	IO0SET = 0x8;
	delay(10);
	IO0CLR = 0x8;
}
void clr_disp(void){
	temp1 = 0x01;
	lcd_com();
	delay(500);
}
void delay(unsigned int r1){
	for(r=0;r<r1;r++);
}