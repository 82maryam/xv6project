//اینجاد یک فایل برای این که تست کنیم سیستم کال ما درست کار می کنه 
#include "kernel/types.h"
#include "user/user.h"

int main(void)
{
    printf("trigger_test running!\n");
   //تابع ترگیر فراخوانی می کنیم
    trigger();
    exit(0);
}
