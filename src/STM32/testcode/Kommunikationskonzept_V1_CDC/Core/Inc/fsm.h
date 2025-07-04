/* ***************************************************************************************
 *  Project:    USB oscilloscope
 *  File:       fsm.h
 *
 *  Language:   C
 ************************************************************************************** */

#ifndef FSM_H_
#define FSM_H_

/* #INCLUDES */
#include "stm32f7xx.h"
#include "core_cm7.h"

/* #DEFINES */

/* TYPEDEFS */

/* Global events
 * - can be enqueued by external sources such as ISRs
 * 														*/
typedef enum{
	EV_FOO = 3U,
	EV_BAR = 4U,
	EV_RESET,
	EV_B1_PRESSED,
	EV_START_APP,
	EV_SAMPL_RUN_START,
	EV_DATA_TRANSMIT, // change to EV_SAMPLE_TRANSMIT
	EV_SAMPL_RECEIVED,
	EV_DATA_READY,
	EV_SAMPL_ACK_CONTINUE,
	EV_SAMPL_ACK_STOP,
	EV_XXX

	/* add events here */
} EVENTS;


/* FUNCTION PROTOTYPES */
void fsm_run();
void fsm_add_event(uint8_t in);


#endif /* FSM_H_ */
