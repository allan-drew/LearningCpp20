#include <iostream>

#include <list>
#include <string>


/////////////////////////////////////////////////////////////////////////////////////////// 

// Classes: modelos para a criação de objetos;
    // A class is a blueprint for the object. Uma classe é um modelo para o objeto.

// Objetos: instâncias de uma classe.
    // When a class is defined, only the specification for the object is defined; no memory or storage is allocated.
    // To use the data and access functions defined in the class, we need to create objects.


// Atributos/Dados: dados dos objetos;

// Métodos/Funções: rotinas que acessam os dados da classe;




class SpotifyArtist {

    public :  /// acess specifier : can be private, public or protected

        // data members => variables to be used
        std::string ArtisticName;
        std::string RealName;
        int MonthlyListeners; 
        std::list <std::string> PublishedMusicNames;

        // member functions () => methods to acess data members

};



int main() {

    SpotifyArtist sptf_artist; //// Creating first object

    sptf_artist.ArtisticName = "Vintage Culture";
    sptf_artist.RealName = "Lukas Ruiz";
    sptf_artist.MonthlyListeners = 8000000;
    sptf_artist.PublishedMusicNames = {" Slow Down", " In The Dark"};


    std::cout << " Artistic Name : " << sptf_artist.ArtisticName << std::endl;
    std::cout << " Real Name of the artist : " << sptf_artist.RealName << std::endl;
    std::cout << " MonthlyListeners : " << sptf_artist.MonthlyListeners << std::endl;
    std::cout << " Musics : " << std::endl;
    for ( std::string musicName : sptf_artist.PublishedMusicNames ) {
        std::cout << musicName << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;


    SpotifyArtist sptf_artist_2; //// Creating second object
    sptf_artist_2.ArtisticName = "Lane 8";
    sptf_artist_2.RealName = "Daniel Goldstein";
    sptf_artist_2.MonthlyListeners = 2500000;
    sptf_artist_2.PublishedMusicNames = {" Road"};

    std::cout << " Artistic Name : " << sptf_artist_2.ArtisticName << std::endl;
    std::cout << " Real Name of the artist : " << sptf_artist_2.RealName << std::endl;
    std::cout << " MonthlyListeners : " << sptf_artist_2.MonthlyListeners << std::endl;
    std::cout << " Musics : " << std::endl;
    for ( std::string musicName : sptf_artist_2.PublishedMusicNames ) {
        std::cout << musicName << std::endl;
    }


    /////////
    // The problem with the approach above is that if we create third fourth fifth... etc object, 
    // we will need to write a bunch of code

    /// To solve this, we can use constructors

    ///////////





    return 0;
}
