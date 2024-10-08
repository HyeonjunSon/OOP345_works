//
// Created by HyeonjunSon on 2024-09-29.
// Name: HyeonjunSon
// Email: hson15@myseneca.ca
// Student ID: 123526238
//

#ifndef SENECA_SETTINGS_H
#define SENECA_SETTINGS_H

#include <iostream>
#include <string>

namespace seneca {
    struct Settings {
        bool m_show_all = false;
        bool m_verbose = false;
        std::string m_time_units = "nanoseconds";
    };
    extern Settings g_settings;
}

#endif //SENECA_SETTINGS_H