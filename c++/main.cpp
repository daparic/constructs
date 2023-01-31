#include <array>
#include <condition_variable>
#include <cstdlib>
#include <functional>
#include <future>
#include <iostream>
#include <map>
#include <mutex>
#include <set>
#include <thread>
#include <vector>

#include "gmock/gmock.h"
#include "gtest/gtest.h"

class Superstructure : public testing::Test {
public:
    Superstructure() {
        std::cout << "*** Superstructure:: ***\n";
    }

protected:
    void SetUp() {
        std::cout << "*** ::SetUp ***\n";
    }

    void TearDown() {
        std::cout << "*** ::TearDown ***\n";
    }
};

TEST_F(Superstructure, test1) {
    ASSERT_EQ([](int a, int b) { return a + b; }(3, 4), 7);
}

TEST_F(Superstructure, test2) {
}

int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
