#include <gtest/gtest.h>
#include "googleTestDemo.h"

int f(){
    return 3;
}

TEST(ExampleTests, gTestMacros){
    EXPECT_TRUE(true);

    ASSERT_TRUE(true);     // If it fails, do not continue

    const int result = f();
    EXPECT_EQ(3, result);
}

TEST(ExampleTests, sum){
    int x = 5;
    int y = 12;
    int sum = 17;
    
    EXPECT_EQ(sum, add(x,y));
    EXPECT_NE(x, y);
}

TEST(ExampleTests, pow){
    int b = 5;
    int e1 = 0;
    int e2 = 5;

    EXPECT_EQ(1, power(b, e1));
    EXPECT_EQ(3125, power(b, e2));
}