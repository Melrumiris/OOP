#include "Movie.h"

void Movie::set_name(char* name){
	this->name = name;
}
char* Movie::get_name(){
	return name;
}
void Movie::set_year(int year){
	this->year = year;
}
int Movie::get_year(){
	return year;
}
bool Movie::set_score(double score){
	if(score > 10 || score < 0)
          return false;
    this->score = score;
    return true;
}
double Movie::get_score(){
	return score;
}
void Movie::set_length(float length){
	this->length = length;
}
float Movie::get_length(){
	return length;
}
int Movie::passed_years(){
	return 2025-year;
}