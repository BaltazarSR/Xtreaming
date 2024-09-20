#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <iostream>
#include <string>
#include <vector>

class Video
{
    public:

        //Constructor
        Video(int ID = 0, std::string Name = "N/A", int Duration = 0, std::string Genre = "N/A", int Score = 0, std::vector<int> List = {0});
        //Destructor
        ~Video();

        //Getters
        int getID();
        std::string getName();
        int getDuration();
        std::string getGenre();
        int getScore();

        //Setters
        void setScore(int Score);

        //Methods
        void showInfoMovie();
        virtual void showScore();
        void updateScore(int Score);

        //Overloading
        friend bool operator < (Video pelicula1, Video pelicula2);
        friend bool operator == (Video pelicula1, Video pelicula2);
        friend bool operator > (Video pelicula1, Video pelicula2);

    protected:

        int ID_;
        std::string Name_;
        int Duration_;
        std::string Genre_;
        int Score_;
        std::vector<int> List_;

};

#endif