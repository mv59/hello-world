#include "Arduino.h"
//The setup function is called once at startup of the sketch
void setup()
{
// Add your initialization code here
}

// The loop function is called in an endless loop
void loop()
{
//Add your repeated code here
	// do stuff here
	// Todo
	for (int i = 0; i < 10; i++) {
		Serial.print("line: ");
		Serial.println(i);
	}

}
