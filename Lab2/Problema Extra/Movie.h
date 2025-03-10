#pragma once

using namespace std;
class Movie{
    char* name;
    int year;
    double score;
    float length;
public:
    void set_name(char* name);
    char* get_name();
    void set_year(int year);
    int get_year();
    bool set_score(double score);
    double get_score();
    void set_length(float length);
    float get_length();
    int passed_years();
};