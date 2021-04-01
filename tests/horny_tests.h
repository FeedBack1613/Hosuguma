
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "myfunc.h"
#include "horny.h"
}

#include "horny.h"
TEST(horny, lol) {
 horny (1,2,4);
 EXPECT_EQ(-12,d);
}

TEST(horny, sot) {
 horny(1,6,8);
 EXPECT_EQ(4,d);
}

TEST(horny, uran) {
 horny(1,5,7);
 EXPECT_EQ(-3,d);
}

TEST(horny, io) {
 horny(1,-8,7);
 EXPECT_EQ(36,d);
}
