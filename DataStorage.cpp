//
// Created by Munke on 08-04-2016.
//

#include <iostream>
#include "DataStorage.h"
#include <algorithm>


double DataStorage::meanValue() {
    double totalValue = std::accumulate(data_.begin(), data_.end(), 0.0f);
    return totalValue/numberOfElements();
}

void DataStorage::print() {
    cout << "Printing the Data...." << endl;

    for(auto i = data_.begin(); i!=data_.end(); ++i){
        cout << " " << *i;
    }
    cout << endl;
}

DataStorage& DataStorage::insert(double item) {
    data_.push_back(item);
    return *this; // return "this" which is a DataStorage element, it is dereferenced because 'this' is a pointer
}

int DataStorage::numberOfElements() {
    return data_.size();
}

int DataStorage::numberOfElementsBetween(double item1, double item2) {
    int res = 0;

    for(auto i = data_.begin(); i != data_.end(); ++i){
        if (*i >= item1 && *i <= item2){
            ++res;
        }
    }


    return res;
}

int DataStorage::eraseElementsBetween(double item1, double item2) {
    int numberOfRemovedItems = 0;

    for (auto i = data_.begin(); i != data_.end() ; ++i) {
        if (item1 <= *i && *i <= item2){
            data_.erase(i);
            ++numberOfRemovedItems;
        }
    }
    return numberOfRemovedItems;
}

