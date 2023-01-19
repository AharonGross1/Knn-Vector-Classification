//
// Created by asaf9 on 1/9/2023.
//
#include "InputFile.h"
#include "AlgoSettings.h"
#include <string>

void AlgoSettings::stringToArray(std::string *arr[2], std::string s) {
    int i = 0;
    char curr = '0';
    while (curr != ' ' && i < s.length()) {
        curr = s.at(i);
        i++;

    }
    auto *k = new string(s.substr(0, i - 1));
    auto *func = new string(s.substr(i));
    arr[0] = k;
    arr[1] = func;
}

bool AlgoSettings::IsAPositiveNumber(string *s) {
    InputFile inputFile;
    int i = 0;
    if (s->at(i) == '+') {
        i++;
    }
    for (; i < s->length(); i++) {
        if (!isdigit(s->at(i))) {
            return false;
        }
    }
    int k = stoi(*s);
    return inputFile.kNumIsValid(k);
}


void AlgoSettings::execute() {
    this->dio->write("The current KNN parameters are: k = " + this->data->Knum + ", distance mertic = " + this->data->dis);
    this->dio->read();
    this->dio->write(this->dio->sendAnswer);
    std::string stringInput = this->dio->read();
    if (stringInput=="empty") {
//        this->dio.write("The string is empty!");
        return;
    } else {
        InputFile inputFile;
        std::string *clientInput[2];
        stringToArray(clientInput, stringInput);
        bool kIsOk = IsAPositiveNumber(clientInput[0]);
        bool disIsOk = inputFile.distanceIsValid(*clientInput[1]);
        if (!kIsOk) {
            this->dio->write("Invalid value for K");
            this->dio->read();
        }
        if (!disIsOk) {
            this->dio->write("Invalid value for metric");
            this->dio->read();}

        if (disIsOk and kIsOk){
            this->data->Knum = *clientInput[0];
            this->data->dis = *clientInput[1];
        }
        return;

}}


AlgoSettings::AlgoSettings(Data *data,DefaultIO *defaultIo1) {
    this->description = "algorithm settings";
    this->data = data;
    this->dio=defaultIo1;
}
