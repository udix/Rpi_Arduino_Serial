
void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
	Serial.begin(9600);
    Serial.setTimeout(5000);
}

void loop()
{
	if (Serial.available())
    {
        String cadena = Serial.readStringUntil('\r');

        if (cadena == "ON") {
            digitalWrite(LED_BUILTIN, HIGH);
            Serial.println("Executed command: " + cadena);
        } else if (cadena == "OFF") {
            digitalWrite(LED_BUILTIN, LOW);
            Serial.println("Executed command: " + cadena);
        } else {
            Serial.println("Unknown command: " + cadena);
        }

    }
    
}
