#ifndef SERIE_HPP
#define SERIE_HPP

    #include <iostream>
    #include <string>
    #include <vector>
    #include "Video.hpp"

class Serie : public Video
{

    public:

        //Constructor
        Serie(int ID = 0, std::string Name = "N/A", int Duration = 0, std::string Genre = "N/A", int Score = 0, std::vector<int> List = {0}, int NumEpisode = 0, int NumSeason = 0, std::string NameSeries = "N/A",int IDSeries = 0 ,int NumOfEpi = 0, int NumOfSea = 0);
        //Destructor
        ~Serie();

        //Getters
        int getNumEpisode();
        int getNumSeason();
        std::string getNameSeries();
        int getIDSeries();

        //Methods
        void showInfoMovie();
        void showInfoSerie();
        void showScore() override;

    private:

        int NumEpisode_;
        int NumSeason_;
        std::string NameSeries_;
        int IDSeries_;
        int NumOfEpi_;
        int NumOfSea_;

};

#endif