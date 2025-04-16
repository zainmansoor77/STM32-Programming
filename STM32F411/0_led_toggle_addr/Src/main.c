//Where is the LED connected?
// Port: A
//Pin:   5

// get this information from the memory map section of the STM32F411 data sheet
#define PERIPH_BASE	  (0x40000000UL)

//AHB1 start address = 0x40020000.
//AHB1 = 0x40000000 + 0x00020000
//AHB1 = PERIPH_BASE + OFFSET
#define AHB1PERIPH_OFFSET   (0x00020000UL)
#define AHB1PERIPH_BASE   (PERIPH_BASE + AHB)PERIPH_OFFSET)

//GPIOA address = 0x40020000, GPIOA address = AHBPERIPH_BASE
#define GPIOA_OFFSET   (0x00000000UL)
#define GPIOA_BASE   (AHB1PERIPH_BASE + GPIOA_OFFSET)

// RCC is responsible for resetting and setting the clock
#define RCC_OFFSET   (0x00003800UL)
#define RCC_BASE   (AHB1PERIPH_BASE + RCC_OFFSET)

#define AHBEN_R_OFFSET   (0x30UL)
#define RCC_AHB1EN_R   (*(volatile unsigned int)(RCC_BASE + AHB1EN_R_OFFSET))

#define MODE_R_OFFSET   (0x00UL)
#define GPIOA_MODE_R   (*(volatile unsigned int)(GPIO_BASE + MODE_R_OFFSET))

#define OD_R_OFFSET   (0x14UL)
#define GPIOA_OD_R   (*(volatile unsigned int)(GPIOA_BASE + OD_R_OFFSET))

#define GPIOAEN   (1UL << 0)

#define PIN5   (1U<<5)
#define LED_PIN   PIN5

/*
 * (1U<<10) // set bit 10 to 1
 * &=~(1U<<11) // set bit 11 to 0
 */





