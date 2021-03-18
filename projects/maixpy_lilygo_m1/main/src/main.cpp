#include "maixpy.h"
#include "fpioa.h"
#include "gpio.h"

void * __dso_handle = 0 ;

int main()
{
    fpioa_set_function(8, FUNC_GPIO0);
    gpio_init();
    gpio_set_drive_mode(0, GPIO_DM_OUTPUT);
    gpio_set_pin(0, GPIO_PV_LOW);

    maixpy_main();
    return 0;
}
