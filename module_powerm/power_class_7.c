#include "include/power_class.h"
#include "include/powerm.h"
#include "include/powerm_control.h"
#include <linux/kernel.h>

static void activate(void)
{
    printk(KERN_INFO POWER_TAG": Activated power class 7\n");
    set_backlight_level(BRIGHTNESS_P7);
    set_max_cpu_freq(MAX_CPUFREQ_P7);
    set_max_gpu_power_level(MAX_GPU_LV_P7);
    set_gov_powersave_bias(PS_BIAS_MID);
}

static void update(void){
    printk(KERN_INFO POWER_TAG": Update power class 7\n");
    set_backlight_level(BRIGHTNESS_P7);
}

const struct power_class_ops *POWER_OPS_7 = &((struct power_class_ops){ activate,update });
