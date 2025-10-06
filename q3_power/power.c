/*
 * Day 1 Exercise 3: Power Calculator
 *
 * TODO: Implement a program that calculates power (P = V * I)
 * and checks if it's within the maximum limit (5.0W).
 *
 * Compile with: gcc -Wall -Wextra -std=c99 -o power power.c
 * Run with: ./power
 */

#include <stdio.h>
#include "power.h"

/**
 * Calculates power consumption: P = V * I
 * @param voltage Voltage in volts
 * @param current Current in amps
 * @return Calculated power in watts
 */
float calculate_power(float voltage, float current) {
   return voltage * current;
}
    // TODO: Implement power calculation
   

/**
 * Checks if power is within safe limit (5.0W)
 * @param power Power in watts
 * @return 1 if valid (<=5.0W), 0 if invalid
 */
int is_valid_power(float power) {
	if (power <= 5.0f) {
       		return 1;
   	} else {
        	return 0;
    	}
    // TODO: Implement power validation logic
    return 0;  // Placeholder
}

#ifndef UNIT_TEST
int main(void) {
    float voltage, current, power;
    float max_power = 5.0f;

    printf("Power Calculator for Chip Validation\n");
    printf("Maximum allowed power: %.1fW\n", max_power);
    
    printf("Enter value of voltage: ");
    scanf("%f", &voltage);
    printf("Enter value of current: ");
    scanf("%f", &current);
    
    power = calculate_power(voltage, current);

    // Display result
    printf("Calculated power: %.1fW\n", power);

    // Validate power
    if (is_valid_power(power)) {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
        printf("Excess Power\n");
    }


    // TODO: Read voltage and current, calculate power, and validate
    // Read voltage and current, calculate power, and validate

    return 0;
}
#endif

