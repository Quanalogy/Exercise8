//
// Created by Munke on 08-04-2016.
//

#ifndef EXERCISE_8_DATASTORAGE_H
#define EXERCISE_8_DATASTORAGE_H

#include <vector>
using namespace std;

class DataStorage {

private:
    vector<double> data_;
public:
    DataStorage & insert(double item);
    int numberOfElements();
    double meanValue();
    int numberOfElementsBetween(double item1, double item2);
    int eraseElementsBetween(double item1, double item2);
    void print();
    DataStorage(){
        data_= std::vector<double>(20,0); // size 20 and 0 on all entries.
    }
};


#endif //EXERCISE_8_DATASTORAGE_H
