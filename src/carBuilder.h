//
// Created by YKROPCHIK on 28.05.2020.
//
#include "carOrder.h"

class CarBuilder {
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
    CarBuilder();
    void setBodyColor(BODY_COLOR bodyColor);
    void setWheelsType(WHEELS_TYPE wheelsType);
    void setWheelsColor(WHEELS_COLOR wheelsColor);
    void setBrakesType(BRAKES_TYPE brakesType);
    void setCalipersColor(CALIPERS_COLOR calipersColor);
    void setTyres(TYRES tyres);
    void setInterior(INTERIOR interior);
    void setFrontRearParkingSensor(bool frontRearParkingSensor);
    void setRearCamera(bool rearCamera);
    void setVolumetricAlarm(bool volumetricAlarm);
    void setVehicleTrackingSystem(bool vehicleTrackingSystem);
    Order *makeOrder();
};