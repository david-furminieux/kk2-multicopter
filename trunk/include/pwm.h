/*
 * pwm.h
 *
 * Created: 30.07.2012 12:38:11
 *  Author: OliverS
 */ 


#ifndef PWM_H_
#define PWM_H_

void pwmInit();
void pwmWrite(uint8_t channel, uint16_t value);


#endif /* PWM_H_ */