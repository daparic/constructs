#include <gtest/gtest.h>
#include <iostream>
#include <vector>

class Ubject {
public:
    Ubject(int n) : n_(n) {
    }
    Ubject() {
        std::cout << "[Ubject]" << std::endl;
    }
    ~Ubject() {
        std::cout << "[~Ubject]" << std::endl;
    }
    int get() {
        return n_;
    }

private:
    int n_;
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

TEST(MemoryLeak, testcontainer) {
    Ubject b1(3), b2(1), b3(4);
    std::vector<Ubject> objects{b1, b2, b3};
    std::cout << objects.size() << std::endl;
    for (auto object : objects) {
        std::cout << object.get();
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
