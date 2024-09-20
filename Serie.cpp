#include "Video.hpp"
#include "Serie.hpp"

//Constructor

Serie::Serie(int ID, std::string Name, int Duration, std::string Genre, int Score, std::vector<int> List, int NumEpisode, int NumSeason, std::string NameSeries, int IDSeries, int NumOfEpi, int NumOfSea):
Video(ID, Name, Duration, Genre, Score, List)
{
    NumEpisode_ = NumEpisode;
    NumSeason_ = NumSeason;
    NameSeries_ = NameSeries;
    IDSeries_ = IDSeries;
    NumOfEpi_ = NumOfEpi;
    NumOfSea_ = NumOfSea;

    //std::cout << std::endl << "Object Created" << std::endl;

}

//Destructor

Serie::~Serie()
{
    //std::cout << std::endl << "Object Destroyed" << std::endl;
}

//Getters

int Serie::getNumEpisode()
{
    return NumEpisode_;
}

int Serie::getNumSeason()
{
    return NumSeason_;
}

std::string Serie::getNameSeries()
{
    return NameSeries_;
}

int Serie::getIDSeries()
{
    return IDSeries_;
}

//Methods

void Serie::showInfoMovie()
{

    std::cout << "----------------------------------------------------------------------" << std::endl;
    std::cout << "Information of the episode: " << Name_ << std::endl;
    std::cout << "ID: " << ID_ << std::endl;
    std::cout << "Number of episode: " << NumEpisode_ << std::endl;
    std::cout << "Number of season: " << NumSeason_ << std::endl;
    std::cout << "Name of the series: " << NameSeries_ << std::endl;
    std::cout << "Duration: " << Duration_ << " minutos" << std::endl;
    std::cout << "Genre: " << Genre_ << std::endl;
    std::cout << "Score: " << Score_ << "/5" << std::endl;
    std::cout << "----------------------------------------------------------------------" << std::endl;


    std::cout << std::endl;

}

void Serie::showInfoSerie()
{

    std::cout << "----------------------------------------------------------------------" << std::endl;
    std::cout << "Information of the series: " << NameSeries_ << std::endl;
    std::cout << "ID of the series: " << IDSeries_ << std::endl;
    std::cout << "Number of episode: " << NumOfEpi_ << std::endl;
    std::cout << "Number of season: " << NumOfSea_ << std::endl;
    std::cout << "----------------------------------------------------------------------" << std::endl;

    std::cout << std::endl;

}

void Serie::showScore()
{

    std::cout << std::endl;

    std::cout << "Score of the episode: " << Name_ << std::endl << std::endl;
    std::cout << "Score: " << Score_ << "/5" << std::endl;

    std::cout << std::endl;

}