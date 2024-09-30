//
// Created by HyeonjunSon on 2024-09-29.
// Name: HyeonjunSon
// Email: hson15@myseneca.ca
// Student ID: 123526238
//

#ifndef SENECA_TIMEMONITOR_H
#define SENECA_TIMEMONITOR_H

#include <iostream>
#include <chrono>
#include "event.h"

namespace seneca {
    class TimeMonitor {
        std::string m_name{};
        std::chrono::time_point<std::chrono::steady_clock> m_startTime;
    public:
        void startEvent(const char* name);
        Event stopEvent();
    };
}

#endif //SENECA_TIMEMONITOR_H