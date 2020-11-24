#include<iostream>


using namespace std;


int main() {

    auto res = [] <typename T> (T t1, T t2) {
        return (t1 == t2);
    };

    cout << boolalpha;
    cout << res(10, 10) << endl;

    return 0;
}