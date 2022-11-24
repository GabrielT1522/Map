#include <iostream>
#include "Map.h"

using namespace std;
int main(){

    Map<string, string> myMap;
    cout << "myMap.size(): " << myMap.size() << endl;
    cout << "myMap.isEmpty(): " << myMap.isEmpty() << endl;
    myMap.put("Test1", "Hello");
    cout << "myMap.size(): " << myMap.size() << endl;
    cout << "myMap.isEmpty(): " << myMap.isEmpty() << endl;
    myMap.put("Test2", "Bye");
    cout << "myMap.size(): " << myMap.size() << endl;
    cout << "myMap.isEmpty(): " << myMap.isEmpty() << endl;
    cout << "myMap.value(\"Test1\", \"Hello\"): " << myMap.value("Test1", "Hello") << endl;
    cout << "myMap.key(\"Test2\", \"Bye\"): " << myMap.key("Test2", "Bye") << endl;

    return 0;
}