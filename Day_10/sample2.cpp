#include <iostream>
#include <string>

enum State { IDLE, EXPLORING, CHARGING };

class Robot {
private:
    State currentState;
    int batteryLevel;

public:
    Robot() : currentState(IDLE), batteryLevel(100) {}

    void update(bool obstacleDetected) {
        std::cout << "\n--- Robot Status ---" << std::endl;
        std::cout << "Battery: " << batteryLevel << "%" << std::endl;

        switch (currentState) {
            case IDLE:
                std::cout << "Current State: IDLE" << std::endl;
                if (batteryLevel > 20) {
                    currentState = EXPLORING;
                    std::cout << "Action: Battery is good. Transitioning to EXPLORING." << std::endl;
                } else {
                    currentState = CHARGING;
                    std::cout << "Action: Battery is low! Transitioning to CHARGING." << std::endl;
                }
                break;

            case EXPLORING:
                std::cout << "Current State: EXPLORING" << std::endl;
                batteryLevel -= 15; 

                if (batteryLevel <= 20) {
                    currentState = CHARGING;
                    std::cout << "Action: Battery critically low! Heading to charging dock." << std::endl;
                } else if (obstacleDetected) {
                    std::cout << "Action: Obstacle detected! Changing route direction." << std::endl;
                } else {
                    std::cout << "Action: Navigating room smoothly." << std::endl;
                }
                break;

            case CHARGING:
                std::cout << "Current State: CHARGING" << std::endl;
                batteryLevel += 40; 

                if (batteryLevel >= 100) {
                    batteryLevel = 100;
                    currentState = IDLE;
                    std::cout << "Action: Fully charged! Transitioning to IDLE." << std::endl;
                } else {
                    std::cout << "Action: Still charging..." << std::endl;
                }
                break;
        }
    }
};

int main() {
    Robot myRobot;
    
    myRobot.update(false); 
    myRobot.update(false); 
    myRobot.update(true);  
    myRobot.update(false); 
    myRobot.update(false); 
    myRobot.update(false); 
    myRobot.update(false); 
    myRobot.update(false); 
    myRobot.update(false); 
    myRobot.update(false); 
    
    return 0;
}
