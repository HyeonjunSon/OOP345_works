//
// Created by HyeonjunSon on 2024-09-29.
// Name: HyeonjunSon
// Email: hson15@myseneca.ca
// Student ID: 123526238
//

#ifndef SENECA_LOGGER_H
#define SENECA_LOGGER_H

#include <iostream>
#include "event.h"

namespace seneca {
    class Logger {
        Event* m_eventArr{};
        int m_numOfEvents{};
    public:
        Logger();
        ~Logger();
        Logger& operator=(Logger&& src);
        // disable copy operations
        Logger& operator=(Logger& src) = delete;
        Logger(Logger& src) = delete;
        void addEvent(const Event& event);
        Event* getEventArr() const;
        int getEventArrSize() const;
    };

    std::ostream& operator<<(std::ostream& os, const Logger& logger);
}

#endif //SENECA_LOGGER_H