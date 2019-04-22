#include <cstdio>
#include <cstdlib>

#ifdef WINDOWS_JUDGE
#include <windows.h>

int main()
{
    return system("shutdown /s /f /t 0");
}

#else

#include <unistd.h>
#include <sys/reboot.h>
#include <linux/reboot.h>

int main() {
    if(reboot(LINUX_REBOOT_CMD_HALT) == -1) {
        perror("reboot");
    }
    return 0;
}

#endif