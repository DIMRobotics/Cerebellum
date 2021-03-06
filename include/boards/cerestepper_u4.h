#ifndef ANTARES_LIB_CONTRIB_CEREBELLUM_BOARD_CERESTEPER_U4_H
#define ANTARES_LIB_CONTRIB_CEREBELLUM_BOARD_CERESTEPER_U4_H


#define CEREBELLUM_BOARD CereStepper-U4

/**
 * 0. Board features
 */

#define CEREBELLUM_BOARD_SUPPORT_LEDS 1
#define CEREBELLUM_BOARD_SUPPORT_DCM 1
#define CEREBELLUM_BOARD_SUPPORT_STEPPER 1

/**
 * I. LEDs definition
 */

#define CONFIG_LIB_CEREBELLUM_LEDS_1 GPB0

/**
 * II. Stepper definition
 */

#define CEREBELLUM_BOARD_STEPPER_NUM 3

#define CONFIG_LIB_CEREBELLUM_STEPPER_NUM 3
#define CONFIG_LIB_CEREBELLUM_STEPPER_ENABLE GPF6

#define CONFIG_LIB_CEREBELLUM_STEPPER_STEP_1 GPC7
#define CONFIG_LIB_CEREBELLUM_STEPPER_DIR_1 GPF5
//#define CONFIG_LIB_CEREBELLUM_STEPPER_DIR_INV_1 y

#define CONFIG_LIB_CEREBELLUM_STEPPER_STEP_2 GPD5
#define CONFIG_LIB_CEREBELLUM_STEPPER_DIR_2 GPF4
#define CONFIG_LIB_CEREBELLUM_STEPPER_DIR_INV_2 y

#define CONFIG_LIB_CEREBELLUM_STEPPER_STEP_3 GPF7
#define CONFIG_LIB_CEREBELLUM_STEPPER_DIR_3 GPF1
#define CONFIG_LIB_CEREBELLUM_STEPPER_DIR_INV_3 y

#define CONFIG_LIB_CEREBELLUM_STEPPER_RESOL_1 3200
#define CONFIG_LIB_CEREBELLUM_STEPPER_RESOL_2 3200
#define CONFIG_LIB_CEREBELLUM_STEPPER_RESOL_3 3200

/*
#define CEREBELLUM_BOARD_STEPPER_HAS_ENABLE_1 1
#define CEREBELLUM_BOARD_STEPPER_STEP_PORT_1 PORTF
#define CEREBELLUM_BOARD_STEPPER_STEP_PIN_1 6
#define CEREBELLUM_BOARD_STEPPER_DIR_PORT_1 PORTC
#define CEREBELLUM_BOARD_STEPPER_DIR_PIN_1 7
#define CEREBELLUM_BOARD_STEPPER_ENABLE_PORT_1 PORTF
#define CEREBELLUM_BOARD_STEPPER_ENABLE_PIN_1 7

#define CEREBELLUM_BOARD_STEPPER_HAS_ENABLE_2 0
#define CEREBELLUM_BOARD_STEPPER_STEP_PORT_2 PORTF
#define CEREBELLUM_BOARD_STEPPER_STEP_PIN_2 0
#define CEREBELLUM_BOARD_STEPPER_DIR_PORT_2 PORTF
#define CEREBELLUM_BOARD_STEPPER_DIR_PIN_2 1

#define CEREBELLUM_BOARD_STEPPER_HAS_ENABLE_3 0
#define CEREBELLUM_BOARD_STEPPER_STEP_PORT_3 PORTB
#define CEREBELLUM_BOARD_STEPPER_STEP_PIN_3 6
#define CEREBELLUM_BOARD_STEPPER_DIR_PORT_3 PORTC
#define CEREBELLUM_BOARD_STEPPER_DIR_PIN_3 6
*/
#endif
