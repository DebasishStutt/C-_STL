#include<iostream>
#include<exception>
#include<typeinfo>


class customException : public std::exception {
    std::string _w;
    
    public:
    customException(const std::string w) : _w(w) {}

    const char* what() const noexcept {
        return _w.c_str();
    }
};


class somethingImportant {
    public:
    somethingImportant() {
        #if 0
        throw customException("somethingImportant: Couldn't allocate important resource");
        #endif
        throw 10;
    }
};

int main () {
    try {
        somethingImportant se;
    } catch (std::exception& e) {
        //std::cout << "Caught exception of type: " << typeid(e).name() << std::endl;
        std::cout << "Exception: " << e.what() << std::endl;
        return 1;
    } catch (...) {
        std::cout << "CatchAll Exception" << std::endl;
        return 2;
    }
return 0;
}