#include "UI.h"
void  UI::get_y() const {
    double x;
    double res;
    if (cissoid->get_a() < 0) {
        do {
            std::cout << "Enter x-->";
            get_num(x);
        } while (x <= 2 * cissoid->get_a() || x > 0);
    }
    if (cissoid->get_a() > 0) {
        do {
            std::cout << "Enter x-->";
            get_num(x);
        } while (x >= 2 * cissoid->get_a() || x < 0);
    }
    res = cissoid->get_y(x);
    std::cout << " y--->+-" << res << std::endl;

}

void  UI::get_distance() const {
    int degree;
    if (cissoid->get_a() < 0) {
        do {
            std::cout << "Enter degree-->";
            get_num(degree);
        } while (degree <= 90 || degree >= 270);
    }
    if (cissoid->get_a() > 0) {
        do {
            std::cout << "Enter degree-->";
            get_num(degree);
        } while ((degree >= 360 || degree <= 270) && (degree <= 0 || degree >= 90));
    }
    double res = cissoid->get_distance(degree);
    std::cout << " Distance to 00  " << res << std::endl;

}

void  UI::get_area() const {
    double res = cissoid->get_area();
    std::cout << " Area-->  " << res << std::endl;

}

void  UI::get_volume() const {
    double res = cissoid->get_volume();
    if (res < 0) res= -res;
    std::cout << " Volume-->>  " << res << std::endl;

}

void UI::get_asymptote() const {
    double res = cissoid->get_asymptote();
    std::cout << " Coeff assymptote-->>  " << res << std::endl;

}

void UI::get_parabola() const  {
    double x;
    double res;
    if (cissoid->get_a() < 0) {
        do {
            std::cout << "Enter x-->";
            get_num(x);
        } while (x <= 2 * cissoid->get_a() || x > 0);
    }
    if (cissoid->get_a() > 0) {
        do {
            std::cout << "Enter x-->";
            get_num(x);
        } while (x >= 2 * cissoid->get_a() || x < 0);
    }
    res = cissoid->get_parabola(x);
    std::cout << " Coeff-->>>  " << res << std::endl;

}

int UI::dialog(const char *msgs[], int n) {
    char *error = (char *) "";
    int choice;
    do {
        puts(error);
        error = (char *) "You're wrong. Try again!";
        for (int i = 0; i < n; ++i) {
            puts(msgs[i]);
        }
        puts("Make your choice: ");
        get_num(choice);
        while (getchar() != '\n') {}
    } while (choice < 0 || choice >= n);
    return choice;
}
void start() {
    int c = 0;
    UI *ui=new UI();
    const char *pr = " ";
    do {
        const char *MSGS[] = {"0. Quit", "1. Set a", "2.Get y ", "3. Get distance ", "4. Get area", "5.Get volume ",
                              "6.Get asymptote", "7.Get parabola"};
        const int MSGS_SIZE = sizeof(MSGS) / sizeof(MSGS[0]);
        c = UI::dialog(MSGS, MSGS_SIZE);
        switch (c) {
            case 0: {
                break;
            }
            case 1: {
                std::cout<<"Enter a-->";
                double x;
                UI::get_num(x);
                ui->cissoid->set(x);
                break;
            }
            case 2: {
                ui->get_y();
                break;
            }
            case 3: {
               ui->get_distance();
                break;
            }
            case 4: {
                ui->get_area();
                break;
            }
            case 5: {
                ui->get_volume();
                break;
            }
            case 6: {
                ui->get_asymptote();
                break;
            }
            case 7: {
               ui->get_parabola();
                break;
            }
        }
    } while (c != 0);
    delete ui;
}