#include "Cissoid.h"

double Cissoid::get_y(double x) const {
    double c = get_a();
    return sqrt(pow(x, 3) / (2*c - x));
}

double Cissoid::convert(int degree) {
    return 0.017 * degree;
}

double Cissoid::get_distance(int degree) const {
    double x = convert(degree);
    return 2 * get_a() * sin(x) * sin(x) / cos(x);
}

double Cissoid::get_area() const {
    return 3 * PI * get_a() * get_a();
}

double Cissoid::get_volume() const {
    return 2 * PI * PI * pow(get_a(), 3);
}

double Cissoid::get_asymptote() const {
    return 2 * get_a();
}
double Cissoid::get_parabola(double x) const{
    return -0.5*(pow(x,3)/pow(get_y(x),2)-x);
}


