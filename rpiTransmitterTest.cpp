#include <iostream>
#include <wiringPi.h>
#include <wiringSerial.h> 

using namespace std;
int pin = 7;
int main() {
    if((fd = serialOpen("/dev/ttyS0", 9600)) < 0) {
        fprintf(stdout,"Unable to open the thing");
        exit(1);
    }
    while(1) {
        digitalWrite(pin, 0);
        delay(500);
        digitalWrite(pin,1);
        delay(500);
    }
    return 0;
}