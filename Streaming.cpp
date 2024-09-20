#include "Video.cpp"
#include "Serie.cpp"

int main()
{

    system("clear");

    std::string start = "0";

    std::cout << std::endl;

    std::cout << "                                                                                                  Welcome to:                                                                        " << std::endl;                                                                                                                                                                
    std::cout << "    XXXXXXX       XXXXXXX          tttt                                                                                                 iiii                                           " << std::endl;
    std::cout << "    X:::::X       X:::::X       ttt:::t                                                                                                i::::i                                          " << std::endl;
    std::cout << "    X:::::X       X:::::X       t:::::t                                                                                                 iiii                                           " << std::endl;
    std::cout << "    X::::::X     X::::::X       t:::::t                                                                                                                                                " << std::endl;
    std::cout << "    XXX:::::X   X:::::XXX ttttttt:::::ttttttt    rrrrr   rrrrrrrrr        eeeeeeeeeeee      aaaaaaaaaaaaa       mmmmmmm    mmmmmmm    iiiiiii nnnn  nnnnnnnn        ggggggggg   ggggg  " << std::endl;
    std::cout << "       X:::::X X:::::X    t:::::::::::::::::t    r::::rrr:::::::::r     ee::::::::::::ee    a::::::::::::a    mm:::::::m  m:::::::mm  i:::::i n:::nn::::::::nn     g:::::::::ggg::::g  " << std::endl;
    std::cout << "        X:::::X:::::X     t:::::::::::::::::t    r:::::::::::::::::r   e::::::eeeee:::::ee  aaaaaaaaa:::::a  m::::::::::mm::::::::::m  i::::i n::::::::::::::nn   g:::::::::::::::::g  " << std::endl;
    std::cout << "         X:::::::::X      tttttt:::::::tttttt    rr::::::rrrrr::::::r e::::::e     e:::::e           a::::a  m::::::::::::::::::::::m  i::::i nn:::::::::::::::n g::::::ggggg::::::gg  " << std::endl;
    std::cout << "         X:::::::::X            t:::::t           r:::::r     r:::::r e:::::::eeeee::::::e    aaaaaaa:::::a  m:::::mmm::::::mmm:::::m  i::::i   n:::::nnnn:::::n g:::::g     g:::::g   " << std::endl;
    std::cout << "        X:::::X:::::X           t:::::t           r:::::r     rrrrrrr e:::::::::::::::::e   aa::::::::::::a  m::::m   m::::m   m::::m  i::::i   n::::n    n::::n g:::::g     g:::::g   " << std::endl;
    std::cout << "       X:::::X X:::::X          t:::::t           r:::::r             e::::::eeeeeeeeeee   a::::aaaa::::::a  m::::m   m::::m   m::::m  i::::i   n::::n    n::::n g:::::g     g:::::g   " << std::endl;
    std::cout << "    XXX:::::X   X:::::XXX       t:::::t    tttttt r:::::r             e:::::::e           a::::a    a:::::a  m::::m   m::::m   m::::m  i::::i   n::::n    n::::n g::::::g    g:::::g   " << std::endl;
    std::cout << "    X::::::X     X::::::X       t::::::tttt:::::t r:::::r             e::::::::e          a::::a    a:::::a  m::::m   m::::m   m::::m i::::::i  n::::n    n::::n g:::::::ggggg:::::g   " << std::endl;
    std::cout << "    X:::::X       X:::::X       tt::::::::::::::t r:::::r              e::::::::eeeeeeee  a:::::aaaa::::::a  m::::m   m::::m   m::::m i::::::i  n::::n    n::::n  g::::::::::::::::g   " << std::endl;
    std::cout << "    X:::::X       X:::::X         tt:::::::::::tt r:::::r               ee:::::::::::::e   a::::::::::aa:::a m::::m   m::::m   m::::m i::::::i  n::::n    n::::n   gg::::::::::::::g   " << std::endl;
    std::cout << "    XXXXXXX       XXXXXXX           ttttttttttt   rrrrrrr                 eeeeeeeeeeeeee    aaaaaaaaaa  aaaa mmmmmm   mmmmmm   mmmmmm iiiiiiii  nnnnnn    nnnnnn     gggggggg::::::g   " << std::endl;
    std::cout << "                                                                                                                                                                             g:::::g   " << std::endl;
    std::cout << "                                                                                                                                                                 gggggg      g:::::g   " << std::endl;
    std::cout << "                                                                                                                                                                 g:::::gg   gg:::::g   " << std::endl;
    std::cout << "                                                                                                                                                                  g::::::ggg:::::::g   " << std::endl;
    std::cout << "                                                                                                                                                                   gg:::::::::::::g    " << std::endl;
    std::cout << "                                                                                                                                                                     ggg::::::ggg      " << std::endl;
    std::cout << "                                                                                                                                                                        gggggg         " << std::endl;
    std::cout << "                                                                                  Press any key to continue: ";                                                                                                                                                                

    std::cin >> start;
    std::cout << std::endl;

    system("clear");

    int index = 0;

    int sco = 0;

    Video movie1(1,"Ice Age", 81, "Adventure", 4,{4});
    Video movie2(2,"Bullet Train", 126, "Comedy", 3, {3});
    Video movie3(3,"Interestellar", 169, "Science Fiction", 4,{4});
    Video movie4(4,"Tenet", 150, "Science Fiction", 3,{3});
    Video movie5(5,"Puss in Boots", 102, "Adventure", 3,{3});

    std::vector<Video> movies = {};

    movies.push_back(movie1);
    movies.push_back(movie2);
    movies.push_back(movie3);
    movies.push_back(movie4);
    movies.push_back(movie5);

    Serie episode11(1301,"Gay Witch Hunt", 22, "Comedy", 4,{4},1,3,"The Office",1000,25,9);
    Serie episode12(1302,"The Convention", 22, "Comedy", 4,{4},2,3,"The Office",1000,25,9);
    Serie episode13(1303,"The Coup", 22, "Comedy", 4,{4},3,3,"The Office",1000,25,9);

    std::vector<Serie> theOffice = {};

    theOffice.push_back(episode11);
    theOffice.push_back(episode12);
    theOffice.push_back(episode13);

    Serie episode21(2101,"Geheimnisse", 51, "Mystery", 4,{4},1,1,"Dark",2000,10,3);
    Serie episode22(2102,"Lügen", 44, "Mystery", 4,{4},2,1,"Dark",2000,10,3);
    Serie episode23(2103,"Gestern und heute", 45, "Mystery", 4,{4},3,1,"Dark",2000,10,3);

    std::vector<Serie> dark = {};

    dark.push_back(episode21);
    dark.push_back(episode22);
    dark.push_back(episode23);

    Serie episode31(3101,"Good News About Hell", 57, "Mystery", 4, {4},1,1,"Severance",3000,9,1);
    Serie episode32(3102,"Half Loop", 53, "Mystery", 4, {4},2,1,"Severance",3000,9,1);
    Serie episode33(3103,"In Perpetuity", 56, "Mystery", 4, {4},3,1,"Severance",3000,9,1);

    std::vector<Serie> severance = {};

    severance.push_back(episode31);
    severance.push_back(episode32);
    severance.push_back(episode33);

    Serie episode41(4201,"Ave Machina", 44, "Science Fiction",4,{4},1,2,"Travelers",4000,12,3);
    Serie episode42(4202,"Protocol 4", 45, "Science Fiction",3,{3},2,2,"Travelers",4000,12,3);
    Serie episode43(4203,"Jacob", 44, "Science Fiction",4,{4},3,2,"Travelers",4000,12,3);

    std::vector<Serie> travelers = {};

    travelers.push_back(episode41);
    travelers.push_back(episode42);
    travelers.push_back(episode43);

    Serie episode51(5101,"Standing Up in the Milky Way", 44, "Documental",4,{4},1,1,"Cosmos",5000,13,1);
    Serie episode52(5102,"Some of the Things that Molecules Do", 44, "Documental",5,{5},2,1,"Cosmos",5000,13,1);
    Serie episode53(5103,"When Knowledge Conquered Fear", 44, "Documental",5,{5},3,1,"Cosmos",5000,13,1);

    std::vector<Serie> cosmos = {};

    cosmos.push_back(episode51);
    cosmos.push_back(episode52);
    cosmos.push_back(episode53);

    std::vector<std::vector<Serie>> series = {};

    series.push_back(theOffice);
    series.push_back(dark);
    series.push_back(severance);
    series.push_back(travelers);
    series.push_back(cosmos);

    while(true){

        system("clear");

        std::cout << "                                                                      Welcome to Xtreaming                                                                      " << std::endl << std::endl;

        std::cout << "          @                                                       @                            @                                                       @          " << std::endl;     
        std::cout << "         *@                                                       @                            @                                                       @=         " << std::endl;     
        std::cout << "      @@@@@                  @@@@@@@@   @@@@@@@                   @@@@@                    @@@@@.                       @@@@@@@-                       @@@@@      " << std::endl;     
        std::cout << "          @                   @@@@@@@: :@@@@@@@                   @                            @.                      @@@@                            @          " << std::endl;     
        std::cout << "      :  @@                   @@@@@@@@ @@@@@@@@                   @*  %                    @  #@.                       @@@@@@@                        @@  :      " << std::endl;     
        std::cout << "      @@@@@                   @@@@ @@@@@@ =@@@@                   @@@@@                    @@@@@.                          =@@@@                       @@@@@      " << std::endl;     
        std::cout << "     @    @                   @@@@ @@@@@- =@@@@                   @    +                  =    @.                      +@@@@@@@@                       @    @     " << std::endl;     
        std::cout << "      @@@@@                   @@@@  @@@@  @@@@@                   @@@@@                    @@@@@                         *@@@=                         @@@@@      " << std::endl;     
        std::cout << "         @@                  @@@@@  .@@  =@@@@@                   @                        .   @                                                       @#         " << std::endl;     
        std::cout << "          @                                                       @                            @                                                       @          " << std::endl;     
        std::cout << "      @@@@@                                                       @@@@@                    @@@@@.                      @@@@@@@@@                       @@@@@      " << std::endl;     
        std::cout << "          @                         @@@@@                         @                            @                        @@@  +@@                       @          " << std::endl;     
        std::cout << "      @:-@@                      @@@@@@@@@@#                      @@::@                    @.:@@.                       @@@@.                          @@::@      " << std::endl;     
        std::cout << "      @@@@@                     -@@@@   @@@@                      @@@@@                    @@@@@.                       @@@  *@@                       @@@@@      " << std::endl;     
        std::cout << "          @                     @@@@@   @@@@*                     @                            @                       @@@@@@@@@                       @          " << std::endl;     
        std::cout << "      @@@@@                     @@@@@   @@@@+                     @@@@@                    @@@@@.                                                      @@@@@      " << std::endl;     
        std::cout << "      @**@@                     .@@@@   @@@@                      @@+=@                    @**@@                                                       @@=+@      " << std::endl;     
        std::cout << "          @                      @@@@@@@@@@                       @                            @                                                       @          " << std::endl;     
        std::cout << "      @@@@@                          #@+                          @@@@@                    @@@@@.                      @@@@@@@@@                       @@@@@      " << std::endl;     
        std::cout << "         =@                                                       @                            @                       @@@@  @@@                       @:         " << std::endl;     
        std::cout << "         -@                                                       @                            @                       @@@@@@@@                        @.         " << std::endl;     
        std::cout << "      @@@@@                     @@@@@@ +@@@@#                     @@@@@                    @@@@@                       @@@@  @@@                       @@@@@      " << std::endl;     
        std::cout << "          @                      @@@@.  @@@@                      @                            @                      +@@@@@ @@@@                      @          " << std::endl;     
        std::cout << "      -  @@                      @@@@@  @@@                       @*  @                    @  #@.                                                      @@  -      " << std::endl;     
        std::cout << "      @@@@@                       @@@@ :@@@                       @@@@@                    @@@@@.                                                      @@@@@      " << std::endl;     
        std::cout << "          @                       .@@@@@@@                        @                            @.                         ====                         @          " << std::endl;     
        std::cout << "      @@@@@                        @@@@@@@                        @@@@@                    @@@@@.                         @@@@                         @@@@@      " << std::endl;     
        std::cout << "     .*  @@                         @@@@@                         @%  @                    @  @@.                         @@@-                         @@  *      " << std::endl;     
        std::cout << "     @    @                                                       @                            @                          @@@-                         @    #     " << std::endl;     
        std::cout << "      @@@@@                                                       @@@@@                    @@@@@                          @@@-                         @@@@@      " << std::endl;     
        std::cout << "          @                                                       @                            @                         @@@@@                         @          " << std::endl;     
        std::cout << "         @@                        @@@@@@                         @   .                    :   @.                                                      @%         " << std::endl;     
        std::cout << "      @@@@@                         @@@@:                         @@@@@                    @@@@@.                                                      @@@@@      " << std::endl;     
        std::cout << "          @                         @@@@:                         @                            @                       @@@@@@@@@                       @          " << std::endl;     
        std::cout << "      @@@@@                         @@@@:                         @@@@@                    @@@@@.                       @@@. @@@                       @@@@@      " << std::endl;     
        std::cout << "      @@@@@                         @@@@:                         @@@@@                    @@@@@.                       @@@                            @@@@@      " << std::endl;     
        std::cout << "          @                        @@@@@@                         @                            @                        @@@**                           @          " << std::endl;     
        std::cout << "      @@@@@                         .....                         @@@@@                    @@@@@.                       @@@  *@@                       @@@@@      " << std::endl;     
        std::cout << "         @@                                                       @   .                    :   @                       @@@@@@@@@                       @#         " << std::endl;     
        std::cout << "          @                                                       @                            @                                                       @          " << std::endl;     
        std::cout << "      @@@@@                      @@@@@@@@@@@                      @@@@@                    @@@@@                                                       @@@@@      " << std::endl;     
        std::cout << "          @                       @@@@  :@@@                      @                            @                        +@@@@@@                        @          " << std::endl;     
        std::cout << "         @@                       @@@@   ##+                      @:  +                    *  -@                       @@@@  @@-                       @@         " << std::endl;     
        std::cout << "      @@@@@                       @@@@@                           @@@@@                    @@@@@                       .@@@@@.                         @@@@@      " << std::endl;     
        std::cout << "          @                       @@@@   @@@                      @                            @                         .@@@@@@                       @          " << std::endl;     
        std::cout << "      @@@@@                       @@@@  -@@@                      @@@@@                    @@@@@.                       @@  @@@@                       @@@@@      " << std::endl;     
        std::cout << "      @@@@@                      @@@@@@@@@@@                      @@%@@                    @@@@@.                      -@@@@@@@                        @@%@@      " << std::endl;     
        std::cout << "          @                                                       @                            @.                                                      @          " << std::endl;     
        std::cout << "      @@@@@                                                       @@@@@                    @@@@@                                                       @@@@@      " << std::endl;  

        std::cout << "                              1. Movie Catalog                                                                     2. Series Catalog                              " << std::endl << std:: endl;
    
        std::cout << "Select an option: ";
        std::cin >> start;
        std::cout << std::endl;

        if(start == "1"){

            system("clear");

            std::cout << "This are the movies available:" << std::endl;

            std::cout << std::endl;

            for(int i = 0; i < movies.size(); i = i + 1){

                movies[i].showInfoMovie();

            }

            std::cout << "What would you like to do?" << std::endl;

            std::cout << "1. Score a movie" << std::endl;
            std::cout << "2. Compare a movie" << std::endl;
            std::cout << "3. Add a movie" << std::endl;
            std::cout << "4. Search movies by genre" << std::endl;
            std::cout << "5. Go back" << std::endl;
            std::cout << "Select an option: ";
            std::cin >> start;

            if(start == "1"){

                system("clear");
                
                for(int i = 0; i < movies.size(); i = i + 1){

                movies[i].showInfoMovie();

                }

                std::cout << "Write the ID of the movie to score: ";
                std::cin >> index;
                std::cout << std::endl;

                if(index <= movies.size() && index > 0){

                    system("clear");

                    std::cout << "Movie to score:" << std::endl;

                    std::cout << std::endl;

                    movies[index-1].showInfoMovie();

                    std::cout << "Give a score from 1 to 5: ";
                    std::cin >> sco;
                    std::cout << std::endl;

                    if(sco > 0 && sco < 6){

                        movies[index-1].updateScore(sco);

                        std::cout << "Press any key to go back: ";
                        std::cin >> start;
                        std::cout << std::endl;

                    }
                    else{

                        system("clear");

                        std::cout << "Invalid selection" << std::endl;
                        std::cin >> start;
                        std::cout << std::endl;

                    }

                }
                else{

                    system("clear");

                    std::cout << "Invalid selection" << std::endl;
                    std::cin >> start;
                    std::cout << std::endl;

                }

            }
            else if(start == "2"){

                system("clear");
                
                for(int i = 0; i < movies.size(); i = i + 1){

                    movies[i].showInfoMovie();

                }

                std::cout << "What would you like to do?" << std::endl << std::endl;

                std::cout << "1. See best rated movie" << std::endl;
                std::cout << "2. Compare 2 scores" << std::endl;
                std::cout << "3. Go back" << std::endl;
                std::cout << "Select an option: ";
                std::cin >> start;

                if(start == "1"){

                    std::vector<Video> bestMovies = movies; 

                    std::sort(bestMovies.begin(), bestMovies.end());

                    system("clear");

                    std::cout << "This are the best rated movies" << std::endl << std::endl;

                    for(int i = 0; i < bestMovies.size(); i = i + 1){

                        if(bestMovies[i] == bestMovies[bestMovies.size()-1]){
                            bestMovies[i].showInfoMovie();
                        }

                    }

                    std::cout << "Press any key to go back: ";
                    std::cin >> start;
                    std::cout << std::endl;

                }
                else if(start == "2"){

                    system("clear");

                    for(int i = 0; i < movies.size(); i = i + 1){

                    movies[i].showInfoMovie();

                    }

                    int Comp1 = 0;
                    int Comp2 = 0;

                    std::cout << "Write the ID of the first movie to compare: ";
                    std::cin >> Comp1;
                    std::cout << std::endl << std::endl;

                    if(Comp1 <= movies.size() && Comp1 > 0){

                    }
                    else{

                        system("clear");

                        std::cout << "Invalid selection" << std::endl;
                        std::cin >> start;
                        std::cout << std::endl;

                        break;

                    }

                    std::cout << "Write the ID of the second movie to compare: ";
                    std::cin >> Comp2;
                    std::cout << std::endl;

                    if(Comp2 <= movies.size() && Comp2 > 0){

                    }
                    else{

                        system("clear");

                        std::cout << "Invalid selection" << std::endl;
                        std::cin >> start;
                        std::cout << std::endl;

                        break;

                    }

                    system("clear");

                    if(movies[Comp1-1] > movies[Comp2-1]){

                        std::cout << "This is the best rated movie" << std::endl << std::endl;

                        movies[Comp1-1].showInfoMovie();

                        std::cout << "Press any key to go back: ";
                        std::cin >> start;
                        std::cout << std::endl;

                    }
                    else if(movies[Comp1-1] < movies[Comp2-1]){

                        std::cout << "This is the best rated movie" << std::endl << std::endl;

                        movies[Comp2-1].showInfoMovie();

                        std::cout << "Press any key to go back: ";
                        std::cin >> start;
                        std::cout << std::endl;

                    }
                    else{

                        std::cout << "The scores are the same for both of the movies" << std::endl << std::endl;

                        movies[Comp1-1].showInfoMovie();
                        movies[Comp2-1].showInfoMovie();

                        std::cout << "Press any key to go back: ";
                        std::cin >> start;
                        std::cout << std::endl;

                    }

                }
                else if(start == "3"){

                }
                else{

                system("clear");

                std::cout << "Invalid selection" << std::endl;
                std::cin >> start;
                std::cout << std::endl;

                }

            }
            else if(start == "3"){

                system("clear");

                int ID;
                std::string Name;
                int Duration;
                std::string Genre;
                int Score;

                ID = movies.size()+1;

                std::cout << "Write the new movie information" << std::endl << std::endl;

                std::cout << "Name: ";
                
                getline(std::cin >> std::ws, Name);

                std::cout << std::endl;
                std::cout << "Duration: ";
                std::cin >> Duration;
                std::cout << std::endl;
                std::cout << "\t1. Adventure" << std::endl;
                std::cout << "\t2. Comedy" << std::endl;
                std::cout << "\t3. Science Fiction" << std::endl;
                std::cout << "\t4. Action" << std::endl;
                std::cout << "\t5. Documental" << std::endl;
                std::cout << "\t6. Mystery" << std::endl;
                std::cout << std::endl;
                std::cout << "Genre: ";
                std::cin >> start;
                std::cout << std::endl;
                std::cout << "Score from 1 to 5: ";
                std::cin >> Score;
                std::cout << std::endl;

                if(start == "1"){
                    Genre = "Adventure";
                }
                else if(start == "2"){
                    Genre = "Comedy";
                }
                else if(start == "3"){
                    Genre = "Science Fiction";
                }
                else if(start == "4"){
                    Genre = "Action";
                }
                else if(start == "5"){
                    Genre = "Documental";
                }
                else if(start == "6"){
                    Genre = "Mystery";
                }
                else{

                    system("clear");

                    std::cout << "Invalid selection" << std::endl;
                    std::cin >> start;
                    std::cout << std::endl;

                }

                if(Score > 0 && Score < 6){

                    Video newpelicula(ID,Name,Duration,Genre,Score,{Score});

                    movies.push_back(newpelicula);

                    std::cout << std::endl;
                    std::cout << "Your movie was added" << std::endl;

                    movies[movies.size()-1].showInfoMovie();

                    std::cout << "Press any key to go back: ";
                    std::cin >> start;
                    std::cout << std::endl;

                }
                else{

                    system("clear");

                    std::cout << "Invalid selection" << std::endl;
                    std::cin >> start;
                    std::cout << std::endl;

                }

            }
            else if(start == "4"){

                system("clear");

                std::cout << "                    #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                 -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-                 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#                    " << std::endl;
                std::cout << "                   @=                              @+              @@                              @@              *@                              =@                   " << std::endl;
                std::cout << "                  +@                               *@             .@:                              .@.             @*              +#-              @+                  " << std::endl;
                std::cout << "                  +@                         .     *@             .@:             -**+-            .@.             @+            +@. +@             @+                  " << std::endl;
                std::cout << "                  +@                     @@@@@     *@             .@:         @@@@@=:=@@@@@        .@.             @+           :@    =@            @+                  " << std::endl;
                std::cout << "                  +@                   =@@@@@:     *@             .@:       @@@           @@@      .@.             @+     =#@@@+@-     @%+#$#*.     @+                  " << std::endl;
                std::cout << "                  +@                  @@@@@@       *@             .@:      @@               @@     .@.             @+   :@.  * =@@@@@@@@@     #@    @+                  " << std::endl;
                std::cout << "                  +@                @@@@@@         *@             .@:     @@ @@@@@@  :@@@@@@:@@    .@.             @+    @.    #@@+   @@@     @#    @+                  " << std::endl;
                std::cout << "                  +@              +@@@@@           *@             .@:    -@@*@-   @@ @@   +@-@@    .@.             @+     @# @@@% .@@%  @@@+:@@+    @+                  " << std::endl;
                std::cout << "                  +@             @@@@@             *@             .@:    -@#                 *@.   .@.             @+      @@% *# @@@@: @. @@*      @+                  " << std::endl;
                std::cout << "                  +@       @@@ +@@@@               *@             .@:    .@@   @@@@@@@@@@@   @@    .@.             @+    %@   %@@   .   @@=  =@.    @+                  " << std::endl;
                std::cout << "                  +@         @@@.+                 *@             .@:     %@=  @@       @@  *@*    .@.             @+   -@     +@#@@*@@*@     :@    @+                  " << std::endl;
                std::cout << "                  +@        @@@@@*                 *@             .@:      #@@  @@@: :@@@  @@@     .@.             @+    @@*=+#@@@@- *@@@@*==%@+    @+                  " << std::endl;
                std::cout << "                  +@     .@@@*   @=                *@             .@:        @@@. -%@%- :@@@       .@.             @+           @*    *@=           @+                  " << std::endl;
                std::cout << "                  +@     @@@                       *@             .@:          *@@@@@@@@@*         .@.             @+            @:   @@=           @+                  " << std::endl;
                std::cout << "                  +@                               *@             .@:                              .@.             @+             @@%@+             @+                  " << std::endl;
                std::cout << "                  =@                               %@              @-                              -@              @#                               @=                  " << std::endl;
                std::cout << "                   %@:                            @@               =@+                            =@+               @@                            :@%                   " << std::endl;
                std::cout << "                     -@@@@@@@@@@@@@@@@@@@@@@@@@@@*                    %@@@@@@@@@@@@@@@@@@@@@@@@@@%                    *@@@@@@@@@@@@@@@@@@@@@@@@@@@-                     " << std::endl;
                std::cout << "                                                                                                                                                                        " << std::endl;
                std::cout << "                             1. Adventure                                      2. Comedy                                   3. Ciencia Ficción                           " << std::endl;
                std::cout << "                                                                                                                                                                        " << std::endl;
                std::cout << "                                                                                                                                                                        " << std::endl;
                std::cout << "                     +@@@@@@@@@@@@@@@@@@@@@@@@@@@#.                  -%@@@@@@@@@@@@@@@@@@@@@@@@@@%-                  .#@@@@@@@@@@@@@@@@@@@@@@@@@@@+                     " << std::endl;
                std::cout << "                   @@                             #@:              #@.                            .@%              :@#                             @@                   " << std::endl;
                std::cout << "                  +@                      :@=      #@              @-                              :@              @#           .#@@@@@+            @=                  " << std::endl;
                std::cout << "                  +@                   :@@@@@:     *@             .@:               :=:            .@.             @+         +@@@@@@@@@@@          @+                  " << std::endl;
                std::cout << "                  +@                #@@@@@@@@%     *@             .@:     #@@@    @@@@@@@          .@.             @+        @@@@@@@@@@@@@@=        @+                  " << std::endl;
                std::cout << "                  +@             %@@@@@@@@%.       *@             .@:    @@@@@@+ @@@@@@@@@         .@.             @+       =@@@@-     @@@@@        @+                  " << std::endl;
                std::cout << "                  +@         .@@@@@@@@@@           *@             .@:    @@@@@@@ #@@@@@@@*         .@.             @+       %@@@@       @@@@-       @+                  " << std::endl;
                std::cout << "                  +@      #@@@@@@@@@# #            *@             .@:    :@@@@*   .@@@@@           .@.             @+        *@*       @@@@@        @+                  " << std::endl;
                std::cout << "                  +@   %@@@@@@@@@@@   -@           *@             .@:                              .@.             @+              +@@@@@@@-        @+                  " << std::endl;
                std::cout << "                  +@    @@@@@@@@@@%@@+             *@             .@:                              .@.             @+             @@@@@@@@          @+                  " << std::endl;
                std::cout << "                  +@      .@@@@@@@                 *@             .@:   .@@@@@@@@@@@@@@@    *@@:   .@.             @+             @@@@@:            @+                  " << std::endl;
                std::cout << "                  +@       +@@@@@@.                *@             .@:   .@@@@@@@@@@@@@@@   @@@@:   .@.             @+             @@@@*             @+                  " << std::endl;
                std::cout << "                  +@        @@@@@@                 *@             .@:   .@@@@@@@@@@@@@@@   @@@@:   .@.             @+             @@@@+             @+                  " << std::endl;
                std::cout << "                  +@       -@@@@@@=                *@             .@:   .@@@@@@@@@@@@@@@   @@@@:   .@.             @+              =#:              @+                  " << std::endl;
                std::cout << "                  +@       =@@@@@@@                *@             .@:   .@@@@@@@@@@@@@@@   :@@@:   .@.             @+               .               @+                  " << std::endl;
                std::cout << "                  +@       .@@@@@@@                *@             .@:   .@@@@@@@@@@@@@@@     =@:   .@.             @+             @@@@=             @+                  " << std::endl;
                std::cout << "                  +@        =+@@.                  *@              @:                              .@              @*             *@@@              @+                  " << std::endl;
                std::cout << "                   @*                             .@=              @@                              @@              +@.                             *@                   " << std::endl;
                std::cout << "                    +@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=                    " << std::endl;
                std::cout << "                                                                                                                                                                        " << std::endl;
                std::cout << "                               4. Action                                     5. Documental                                     6. Misterio                              " << std::endl;
                std::cout << std::endl;

                std::cout << "Select a genre to search: ";
                std::cin >> start;
                std::cout << std::endl;

                std::string genero;

                if(start == "1"){
                    genero = "Adventure";
                }
                else if(start == "2"){
                    genero = "Comedy";
                }
                else if(start == "3"){
                    genero = "Science Fiction";
                }
                else if(start == "4"){
                    genero = "Action";
                }
                else if(start == "5"){
                    genero = "Documental";
                }
                else if(start == "6"){
                    genero = "Mystery";
                }
                else{

                    system("clear");

                    std::cout << "Invalid selection" << std::endl;
                    std::cin >> start;
                    std::cout << std::endl;

                }

                system("clear");

                for(int i = 0; i < movies.size(); i = i + 1){

                    if(movies[i].getGenre() == genero){

                        movies[i].showInfoMovie();

                    }
                }

                std::cout << "Press any key to go back: ";
                std::cin >> start;
                std::cout << std::endl;

            }
            else if(start == "5"){

            }
            else{

                system("clear");

                std::cout << "Invalid selection" << std::endl;
                std::cin >> start;
                std::cout << std::endl;

            }
        }
        else if(start == "2"){
        
            system("clear");

            std::cout << "This are the series available:" << std::endl;

            std::cout << std::endl;

            for(int i = 0; i < series.size(); i = i + 1){

                std::vector<Serie> aux = series[i];

                for(int j = 0; j < 1; j = j + 1){

                    aux[j].showInfoSerie();

                }

            }

            int indexSeries;

            std::cout << "What would you like to do?" << std::endl;

            std::cout << "1. See the episodes of a series" << std::endl;
            std::cout << "2. Add a series" << std::endl;
            std::cout << "3. Go back" << std::endl;
            std::cout << "Select an option: ";
            std::cin >> start;
            std::cout << std::endl;

            if(start == "1"){

                system("clear");

                std::cout << "This are the series available:" << std::endl;

                std::cout << std::endl;

                for(int i = 0; i < series.size(); i = i + 1){

                    std::vector<Serie> aux = series[i];

                    for(int j = 0; j < 1; j = j + 1){

                        aux[j].showInfoSerie();

                    }

                }

                std::cout << "Write the first digit of the ID of the series from which you want to watch the episodes: ";
                std::cin >> indexSeries;

                if(indexSeries <= series.size()){

                    std::vector<Serie> serie;

                    serie = series[indexSeries-1];

                    system("clear");

                    std::cout << "This are the episodes available:" << std::endl;

                    std::cout << std::endl;

                    for(int i = 0; i < serie.size(); i = i + 1){

                        serie[i].showInfoMovie();

                    }

                    std::cout << "What would you like to do?" << std::endl;

                    std::cout << "1. Score episodes" << std::endl;
                    std::cout << "2. Compare episodes" << std::endl;
                    std::cout << "3. Add episodes of the same season" << std::endl;
                    std::cout << "4. Search epsisodes by genre" << std::endl;
                    std::cout << "5. Go back" << std::endl;
                    std::cout << "Select an option: ";
                    std::cin >> start;

                    if(start == "1"){

                        system("clear");
                    
                        for(int i = 0; i < serie.size(); i = i + 1){

                            serie[i].showInfoMovie();

                        }

                        std::cout << "Write the last digit of the ID of the episode you would like to score: ";
                        std::cin >> index;
                        std::cout << std::endl;

                        if(index <= serie.size() && index > 0){

                            system("clear");

                            std::cout << "Episode to score:" << std::endl;

                            std::cout << std::endl;

                            serie[index-1].showInfoMovie();

                            std::cout << "Write a score from 1 to 5: ";
                            std::cin >> sco;
                            std::cout << std::endl;

                            if(sco > 0 && sco < 6){

                                serie[index-1].updateScore(sco);

                                series[indexSeries-1] = serie;

                                std::cout << "Press any key to go back: ";
                                std::cin >> start;
                                std::cout << std::endl;

                            }
                            else{

                                system("clear");

                                std::cout << "Invalid selection" << std::endl;
                                std::cin >> start;
                                std::cout << std::endl;

                            }

                        }
                        else{

                            system("clear");

                            std::cout << "Invalid selection" << std::endl;
                            std::cin >> start;
                            std::cout << std::endl;

                        }

                    }
                    else if(start == "2"){

                            system("clear");
                    
                        for(int i = 0; i < serie.size(); i = i + 1){

                            serie[i].showInfoMovie();

                        }

                        std::cout << "What would you like to do?" << std::endl << std::endl;

                        std::cout << "1. See the best rated episode" << std::endl;
                        std::cout << "2. Compare two scores" << std::endl;
                        std::cout << "3. Go back" << std::endl;
                        std::cout << "Select an option: ";
                        std::cin >> start;

                        if(start == "1"){

                            std::vector<Serie> bestEpisodes = serie; 

                            std::sort(bestEpisodes.begin(), bestEpisodes.end());

                            system("clear");

                            std::cout << "This are the best rated episodes" << std::endl << std::endl;

                            for(int i = 0; i < bestEpisodes.size(); i = i + 1){

                                if(bestEpisodes[i] == bestEpisodes[bestEpisodes.size()-1]){
                                    bestEpisodes[i].showInfoMovie();
                                }

                            }

                            std::cout << "Press any key to go back: ";
                            std::cin >> start;
                            std::cout << std::endl;

                        }
                        else if(start == "2"){

                            system("clear");

                            for(int i = 0; i < serie.size(); i = i + 1){

                            serie[i].showInfoMovie();

                            }

                            int Comp1 = 0;
                            int Comp2 = 0;

                            std::cout << "Write the last digit of the ID of the first episode you would like to compare: ";
                            std::cin >> Comp1;
                            std::cout << std::endl << std::endl;

                            if(Comp1 <= serie.size() && Comp1 > 0){

                            }
                            else{

                                system("clear");

                                std::cout << "Invalid selection" << std::endl;
                                std::cin >> start;
                                std::cout << std::endl;

                                break;

                            }

                            std::cout << "Write the last digit of the ID of the second episode you would like to compare: ";
                            std::cin >> Comp2;
                            std::cout << std::endl;

                            if(Comp2 <= serie.size() && Comp2 > 0){

                            }
                            else{

                                system("clear");

                                std::cout << "Invalid selection" << std::endl;
                                std::cin >> start;
                                std::cout << std::endl;

                                break;

                            }

                            system("clear");

                            if(serie[Comp1-1] > serie[Comp2-1]){

                                std::cout << "This is the best rated episode" << std::endl << std::endl;

                                serie[Comp1-1].showInfoMovie();

                                std::cout << "Press any key to go back: ";
                                std::cin >> start;
                                std::cout << std::endl;

                            }
                            else if(serie[Comp1-1] < serie[Comp2-1]){

                                std::cout << "This is the best rated episode" << std::endl << std::endl;

                                serie[Comp2-1].showInfoMovie();

                                std::cout << "Press any key to go back: ";
                                std::cin >> start;
                                std::cout << std::endl;

                            }
                            else{

                                std::cout << "The scores from both episodes are the same" << std::endl << std::endl;

                                serie[Comp1-1].showInfoMovie();
                                serie[Comp2-1].showInfoMovie();

                                std::cout << "Press any key to go back: ";
                                std::cin >> start;
                                std::cout << std::endl;

                            }

                        }
                        else{

                        system("clear");

                        std::cout << "Invalid selection" << std::endl;
                        std::cin >> start;
                        std::cout << std::endl;

                        }

                    }
                    else if(start == "3"){

                        system("clear");

                        int ID;
                        std::string Name;
                        int Duration;
                        std::string Genre;
                        int Score;
                        int NumEpisode;
                        int NumSeason;
                        std::string NameSeries;
                        int IDSeries;
                        int NumOfEpi;
                        int NumOfSea;

                        IDSeries = serie[serie.size()-1].getIDSeries();
                        NameSeries = serie[serie.size()-1].getNameSeries();
                        NumSeason = serie[serie.size()-1].getNumSeason();

                        std::cout << "Add the information of the episode from the series" << std::endl << std::endl;
                        
                        std::cout << "Name of the episode: ";

                        getline(std::cin >> std::ws, Name);

                        std::cout << std::endl;
                        std::cout << "Number of the episode: ";
                        std::cin >> NumEpisode;
                        std::cout << std::endl;
                        std::cout << "Duration: ";
                        std::cin >> Duration;
                        std::cout << std::endl;
                        std::cout << "\t1. Adventure" << std::endl;
                        std::cout << "\t2. Comedy" << std::endl;
                        std::cout << "\t3. Science Fiction" << std::endl;
                        std::cout << "\t4. Action" << std::endl;
                        std::cout << "\t5. Documental" << std::endl;
                        std::cout << "\t6. Mystery" << std::endl;
                        std::cout << std::endl;
                        std::cout << "Genre: ";
                        std::cin >> start;
                        std::cout << std::endl;
                        std::cout << "Score from 1 to 5: ";
                        std::cin >> Score;
                        std::cout << std::endl;

                        if(start == "1"){
                            Genre = "Adventure";
                        }
                        else if(start == "2"){
                            Genre = "Comedy";
                        }
                        else if(start == "3"){
                            Genre = "Science Fiction";
                        }
                        else if(start == "4"){
                            Genre = "Action";
                        }
                        else if(start == "5"){
                            Genre = "Documental";
                        }
                        else if(start == "6"){
                            Genre = "Mystery";
                        }
                        else{

                            system("clear");

                            std::cout << "Invalid selection" << std::endl;
                            std::cin >> start;
                            std::cout << std::endl;

                        }

                        if(Score > 0 && Score < 6){

                            ID = IDSeries + NumSeason*100 + NumEpisode;

                            Serie newSeries(ID,Name,Duration,Genre,Score,{Score},NumEpisode,NumSeason,NameSeries,IDSeries,NumOfEpi,NumOfSea);

                            serie.push_back(newSeries);

                            std::cout << std::endl;
                            std::cout << "Your episode was added" << std::endl;

                            serie[serie.size()-1].showInfoMovie();

                            series[indexSeries-1] = serie;

                            std::cout << "Press any key to go back: ";
                            std::cin >> start;
                            std::cout << std::endl;

                        }
                        else{

                            system("clear");

                            std::cout << "Invalid selection" << std::endl;
                            std::cin >> start;
                            std::cout << std::endl;

                        }

                    }
                    else if(start == "4"){

                        system("clear");

                        std::cout << "                    #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                 -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-                 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#                    " << std::endl;
                        std::cout << "                   @=                              @+              @@                              @@              *@                              =@                   " << std::endl;
                        std::cout << "                  +@                               *@             .@:                              .@.             @*              +#-              @+                  " << std::endl;
                        std::cout << "                  +@                         .     *@             .@:             -**+-            .@.             @+            +@. +@             @+                  " << std::endl;
                        std::cout << "                  +@                     @@@@@     *@             .@:         @@@@@=:=@@@@@        .@.             @+           :@    =@            @+                  " << std::endl;
                        std::cout << "                  +@                   =@@@@@:     *@             .@:       @@@           @@@      .@.             @+     =#@@@+@-     @%+#$#*.     @+                  " << std::endl;
                        std::cout << "                  +@                  @@@@@@       *@             .@:      @@               @@     .@.             @+   :@.  * =@@@@@@@@@     #@    @+                  " << std::endl;
                        std::cout << "                  +@                @@@@@@         *@             .@:     @@ @@@@@@  :@@@@@@:@@    .@.             @+    @.    #@@+   @@@     @#    @+                  " << std::endl;
                        std::cout << "                  +@              +@@@@@           *@             .@:    -@@*@-   @@ @@   +@-@@    .@.             @+     @# @@@% .@@%  @@@+:@@+    @+                  " << std::endl;
                        std::cout << "                  +@             @@@@@             *@             .@:    -@#                 *@.   .@.             @+      @@% *# @@@@: @. @@*      @+                  " << std::endl;
                        std::cout << "                  +@       @@@ +@@@@               *@             .@:    .@@   @@@@@@@@@@@   @@    .@.             @+    %@   %@@   .   @@=  =@.    @+                  " << std::endl;
                        std::cout << "                  +@         @@@.+                 *@             .@:     %@=  @@       @@  *@*    .@.             @+   -@     +@#@@*@@*@     :@    @+                  " << std::endl;
                        std::cout << "                  +@        @@@@@*                 *@             .@:      #@@  @@@: :@@@  @@@     .@.             @+    @@*=+#@@@@- *@@@@*==%@+    @+                  " << std::endl;
                        std::cout << "                  +@     .@@@*   @=                *@             .@:        @@@. -%@%- :@@@       .@.             @+           @*    *@=           @+                  " << std::endl;
                        std::cout << "                  +@     @@@                       *@             .@:          *@@@@@@@@@*         .@.             @+            @:   @@=           @+                  " << std::endl;
                        std::cout << "                  +@                               *@             .@:                              .@.             @+             @@%@+             @+                  " << std::endl;
                        std::cout << "                  =@                               %@              @-                              -@              @#                               @=                  " << std::endl;
                        std::cout << "                   %@:                            @@               =@+                            =@+               @@                            :@%                   " << std::endl;
                        std::cout << "                     -@@@@@@@@@@@@@@@@@@@@@@@@@@@*                    %@@@@@@@@@@@@@@@@@@@@@@@@@@%                    *@@@@@@@@@@@@@@@@@@@@@@@@@@@-                     " << std::endl;
                        std::cout << "                                                                                                                                                                        " << std::endl;
                        std::cout << "                             1. Adventure                                      2. Comedy                                   3. Science Fiction                           " << std::endl;
                        std::cout << "                                                                                                                                                                        " << std::endl;
                        std::cout << "                                                                                                                                                                        " << std::endl;
                        std::cout << "                     +@@@@@@@@@@@@@@@@@@@@@@@@@@@#.                  -%@@@@@@@@@@@@@@@@@@@@@@@@@@%-                  .#@@@@@@@@@@@@@@@@@@@@@@@@@@@+                     " << std::endl;
                        std::cout << "                   @@                             #@:              #@.                            .@%              :@#                             @@                   " << std::endl;
                        std::cout << "                  +@                      :@=      #@              @-                              :@              @#           .#@@@@@+            @=                  " << std::endl;
                        std::cout << "                  +@                   :@@@@@:     *@             .@:               :=:            .@.             @+         +@@@@@@@@@@@          @+                  " << std::endl;
                        std::cout << "                  +@                #@@@@@@@@%     *@             .@:     #@@@    @@@@@@@          .@.             @+        @@@@@@@@@@@@@@=        @+                  " << std::endl;
                        std::cout << "                  +@             %@@@@@@@@%.       *@             .@:    @@@@@@+ @@@@@@@@@         .@.             @+       =@@@@-     @@@@@        @+                  " << std::endl;
                        std::cout << "                  +@         .@@@@@@@@@@           *@             .@:    @@@@@@@ #@@@@@@@*         .@.             @+       %@@@@       @@@@-       @+                  " << std::endl;
                        std::cout << "                  +@      #@@@@@@@@@# #            *@             .@:    :@@@@*   .@@@@@           .@.             @+        *@*       @@@@@        @+                  " << std::endl;
                        std::cout << "                  +@   %@@@@@@@@@@@   -@           *@             .@:                              .@.             @+              +@@@@@@@-        @+                  " << std::endl;
                        std::cout << "                  +@    @@@@@@@@@@%@@+             *@             .@:                              .@.             @+             @@@@@@@@          @+                  " << std::endl;
                        std::cout << "                  +@      .@@@@@@@                 *@             .@:   .@@@@@@@@@@@@@@@    *@@:   .@.             @+             @@@@@:            @+                  " << std::endl;
                        std::cout << "                  +@       +@@@@@@.                *@             .@:   .@@@@@@@@@@@@@@@   @@@@:   .@.             @+             @@@@*             @+                  " << std::endl;
                        std::cout << "                  +@        @@@@@@                 *@             .@:   .@@@@@@@@@@@@@@@   @@@@:   .@.             @+             @@@@+             @+                  " << std::endl;
                        std::cout << "                  +@       -@@@@@@=                *@             .@:   .@@@@@@@@@@@@@@@   @@@@:   .@.             @+              =#:              @+                  " << std::endl;
                        std::cout << "                  +@       =@@@@@@@                *@             .@:   .@@@@@@@@@@@@@@@   :@@@:   .@.             @+               .               @+                  " << std::endl;
                        std::cout << "                  +@       .@@@@@@@                *@             .@:   .@@@@@@@@@@@@@@@     =@:   .@.             @+             @@@@=             @+                  " << std::endl;
                        std::cout << "                  +@        =+@@.                  *@              @:                              .@              @*             *@@@              @+                  " << std::endl;
                        std::cout << "                   @*                             .@=              @@                              @@              +@.                             *@                   " << std::endl;
                        std::cout << "                    +@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=                    " << std::endl;
                        std::cout << "                                                                                                                                                                        " << std::endl;
                        std::cout << "                               4. Action                                     5. Documental                                     6. Mystery                              " << std::endl;
                        std::cout << std::endl;

                        std::cout << "Select a genre to search: ";
                        std::cin >> start;
                        std::cout << std::endl;

                        std::string genero;

                        if(start == "1"){
                            genero = "Adventure";
                        }
                        else if(start == "2"){
                            genero = "Comedy";
                        }
                        else if(start == "3"){
                            genero = "Science Fiction";
                        }
                        else if(start == "4"){
                            genero = "Action";
                        }
                        else if(start == "5"){
                            genero = "Documental";
                        }
                        else if(start == "6"){
                            genero = "Mystery";
                        }
                        else{

                            system("clear");

                            std::cout << "Invalid selection" << std::endl;
                            std::cin >> start;
                            std::cout << std::endl;

                        }

                        system("clear");

                        for(int i = 0; i < serie.size(); i = i + 1){

                            if(serie[i].getGenre() == genero){

                                serie[i].showInfoMovie();

                            }
                        }

                        std::cout << "Press any key to go back: ";
                        std::cin >> start;
                        std::cout << std::endl;

                    }
                    else if(start == "5"){

                    }
                    else{

                        system("clear");

                        std::cout << "Invalid selection" << std::endl;
                        std::cin >> start;
                        std::cout << std::endl;

                    }
                        

                }
                else{

                    system("clear");

                    std::cout << "Invalid selection" << std::endl;
                    std::cin >> start;
                    std::cout << std::endl;

                }

            }
            else if(start == "2"){

                system("clear");

                int ID;
                std::string Name;
                int Duration;
                std::string Genre;
                int Score;
                int NumEpisode;
                int NumSeason;
                std::string NameSeries;
                int IDSeries;
                int NumOfEpi;
                int NumOfSea;

                std::cout << "Write the name of the series: ";

                getline(std::cin >> std::ws, NameSeries);

                std::cout << std::endl;
                std::cout << "How many episode does it have: ";
                std::cin >> NumOfEpi;
                std::cout << std::endl;
                std::cout << "How many seasons does it have: ";
                std::cin >> NumOfSea;
                std::cout << std::endl;

                std::vector<Serie> NewSerie;

                IDSeries = (series.size()+1)*1000;

                std::cout << "Add the information of one episode from the series" << std::endl << std::endl;
                
                std::cout << "Name of the episode: ";

                getline(std::cin >> std::ws, Name);

                std::cout << std::endl;
                std::cout << "Number of the episode: ";
                std::cin >> NumEpisode;
                std::cout << std::endl;
                std::cout << "Número of the season: ";
                std::cin >> NumSeason;
                std::cout << std::endl;

                if(NumSeason <= NumOfSea){

                    std::cout << "Duration: ";
                    std::cin >> Duration;
                    std::cout << std::endl;
                    std::cout << "\t1. Adventure" << std::endl;
                    std::cout << "\t2. Comedy" << std::endl;
                    std::cout << "\t3. Science Fiction" << std::endl;
                    std::cout << "\t4. Action" << std::endl;
                    std::cout << "\t5. Documental" << std::endl;
                    std::cout << "\t6. Mystery" << std::endl;
                    std::cout << std::endl;
                    std::cout << "Genre: ";
                    std::cin >> start;
                    std::cout << std::endl;
                    std::cout << "Scores from 1 to 5: ";
                    std::cin >> Score;
                    std::cout << std::endl;

                    if(start == "1"){
                        Genre = "Adventure";
                    }
                    else if(start == "2"){
                        Genre = "Comedy";
                    }
                    else if(start == "3"){
                        Genre = "Science Fiction";
                    }
                    else if(start == "4"){
                        Genre = "Action";
                    }
                    else if(start == "5"){
                        Genre = "Documental";
                    }
                    else if(start == "6"){
                        Genre = "Mystery";
                    }
                    else{
                    }

                    if(Score > 0 && Score < 6){

                        ID = IDSeries + NumSeason*100 + NumEpisode;

                        Serie newSeries(ID,Name,Duration,Genre,Score,{Score},NumEpisode,NumSeason,NameSeries,IDSeries,NumOfEpi,NumOfSea);

                        NewSerie.push_back(newSeries);

                        series.push_back(NewSerie);

                        std::cout << std::endl;
                        std::cout << "Your series was added" << std::endl;

                        series[series.size()-1][0].showInfoSerie();

                        std::cout << std::endl << "With an episode" << std::endl;

                        series[series.size()-1][0].showInfoMovie();

                        std::cout << "Press any key to go back: ";
                        std::cin >> start;
                        std::cout << std::endl;

                    }
                    else{

                    system("clear");

                    std::cout << "Invalid selection" << std::endl;
                    std::cin >> start;
                    std::cout << std::endl;

                    }

                }
                else{

                    system("clear");

                    std::cout << "Number of season invalid" << std::endl;
                    std::cin >> start;
                    std::cout << std::endl;

                }

            }
            else if(start == "3"){

            }
            else{

            system("clear");

            std::cout << "Invalid selection" << std::endl;
            std::cin >> start;
            std::cout << std::endl;

            }

        }
        else{

            system("clear");

            std::cout << "Invalid selection" << std::endl;
            std::cin >> start;
            std::cout << std::endl;

        }

    }

}