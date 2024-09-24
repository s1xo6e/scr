// Lidar.h
#ifndef LIDAR_H
#define LIDAR_H

#include <vector>
#include <string>
#include "Observer.h"
#include <algorithm>

class Lidar {
private:
    std::vector<Observer*> observers;  // 存储订阅者
    std::string obstacleStatus;        // 当前的障碍物状态

public:
    // 添加观察者
    void addObserver(Observer* observer) {
        observers.push_back(observer);
    }

    // 移除观察者
    void removeObserver(Observer* observer) {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }

    // 更新障碍物状态并通知所有观察者
    void setObstacleStatus(const std::string& status) {
        obstacleStatus = status;
        notifyObservers();
    }

    // 通知所有观察者
    void notifyObservers() {
        for (Observer* observer : observers) {
            observer->update(obstacleStatus);
        }
    }
};

#endif // LIDAR_H