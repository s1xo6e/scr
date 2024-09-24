// Chassis.h
#ifndef CHASSIS_H
#define CHASSIS_H

#include <iostream>
#include "Observer.h"

class Chassis : public Observer {
public:
    // 根据障碍物状态，执行不同的底盘操作
    void update(const std::string& obstacleStatus) override {
        if (obstacleStatus == "前方") {
            std::cout << "障碍物在前方，底盘执行后退..." << std::endl;
        } else if (obstacleStatus == "左前方") {
            std::cout << "障碍物在左前方，底盘执行右转..." << std::endl;
        } else if (obstacleStatus == "右前方") {
            std::cout << "障碍物在右前方，底盘执行左转..." << std::endl;
        }
    }
};

#endif // CHASSIS_H