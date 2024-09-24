// SmartCar.h
#ifndef SMARTCAR_H
#define SMARTCAR_H

#include "Lidar.h"
#include "Chassis.h"

class SmartCar {
private:
    Lidar lidar;     // 激光雷达
    Chassis chassis; // 底盘

public:
    SmartCar() {
        // 底盘订阅激光雷达
        lidar.addObserver(&chassis);
    }

    // 检测到障碍物时，更新障碍物状态
    void detectObstacle(const std::string& status) {
        lidar.setObstacleStatus(status);
    }
};

#endif // SMARTCAR_H