#include <iostream>
#include <list>
#include <string>

/////////////////////////////////////////////////////////////////////////////////////////// 

class SpotifyArtist {

    private :

        // data members => variables to be used
        std::string ArtisticName;
        std::string RealName;
        int MonthlyListeners; 
        std::list <std::string> PublishedMusicNames;


    public: 
        // class methods / member functions ===> methods to acess data members
        void GetINFO () {
            std::cout << " Artistic Name : " << ArtisticName << std::endl;
            std::cout << " Real Name of the artist : " << RealName << std::endl;
            std::cout << " MonthlyListeners : " << MonthlyListeners << std::endl;

            std::cout << " Musics : " << std::endl;
            for ( std::string musicName : PublishedMusicNames ) {
                std::cout << musicName << std::endl;
            }
        }

        void publicarMusica ( std::string nameOfMusicPublished ) {
                PublishedMusicNames.push_back(nameOfMusicPublished);
        }

        
    //// Setter and Getter methods 
    // Setter and getter are Methods in class to read or modify data in member variables of a class

        // Getters
        std::string get_ArtisticName () {
            return ArtisticName;
        }

        int get_MonthlyListeners () {
            return MonthlyListeners;
        }

        // Setters
        void set_ArtisticName ( std::string artistic_name) {
            ArtisticName = artistic_name;
        }

        void set_MonthlyListeners ( int monthly_listeners ) {
            MonthlyListeners = monthly_listeners;
        }

        // Construtores
        SpotifyArtist ( std::string artistic_name , std::string real_name) {
            ArtisticName = artistic_name;
            RealName = real_name;
            MonthlyListeners = 0;  
        }

        SpotifyArtist () = default;

};



int main() {

    //// Creating first object and using constructor with the ( " bla bla ", " bla bla ")
    SpotifyArtist sptf_artist ("Vintage Culture" , "Lukas Ruiz");
            // Como foi colocado o 'default construtor', 
            // n??o ?? necess??rio passar por exemplo nenhuma m??sica publicada

    sptf_artist.publicarMusica ("     Slow Down");
    sptf_artist.publicarMusica ("     Next to Me");
    sptf_artist.publicarMusica ("     In The Dark");
    sptf_artist.GetINFO();
    std::cout << std::endl;


    SpotifyArtist sptf_artist_2 ("Lane 8" , "Daniel Goldstein"); //// Creating second object
    sptf_artist_2.publicarMusica ("     Road");
    sptf_artist_2.GetINFO();
    std::cout << std::endl;


    SpotifyArtist sptf_artist_3; /// Creating another object without passing parameter. 
                                // This is possible because we set up a default constructor
                                // Como n??o foi passado nenhum par??metro, o MonthlyListeners ser?? um valor lixo
                                // e n??o o valor zerado

                                // A aus??ncia de um construtor padr??o impede a cria????o de objetos n??o inicializados
                                // Por??m, neste caso, ?? poss??vel criar objetos n??o inicializados, pois temos um construtor padr??o definido na classe ====> SpotifyArtist () = default;
    sptf_artist_3.GetINFO();
    std::cout << std::endl;


    SpotifyArtist sptf_artist_4 ("Ben Bohmer", "Ben Bohmer");
    sptf_artist_4.publicarMusica ("     Father Ocean");
    sptf_artist_4.GetINFO();
    std::cout << std::endl;


    // Usando nota????o mais recente/moderna/recomendada
    // Usando { }
    SpotifyArtist sptf_artist_5 { "Dubdogz", "Marcos e Lucas" };
    sptf_artist_5.GetINFO();
    std::cout << std::endl;

    std::cout << "-------------------------------" << std::endl;

    ////// Modifying our objects using Setter and Getter methods 
    sptf_artist.set_MonthlyListeners (8000000); 
    sptf_artist.GetINFO ();
    std::cout << std::endl;


    sptf_artist_2.set_MonthlyListeners (2500000);
    sptf_artist_2.GetINFO ();



    return 0;
}

