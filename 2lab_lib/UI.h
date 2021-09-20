#ifndef INC_2LAB_UI_H
#define INC_2LAB_UI_H

#include <iostream>
#include "Cissoid.h"

class UI {
public:
    template<typename T>
    int static get_num(T &a) {

        while (!(std::cin >> a)) {
            if (!std::cin.eof()) return -1;
            std::cout << "Bad value!";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }
        return 1;
    }

    UI() {
        cissoid = new Cissoid();
    }

    ~UI() {
        delete cissoid;
    }

    Cissoid *cissoid;


    void get_y() const;

    void get_distance() const;

    void get_area() const;

    void get_volume() const;

    void get_asymptote() const;

    void get_parabola() const;
    static int dialog(const char *msgs[], int n);

};
void start();
#endif //INC_2LAB_UI_H
