// Observer.h
#include <string>
#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
    virtual void update(const std::string& obstacleStatus) = 0; // 接收障碍物状态的更新
};

#endif // OBSERVER_H