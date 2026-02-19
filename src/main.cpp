/**
 * @file AnalogReadExample.ino
 * @author Ashish Kumar Yadav
 * @date 2026-02-20
 * @version 1.0
 *
 * @brief Reads analog input from pin A0 and prints the value to the Serial Monitor.
 *
 * @details
 * This program continuously reads the analog value from analog pin A0
 * and sends the converted digital value to the serial interface
 * every 500 milliseconds.
 *
 * The ADC resolution on standard Arduino boards is 10-bit,
 * resulting in values from 0 to 1023.
 *
 * @note
 * The input voltage on A0 must not exceed the board reference voltage.
 *
 * @warning
 * Exceeding the maximum rated voltage on A0 may permanently damage
 * the microcontroller.
 */

#include <Arduino.h>

/**
 * @brief Stores the analog value read from pin A0.
 */
int value = 0;

/**
 * @brief Arduino setup function.
 */
void setup()
{
    Serial.begin(9600);     ///< Start serial communication
    pinMode(A0, INPUT);     ///< Set analog pin as input
}

/**
 * @brief Arduino main loop function.
 */
void loop()
{
    value = analogRead(A0);     ///< Read analog value
    Serial.println(value);      ///< Print value
    delay(500);                 ///< Wait 500 milliseconds
}




