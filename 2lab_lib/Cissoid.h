#include <iostream>
#include <cmath>

#ifndef INC_2LAB_CISSOID_H
#define INC_2LAB_CISSOID_H
#define PI 3.14159265

class Cissoid {
private:
    double a;//Радиус вспомогательной окружности
public:
     [[nodiscard]] double get_a() const {
        return a;
    }

    void set(double b) {
        a=b;
    }

    Cissoid() {
        this->a = 0;
    }

    explicit Cissoid(double c) {
        this->a=c;
    }

    Cissoid(Cissoid &cissoid) {
        this->a = cissoid.get_a();
    }

    ~Cissoid() = default;

    double get_y(double x) const;

    static double convert(int degree);

    double get_distance(int degree) const;

    double get_area() const;

    double get_volume() const;
    double get_asymptote() const;
    double get_parabola(double x) const;
};


#endif //INC_2LAB_CISSOID_H
