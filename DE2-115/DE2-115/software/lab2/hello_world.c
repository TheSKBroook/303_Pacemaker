#include <system.h>
#include <altera_avalon_pio_regs.h>
#include <stdio.h>
#include <sys/alt_irq.h>
#include "cs303_lab2.h"   // Your generated SCCharts header


void button_interrupts_function(void*context, alt_u32 id) {
	int* flag = (int*) context;
    IOWR_ALTERA_AVALON_PIO_EDGE_CAP(KEYS_BASE, 0x0);

    *flag = 1;
}

int main(void) {
    TickData data;
    volatile int interrupt_flag = 0;
    void* temp = (void*) &interrupt_flag;


    IOWR_ALTERA_AVALON_PIO_IRQ_MASK(KEYS_BASE, 0x7);

    IOWR_ALTERA_AVALON_PIO_EDGE_CAP(KEYS_BASE, 0x0);

    alt_irq_register(KEYS_IRQ, temp, button_interrupts_function);

    // Initialize SCCharts
    reset(&data);

    while (1) {

        if ( interrupt_flag ) {

            // Read keys (active low)
            int keys = IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE);

            // Map keys to inputs
            data.A = (keys & 0x4) ? 0 : 1;  // KEY2
            data.B = (keys & 0x2) ? 0 : 1;  // KEY1
            data.R = (keys & 0x1) ? 0 : 1;  // KEY0

            interrupt_flag = 0;

            // Run SCCharts logic
            tick(&data);
        }

        // Drive output O to Red LEDs
        if (data.O) {
            IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x1);  // Turn on LED0
        } else {
            IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x0);  // Turn off LEDs
        }

    }

    return 0;
}
