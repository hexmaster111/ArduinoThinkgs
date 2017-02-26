#include <Wire.h>

void setup(){
Wire.begin(4); // join i2c with address 4
// call requestEvent function when there's a request
Wire.onRequest(requestEvent);
}

void loop(){
delay(100);
}

void requestEvent() {
Wire.write(1);
//Wire.write(2);
}
