#include <gtest/gtest.h>
#include <UI.h>

TEST(Cissoid, get_set_a) {
    Cissoid *cissoid = new Cissoid();
    cissoid->set(12);
    EXPECT_EQ(cissoid->get_a(), 12);
    cissoid->set(1);
    EXPECT_EQ(cissoid->get_a(), 1);
    delete cissoid;
}

TEST(Cissoid, get_y_1) {
    Cissoid *cissoid = new Cissoid();
    cissoid->set(12);
    EXPECT_NEAR(cissoid->get_y(14), 16.565, 3);
    EXPECT_NEAR(cissoid->get_y(7), 4.4918, 3);
    EXPECT_NEAR(cissoid->get_y(13.234), 14.673, 3);
    EXPECT_NEAR(cissoid->get_y(0), 0, 3);
    delete cissoid;
}

TEST(Cissoid, get_y_2) {
    Cissoid *cissoid = new Cissoid();
    cissoid->set(-10.25);
    EXPECT_NEAR(cissoid->get_y(-20), 126.5, 3);
    EXPECT_NEAR(cissoid->get_y(-7.333), 5.472, 3);
    EXPECT_NEAR(cissoid->get_y(0), 0, 3);
    EXPECT_NEAR(cissoid->get_y(-1), 0.22654, 3);
    delete cissoid;
}

TEST(Cissoid, get_dist_1) {
    Cissoid *cissoid = new Cissoid();
    cissoid->set(10);
    EXPECT_NEAR(cissoid->get_distance(60), 27.75, 3);
    EXPECT_NE(cissoid->get_distance(60), 27.12);
    EXPECT_NEAR(cissoid->get_distance(89), 345.08, 3);
    EXPECT_NEAR(cissoid->get_distance(1), 0.00578, 3);
    EXPECT_NEAR(cissoid->get_distance(23), 3.14208, 3);
    delete cissoid;
}

TEST(Cissoid, get_dist_2) {
    Cissoid *cissoid = new Cissoid();
    cissoid->set(-10.25);
    EXPECT_NEAR(cissoid->get_distance(130), 22.1345, 3);
    EXPECT_NE(cissoid->get_distance(269), 144);
    EXPECT_NEAR(cissoid->get_distance(269), 144.7, 3);
    EXPECT_NEAR(cissoid->get_distance(95), 463.01, 3);
    EXPECT_NEAR(cissoid->get_distance(93), 2008.92, 3);
    delete cissoid;
}

TEST(Cissoid, get_area_1) {
    Cissoid *cissoid = new Cissoid();
    cissoid->set(2.34);
    EXPECT_NEAR(cissoid->get_area(), 51.6063, 3);
    cissoid->set(10);
    EXPECT_NEAR(cissoid->get_area(), 942.478, 3);
    cissoid->set(1);
    EXPECT_NEAR(cissoid->get_area(), 9.42478, 3);
    cissoid->set(100);
    EXPECT_NEAR(cissoid->get_area(), 94247.8, 3);
    EXPECT_NE(cissoid->get_area(), 2008.92);
    delete cissoid;
}

TEST(Cissoid, get_area_2) {
    Cissoid *cissoid = new Cissoid();
    cissoid->set(-10.23);
    EXPECT_NEAR(cissoid->get_area(), 986.33, 3);
    cissoid->set(-1);
    EXPECT_NEAR(cissoid->get_area(), 9.42478, 3);
    cissoid->set(-3.456);
    EXPECT_NEAR(cissoid->get_area(), 112.569, 3);
    cissoid->set(-100);
    EXPECT_NEAR(cissoid->get_area(), 94247.8, 3);
    EXPECT_NE(cissoid->get_area(), 2008.92);
    delete cissoid;
}

TEST(Cissoid, get_volume_1) {
    Cissoid *cissoid = new Cissoid();
    cissoid->set(-10.23);
    EXPECT_NEAR(cissoid->get_volume(), -21132.8, 3);
    cissoid->set(-1);
    EXPECT_NEAR(cissoid->get_volume(), -19.739, 3);
    cissoid->set(-3.456);
    EXPECT_NEAR(cissoid->get_volume(), -814.8, 3);
    cissoid->set(-10);
    EXPECT_NEAR(cissoid->get_volume(), -19739.2, 3);
    //EXPECT_NE(cissoid->get_volume(), 2008.92);
    delete cissoid;
}

TEST(Cissoid, get_volume_2) {
    Cissoid *cissoid = new Cissoid();
    cissoid->set(2.34);
    EXPECT_NEAR(cissoid->get_volume(), 252.917, 3);
    cissoid->set(10);
    EXPECT_NEAR(cissoid->get_volume(), 19739.2, 3);
    cissoid->set(1);
    EXPECT_NEAR(cissoid->get_volume(), 19.7392, 3);
    cissoid->set(9.4);
    EXPECT_NEAR(cissoid->get_volume(), 16395.1, 3);
    EXPECT_NE(cissoid->get_volume(), 2008.92);
    delete cissoid;
}

TEST(Cissoid, get_asymptote_1) {
    Cissoid *cissoid = new Cissoid();
    cissoid->set(1);
    EXPECT_EQ(cissoid->get_asymptote(), 2);
    cissoid->set(10.24);
    EXPECT_EQ(cissoid->get_asymptote(), 20.48);
    cissoid->set(-5);
    EXPECT_EQ(cissoid->get_asymptote(), -10);
    cissoid->set(-7.32);
    EXPECT_EQ(cissoid->get_asymptote(), -14.64);
    EXPECT_NE(cissoid->get_asymptote(), 2008.92);
    delete cissoid;
}

TEST(Cissoid, get_parabola_1) {
    Cissoid *cissoid = new Cissoid();
    cissoid->set(-10);
    EXPECT_NEAR(cissoid->get_parabola(-4), 6, 3);
    EXPECT_NEAR(cissoid->get_parabola(-2), 8,3);
    EXPECT_NEAR(cissoid->get_parabola(-19.99), -9.99, 3);
    EXPECT_NEAR(cissoid->get_parabola(-0.25), 9.75, 3);
    EXPECT_NE(cissoid->get_parabola(-0.25), 2008.92);
    delete cissoid;
}
TEST(Cissoid, get_parabola_2) {
    Cissoid *cissoid = new Cissoid();
    cissoid->set(10);
    EXPECT_NEAR(cissoid->get_parabola(4), -6, 3);
    EXPECT_NEAR(cissoid->get_parabola(2), -8,3);
    EXPECT_NEAR(cissoid->get_parabola(19.99), 9.99, 3);
    EXPECT_NEAR(cissoid->get_parabola(0.25), -9.75, 3);
    EXPECT_NE(cissoid->get_parabola(-0.25), 2008.92);
    delete cissoid;
}

