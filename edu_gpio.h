#ifndef __EDU_GPIO_H__
#define __EDU_GPIO_H__

// io 初始化
void edu_gpio_init(void);

// 点亮红色LED
void edu_red_led_on(void);
// 熄灭红色LED
void edu_red_led_off(void);
// 反转红色LED
void edu_red_led_toggle(void);
// LED测试
void edu_led_test(void);

#endif