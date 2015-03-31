#include "include/power_class.h"
#include "include/powerm.h"
#include <linux/kernel.h>

static void activate(void)
{
    printk(KERN_INFO POWER_TAG": Activated power class 1\n");
}

const struct power_class_ops *POWER_OPS_1 = &((struct power_class_ops){ activate });