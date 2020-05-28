//
// Created by YKROPCHIK on 28.05.2020.
//
#include "carOrder.h"
#include "iostream"

Order::Order(BODY_COLOR bodyColor, WHEELS_TYPE wheelsType, WHEELS_COLOR wheelsColor, BRAKES_TYPE brakesType,
             CALIPERS_COLOR calipersColor, TYRES tyres, INTERIOR interior, bool frontRearParkingSensor, bool rearCamera,
             bool volumetricAlarm, bool vehicleTrackingSystem) : bodyColor(bodyColor), wheelsType(wheelsType),
                                                                 wheelsColor(wheelsColor), brakesType(brakesType),
                                                                 calipersColor(calipersColor), tyres(tyres),
                                                                 interior(interior),
                                                                 frontRearParkingSensor(frontRearParkingSensor),
                                                                 rearCamera(rearCamera),
                                                                 volumetricAlarm(volumetricAlarm),
                                                                 vehicleTrackingSystem(vehicleTrackingSystem) {}

void Order::printOrder() {
    std::cout << "BODY COLOR : " << bodyColor << std::endl
              << "WHEELS TYPE : " << wheelsType << std::endl
              << "WHEELS COLOR : " << wheelsColor << std::endl
              << "BRAKES TYPE : " << brakesType << std::endl
              << "CALIPERS TYPE : " << calipersColor << std::endl
              << "TYRES : " << tyres << std::endl
              << "INTERIOR : " << interior << std::endl
              << "FRONT AND REAR PARKING SENSOR : " << frontRearParkingSensor << std::endl
              << "REAR CAMERA : " << rearCamera << std::endl
              << "VOLUMETRIC ALARM : " << volumetricAlarm << std::endl
              << "VEHICLE TRACKING SYSTEM : " << vehicleTrackingSystem << std::endl;
}
