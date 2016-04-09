#include <iostream>
#include "DataStorage.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    DataStorage dataStorage;
    dataStorage.print();
    dataStorage.insert(8);
    dataStorage.print();
    dataStorage.insert(7).insert(9).print();
    cout << "This is the mean value: " << dataStorage.meanValue() << endl;
    cout << "Number of elements between 0 and 5: " << dataStorage.numberOfElementsBetween(0, 5)
            << endl;
    cout << "The size of the vector is: " << dataStorage.numberOfElements() << endl;
    cout << "Removing elements between 0 and 8, number of elements are: " << dataStorage.eraseElementsBetween(0,8) << endl;
    dataStorage.print();
    return 0;
}