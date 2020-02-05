#include <stdio.h>
#include <wiringPi.h>
#include <wiringSerial.h> 

using namespace std;
int pin = 14;
int fd;
int main() {
    if((fd = serialOpen("/dev/ttyS0", 9600)) < 0) {
        fprintf(stdout,"Unable to open the thing");
        return 0;
    }
    while(1) {
        serialPutchar(fd,0);
        serialPutchar(fd,1);
    }
    return 0;
}
