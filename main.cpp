// main.cpp
#include <iostream>
#include "SmartCar.h"

int main() {
    SmartCar car;

    int input;
    std::cout << "请输入障碍物状态 (1: 前方, 2: 左前方, 3: 右前方, 0: 退出): " << std::endl;

    while (true) {
        std::cin >> input;

        if (input == 0) {
            break;  // 退出程序
        } else if (input == 1) {
            car.detectObstacle("前方");
        } else if (input == 2) {
            car.detectObstacle("左前方");
        } else if (input == 3) {
            car.detectObstacle("右前方");
        } else {
            std::cout << "无效输入，请重新输入。" << std::endl;
        }
    }

    return 0;
}