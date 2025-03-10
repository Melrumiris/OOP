#include "MovieSeries.h"
#include <iostream>
#include "Global Functions.h"
void MovieSeries::init(){
    count=0;
}

bool MovieSeries::add(Movie *m){
   if(count < 16){
       movies[count] = *m;
       count++;
       return true;
   }
   return false;
}

void MovieSeries::print(){
    for (int i = 0; i < count; i++){
        printf("%s\n",movies[i].get_name());
        printf("Release Year: %d\n",movies[i].get_year());
        printf("IMDB Score: %f\n",movies[i].get_score());
        printf("Movie Length: %f\n",movies[i].get_score());
        printf("Released %d years ago \n \n",movies[i].passed_years());
   }
}

void MovieSeries::sort(){
    bool sorted;
    do {
        sorted = true;
        for (int i = 1; i < count - 1; i++)
            if (movie_compare_year(movies[i],movies[i + 1])>0) {
                Movie aux = movies[i];
                movies[i] = movies[i + 1];
                movies[i + 1] = aux;
                sorted = false;
            }
    } while (!sorted);
}