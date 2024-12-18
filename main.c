/**
 ******************************************************************************
Connecting to LCD and sending data from stm32f103xb
Connections
DB0	PA0
DB1	PA1
DB2	PA2
DB3 PA3
DB4 PA4
DB5 PA5
DB6 PA6
DB7 PA7

PC13 RS
PC14 R/W
PC15 E 
 ******************************************************************************
 */

#include "stm32f103xb.h"



int main(void)
{
RCC->APB2ENR |=(1U<<);//Enable clock to PA
//Set Mode of LCD pins to output max speed 50Mhz
GPIOB->CRL |=(1U<<);
GPIOB->CRL |=(1U<<);
//Set CNF of LCD pins to Output push pull
GPIOB->CRL &=~(1U<<);
GPIOB->CRL &=~(1U<<);

while(1)
{

}
}


