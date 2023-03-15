#include <gtest/gtest.h>
#include <iostream>
#include <vector>

class Ubject {
public:
    Ubject() {
        std::cout << "[Ubject]" << std::endl;
    }
    ~Ubject() {
        std::cout << "[~Ubject]" << std::endl;
    }
};

TEST(BasicTest, AddingNumbers) {
    auto addnum = [](int a, int b) { return a + b; };
    const auto expected = 69;
    const auto actual = addnum(42, 13) + 14;
    ASSERT_EQ(expected, actual);
}

TEST(MemoryLeak, Leak01) {
    auto func = []() {
        std::vector<Ubject *> accounts;
        for (int i = 0; i < 9; i++) {
            Ubject *pUbject = new Ubject;
            accounts.push_back(pUbject);
        }
    };

    func();
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
