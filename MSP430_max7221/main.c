#include <msp430.h> 

#define Displaytest_address 0x0F
#define Displaytest_data 0b00000000

#define Shutdown_address 0x0C
#define Shutdown_data 0b00000001

#define Scanlimit_address 0x0B
#define Scanlimit_data 0x07

#define Intensity_address 0x0A
#define Intensity_data 0x0F

#define Decodemode_address 0x09
#define Decodemode_data 0x00

#define Digit0 0x01
#define Digit1 0x02
#define Digit2 0x03
#define Digit3 0x04
#define Digit4 0x05
#define Digit5 0x06
#define Digit6 0x07
#define Digit7 0x08

void send (char address,char data){

    P1OUT &=~ 0b00000011; //CLK P1.0 and CS P1.1 has set logic low

    if(address & 0b10000000){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }
    if(address & 0b01000000){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }
    if(address & 0b00100000){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }
    if(address & 0b00010000){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }
    if(address & 0b00001000){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }
    if(address & 0b00000100){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }
    if(address & 0b00000010){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }
    if(address & 0b00000001){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }


    if(data & 0b10000000){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
        }

    if(data & 0b01000000){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
        }
    if(data & 0b00100000){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
        }
    if(data & 0b00010000){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
        }
    if(data & 0b00001000){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }
    if(data & 0b00000100){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }
    if(data & 0b00000010){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }
    if(data & 0b00000001){
        P1OUT |= 0b00000100; //DOUT logic high
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }else{
        P1OUT &=~ 0b00000100; //DOUT logic low
        P1OUT |= 0b00000001; //CLK logic high
        P1OUT &=~ 0b00000001; //CLK logic low
    }


        P1OUT |= 0b00000010;
}

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR |= 0X07;
	P1OUT |= 0b00000010; //CS pin logic high

    send(Displaytest_address,Displaytest_data);
    send(Scanlimit_address,Scanlimit_data);
    send(Intensity_address,Intensity_data);
    send(Shutdown_address,Shutdown_data);
    send(Decodemode_address,Decodemode_data);

	while(3){

	   send(Digit0, 0b01001111);  //E
	   send(Digit1, 0b00010101); //N
	   send(Digit2, 0b01101101); //2
	   send(Digit3, 0b01111110); //0
	   send(Digit4, 0b00110011); //4
	   send(Digit5, 0b00110000); //1
	   send(Digit6, 0b01011111); //6
	   send(Digit7, 0b01111001); //3
	   _delay_cycles(1000000);

	   send(Digit0, 0b00010101); //N
       send(Digit1, 0b01101101); //2
       send(Digit2, 0b01111110); //0
       send(Digit3, 0b00110011); //4
       send(Digit4, 0b00110000); //1
       send(Digit5, 0b01011111); //6
       send(Digit6, 0b01111001); //3
       send(Digit7, 0b01011111); //6
       _delay_cycles(1000000);

       send(Digit0, 0b01101101); //2
       send(Digit1, 0b01111110); //0
       send(Digit2, 0b00110011); //4
       send(Digit3, 0b00110000); //1
       send(Digit4, 0b01011111); //6
       send(Digit5, 0b01111001); //3
       send(Digit6, 0b01011111); //6
       send(Digit7, 0b01101101); //2
       _delay_cycles(1000000);

	}

	
	return 0;
}


