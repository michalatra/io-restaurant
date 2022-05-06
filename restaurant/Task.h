//
// Created by micha on 05.05.2022.
//

#ifndef RESTAURANT_TASK_H
#define RESTAURANT_TASK_H


#include <string>

class Task {
    int id;
    std::string description;
    bool isFinished;
    int employeeId;

public:
    void changeFinishState(bool state);

    const std::string &getDescription() const;

    void setDescription(const std::string &description);

    bool getIsFinished() const;

    void setIsFinished(bool isFinished);

    int getEmployeeId() const;

    void setEmployeeId(int employeeId);

    int getId() const;

    void setId(int id);
};


#endif //RESTAURANT_TASK_H
