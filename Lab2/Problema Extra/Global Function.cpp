#include "Global Functions.h"

int movie_compare_name(Movie m1, Movie m2){
    int i=0;
    while(*(m1.get_name()+i) != '/n' && *(m2.get_name()+i) != '/n'){
        if (*(m1.get_name()+i) > *(m2.get_name()+i))
          return 1;
        else if (*(m1.get_name()+i) < *(m2.get_name()+i))
          return -1;
    }
    return 0;
}

int movie_compare_year(Movie m1, Movie m2){
    if (m1.get_year() < m2.get_year())
      return -1;
    else if (m1.get_year() > m2.get_year())
      return 1;
    return 0;
}

int movie_compare_length(Movie m1, Movie m2){
    if (m1.get_length() < m2.get_length())
        return -1;
    else if (m1.get_length() > m2.get_length())
        return 1;
    return 0;
}

int movie_compare_score(Movie m1, Movie m2){
    if (m1.get_score() < m2.get_score())
        return -1;
    else if (m1.get_score() > m2.get_score())
        return 1;
    return 0;
}

int movie_compare_passed_years(Movie m1, Movie m2){
    if (m1.passed_years() < m2.passed_years())
        return -1;
    else if (m1.passed_years() > m2.passed_years())
        return 1;
    return 0;
}