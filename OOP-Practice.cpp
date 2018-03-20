#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        Person(string name1) {
            name = name1;
        }
    
        ~Person() {
            cout << "Goodbye, " << name;   
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
    cout << me.getName() << endl;
    return 0;
}
