#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        Person(string name1) {
            name = name1;
        }
        
        void setName(string newName) {
            name = newName;
        }
        
        string getName() {
            return name;
        }
    private:
        string name;
};

int main() {
    Person me("Tom");
    me.setName("Jerry");
    cout << me.getName();
    return 0;
}
