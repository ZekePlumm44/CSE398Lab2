#include <stdio.h>
#include <wiringPi.h>
#include <wiringSerial.h> 

using namespace std;
int stuff;
int fd;
int main() {
    if((fd = serialOpen("/dev/ttyS0", 9600)) < 0) {
        fprintf(stdout,"Unable to open the thing");
        return 0;
    }
    while(1) {
            cout>>serialGetchar(fd)>>endl;
            serialPutchar(fd,'z');
            sleep(1000);
    }
    serialClose(fd);
    return 0;
}
