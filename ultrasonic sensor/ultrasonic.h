#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_
#include "gpio.h"


/*******************
 *                                Definitions                                  *
 *******************/

#define ULTRASONIC_TRIG_PORT     PORTB_ID
#define ULTRASONIC_TRIG_PIN      PIN5_ID

#define ULTRASONIC_ECHO_PORT     PORTB_ID
#define ULTRASONIC_ECHO_PIN   PIN6_ID



void Ultrasonic_init(void);


void Ultrasonic_Trigger(void);


uint16 Ultrasonic_readDistance(void);


void Ultrasonic_edgeProcessing(void);

#endif
