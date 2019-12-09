#include <iostream>

namespace western {

enum ShootingHand {
    Left,
    Right
};

class Cowboy {
public:
    Cowboy();
    Cowboy(int gunCount);
    ~Cowboy();

    void shoot(std::string who);
    int age() { return m_age; } // minor functions have lower case

protected:
    void makeBang(const int& howMany);

    int m_gunCount;
    int m_age;
};

Cowboy::Cowboy()
    : m_age(45)
    , m_gunCount(2)
{
    std::cout << "I am alive!" << std::endl;
}

Cowboy::Cowboy(int gunCount)
    : m_age(45)
    , m_gunCount(gunCount)
{
    // And this is the longest inline comment you have every seen. Lorem Ipsum.
    // Bacon! Cheese. Bread. Beer. Fish. Mobile fridge. More random words come
    // here...
    std::cout << "Howdy!" << std::endl;
}

Cowboy::~Cowboy()
{
    std::cout << "RIP" << std::endl;
}

void Cowboy::shoot(std::string who)
{
    m_age++;
    int someNumber = 5 + 7 * 3;
    makeBang(someNumber);
    if (someNumber > 10) {
        return;
    }
    switch (m_age) {
    case 45:
        m_age--;
        break;
    default:
        m_age++;
    }
}

void Cowboy::makeBang(const int& howMany)
{
    for (int i = 0; i < howMany; ++i)
        std::cout << "Bang!" << std::endl;
}

void someVeryLongMethod(int param1, int param2, int param3, int param4, int param5,
    int param6, int param7, int param8, int param9, int param10)
{
    std::cout << "So long..." << std::endl;
}
}

using namespace western;

int main()
{
    Cowboy Amy;
    Cowboy Angus(2);
    Cowboy* currentCowboy = &Amy;
    currentCowboy->shoot("yourself");
    return 0;
}
