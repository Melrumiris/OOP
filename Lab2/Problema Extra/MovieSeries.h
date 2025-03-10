#pragma once
#include "Movie.h"

class MovieSeries {
    Movie movies[16];
    int count;
public:
    void init();
    bool add(Movie* m);
    void print();
    void sort();
};

