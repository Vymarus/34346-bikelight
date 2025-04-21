#ifndef ACCELEROMETER_H
#define ACCELEROMETER_H
#include <Arduino.h>
#include <MPU6050.h>
#include "Wire.h" // This library allows you to communicate with I2C devices.

class accelerometer
{
private:
    MPU6050 mpu;

public:
    accelerometer(/* args */);
    ~accelerometer();
    bool initialize();
    bool check_moving();
};

#endif // ACCELEROMETER_H