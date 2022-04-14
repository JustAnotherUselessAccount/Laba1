#ifndef TEST_H
#define TEST_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
//#include <unistd.h>

extern "C" {
    #include "square_root.h"
}

TEST(no_roots_tests, no_roots1) {
    double x1, x2;
    int ret = get_roots(0, 0, 0, &x1, &x2);
    EXPECT_EQ(ret, 1);
}

TEST(no_roots_tests, no_roots2) {
    double x1, x2;
    int ret = get_roots(0, 0, 2, &x1, &x2);
    EXPECT_EQ(ret, 1);
}

TEST(no_roots_tests, no_roots3) {
    double x1, x2;
    int ret = get_roots(1, 1, 1, &x1, &x2);
    EXPECT_EQ(ret, 1);
}

TEST(normal_roots_tests, zero_koef1) {
    double x1, x2;
    int ret = get_roots(0, 2, -2, &x1, &x2);
    EXPECT_EQ(ret, 0);
    EXPECT_EQ(x1, 1);
}

TEST(normal_roots_tests, zero_koef2) {
    double x1, x2;
    int ret = get_roots(2, 0, -8, &x1, &x2);
    EXPECT_EQ(ret, 0);
    EXPECT_EQ(x1, 2);
    EXPECT_EQ(x2, -2);
}

TEST(normal_roots_tests, one_root) {
    double x1, x2;
    int ret = get_roots(1, -4, 4, &x1, &x2);
    EXPECT_EQ(ret, 0);
    EXPECT_EQ(x1, 2);
    EXPECT_EQ(x2, 2);
}

TEST(normal_roots_tests, normal_root) {
    double x1, x2;
    int ret = get_roots(1, -3, 2, &x1, &x2);
    EXPECT_EQ(ret, 0);
    EXPECT_EQ(x1, 2);
    EXPECT_EQ(x2, 1);
}

#endif
