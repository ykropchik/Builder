//
// Created by YKROPCHIK on 28.05.2020.
//
#include "carOption.h"

class Order {
private:
    BODY_COLOR bodyColor;
    WHEELS_TYPE wheelsType;
    WHEELS_COLOR wheelsColor;
    BRAKES_TYPE brakesType;
    CALIPERS_COLOR calipersColor;
    TYRES tyres;
    INTERIOR interior;
    bool frontRearParkingSensor;
    bool rearCamera;
    bool volumetricAlarm;
    bool vehicleTrackingSystem;

public:
    Order(BODY_COLOR bodyColor, WHEELS_TYPE wheelsType, WHEELS_COLOR wheelsColor, BRAKES_TYPE brakesType,
          CALIPERS_COLOR calipersColor, TYRES tyres, INTERIOR interior, bool frontRearParkingSensor, bool rearCamera,
          bool volumetricAlarm, bool vehicleTrackingSystem);
    void printOrder();
};
