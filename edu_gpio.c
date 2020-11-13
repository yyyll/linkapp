#include "ulog/ulog.h"
#include "aos/kernel.h"
#include "aos/hal/gpio.h"

#include "edu_gpio.h"

#define PIN_LED_RED 17

gpio_dev_t led_red = 
{
    .port = PIN_LED_RED,
    .config = OUTPUT_PUSH_PULL,
};

// io 初始化
void edu_gpio_init(void)
{
    hal_gpio_init(&led_red);
}

// 点亮红色LED
void edu_red_led_on(void)
{
    //todo
    hal_gpio_output_low(&led_red);
}

// 熄灭红色LED
void edu_red_led_off(void)
{
    //todo
    hal_gpio_output_high(&led_red);
}
// 反转红色LED
void edu_red_led_toggle(void)
{
    //todo
    hal_gpio_output_toggle(&led_red);
}
// LED测试
void edu_led_test(void)
{
    edu_red_led_toggle();
    aos_post_delayed_action(1000, edu_led_test, NULL);
}

