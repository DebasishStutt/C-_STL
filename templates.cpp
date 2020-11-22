#include <iostream>

template<typename T>
class Container {
    T _t;

    public:
    explicit Container (T t) : _t(t) {}

    friend std::ostream& operator<<(std::ostream& os, const Container<T>& c) {
        return(os << "The conatainer has : " << c._t);
    }
};

int main () {

Container<int> i(100);
Container<std::string> s = Container<std::string>("Super Cool!");

std::cout << i << std::endl;
  std::cout << s << std::endl;

return 0;
}
