#include "hiker.h"
#include <stdio.h>
#include <stdbool.h>

#define HIGH_MIN 80
#define HIGH_MAX 110
#define LOW_MIN 50
#define LOW_MAX 80

// 범위 확인 함수 
bool isInRange(int value, int min, int max) {
    return value >= min && value <= max;
}

// 상한 조건 확인
bool checkHigh(int high) {
    return isInRange(high, HIGH_MIN, HIGH_MAX);
}

// 하한 조건 확인
bool checkLow(int low) {
    return isInRange(low, LOW_MIN, LOW_MAX);
}

// 차량 속도에 따른 상태 표시
const char* displayStatus(int high, int low, int speed) {
    if (speed > high) {
        return "red";
    } else if (speed > high * 0.9 && speed <= high) {
        return "yellow";
    } else if (speed >= low && speed <= high * 0.9) {
        return "green";
    } else if (speed < low) {
        return "gray";
    } else {
        return "err_msg";
    }
}