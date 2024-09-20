#include "Video.hpp"

//Constructor

Video::Video(int ID, std::string Name, int Duration, std::string Genre, int Score, std::vector<int> List)
{
    ID_ = ID;
    Name_ = Name;
    Duration_ = Duration;
    Genre_ = Genre;
    Score_ = Score;
    List_ = List;

    //std::cout << std::endl << "Object Created" << std::endl;
}

//Destructor

Video::~Video()
{
    //std::cout << std::endl << "Object Destroyed" << std::endl;
}

//Getters

int Video::getID()
{
    return ID_;
}

std::string Video::getName()
{
    return Name_;
}

int Video::getDuration()
{
    return Duration_;
}

std::string Video::getGenre()
{
    return Genre_;
}

int Video::getScore()
{
    return Score_;
}

//Setters

void Video::setScore(int Score)
{
    Score_ = Score;
}

//Methods

void Video::showInfoMovie()
{
    //std::cout << std::endl;

    std::cout << "----------------------------------------------------------------------" << std::endl;
    std::cout << "Information of the movie: " << Name_ << std::endl;
    std::cout << "ID: " << ID_ << std::endl;
    std::cout << "Duration: " << Duration_ << " minutes" << std::endl;
    std::cout << "Genre: " << Genre_ << std::endl;
    std::cout << "Score: " << Score_ << "/5" << std::endl;
    std::cout << "----------------------------------------------------------------------" << std::endl;


    std::cout << std::endl;
}

void Video::showScore()
{
    std::cout << std::endl;

    std::cout << "Score of the movie: " << Name_ << std::endl << std::endl;
    std::cout << "Score: " << Score_ << "/5" << std::endl;

    std::cout << std::endl;
}

void Video::updateScore(int Score)
{
    
    int sum = 0;
    int avr = 0;

    List_.push_back(Score);

    for(int i = 0; i < List_.size(); i++){

        sum = sum + List_[i];

        avr = sum/List_.size();

        Score_ = avr;

    }

    showScore();    //virtual function

}

//Overloading

bool operator < (Video pelicula1, Video pelicula2){

    if(pelicula1.Score_ < pelicula2.Score_){

    return true;
    }
    else{

    return false;
    }
    
}

bool operator == (Video pelicula1, Video pelicula2){

    if(pelicula1.Score_ == pelicula2.Score_){

    return true;
    }
    else{

    return false;
    }
    
}

bool operator > (Video pelicula1, Video pelicula2){

    if(pelicula1.Score_ > pelicula2.Score_){

    return true;
    }
    else{

    return false;
    }

}
