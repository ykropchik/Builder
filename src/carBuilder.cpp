//
// Created by YKROPCHIK on 28.05.2020.
//
#include "carBuilder.h"

CarBuilder::CarBuilder() {
    bodyColor = BODY_COLOR::ORANGE;
    wheelsType = WHEELS_TYPE::SPOKE;
    wheelsColor = WHEELS_COLOR::SILVER;
    brakesType = BRAKES_TYPE::IRON;
    calipersColor = CALIPERS_COLOR::ORANGE_BLACK_LOGO;
    tyres = TYRES::ZERO;
    interior = INTERIOR::LUXURY_JET_BLACK;
    frontRearParkingSensor = false;
    rearCamera = false;
    volumetricAlarm = false;
    vehicleTrackingSystem = false;
}

void CarBuilder::setBodyColor(BODY_COLOR bodyColor) {
    CarBuilder::bodyColor = bodyColor;
}

void CarBuilder::setWheelsType(WHEELS_TYPE wheelsType) {
    CarBuilder::wheelsType = wheelsType;
}

void CarBuilder::setWheelsColor(WHEELS_COLOR wheelsColor) {
    CarBuilder::wheelsColor = wheelsColor;
}

void CarBuilder::setBrakesType(BRAKES_TYPE brakesType) {
    CarBuilder::brakesType = brakesType;
}

void CarBuilder::setCalipersColor(CALIPERS_COLOR calipersColor) {
    CarBuilder::calipersColor = calipersColor;
}

void CarBuilder::setTyres(TYRES tyres) {
    CarBuilder::tyres = tyres;
}

void CarBuilder::setInterior(INTERIOR interior) {
    CarBuilder::interior = interior;
}

void CarBuilder::setFrontRearParkingSensor(bool frontRearParkingSensor) {
    CarBuilder::frontRearParkingSensor = frontRearParkingSensor;
}

void CarBuilder::setRearCamera(bool rearCamera) {
    CarBuilder::rearCamera = rearCamera;
}

void CarBuilder::setVolumetricAlarm(bool volumetricAlarm) {
    CarBuilder::volumetricAlarm = volumetricAlarm;
}

void CarBuilder::setVehicleTrackingSystem(bool vehicleTrackingSystem) {
    CarBuilder::vehicleTrackingSystem = vehicleTrackingSystem;
}

Order *CarBuilder::makeOrder() {
    return new Order(bodyColor, wheelsType, wheelsColor, brakesType, calipersColor, tyres, interior,
                     frontRearParkingSensor, rearCamera, volumetricAlarm, vehicleTrackingSystem);
}
