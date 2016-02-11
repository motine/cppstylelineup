#include <iostream>

namespace western {

enum ShootingHand { kLeft, kRight };

class Cowboy {
 public:
  Cowboy();
  Cowboy(int GunCount);
  ~Cowboy();

  void Shoot(std::string who);
  int get_age() { return age_; }  // minor functions have lower case

 protected:
  void MakeBang(const int &how_many);

  int gun_count_;
  int age_;
};

Cowboy::Cowboy() : age_(45), gun_count_(2) {
  std::cout << "I am alive!" << std::endl;
}

Cowboy::Cowboy(int gun_count) : age_(45), gun_count_(gun_count) {
  // And this is the longest inline comment you have every seen. Lorem Ipsum.
  // Bacon! Cheese. Bread. Beer. Fish. Mobile fridge. More random words come
  // here...
  std::cout << "Howdy!" << std::endl;
}

Cowboy::~Cowboy() { std::cout << "RIP" << std::endl; }

void Cowboy::Shoot(std::string who) {
  age_++;
  int some_number = 5 + 7 * 3;
  MakeBang(some_number);
  if (some_number > 10) {
    return;
  }
  switch (age_) {
    case 45:
      age_--;
      break;
    default:
      age_++;
  }
}

void Cowboy::MakeBang(const int &how_many) {
  for (int i = 0; i < how_many; ++i) std::cout << "Bang!" << std::endl;
}

void someVeryLongMethod(int param1, int param2, int param3, int param4,
                        int param5, int param6, int param7, int param8,
                        int param9, int param10) {
  std::cout << "So long..." << std::endl;
}
}  // namespace western

using namespace western;

int main() {
  Cowboy Amy;
  Cowboy Angus(2);
  Cowboy *current_cowboy = &Amy;
  current_cowboy->Shoot("yourself");
  return 0;
}

// ADDITIONAL NOTES:
// - Each file should contain a copyright notice.
// - There is a python lint tool.
