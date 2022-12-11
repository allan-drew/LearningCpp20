
#include <iostream>

#include <list>
#include <string>


/////////////////////////////////////////////////////////////////////////////////////////// 

//////////// POLYMORPHISM ///////////////

/////// The word “polymorphism” means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. A real-life example of polymorphism is a person who at the same time can have different characteristics. Like a man at the same time is a father, a husband and an employee. So the same person exhibits different behavior in different situations. This is called polymorphism.

// Em outras palavras, em C++, polimorfismo é a possibilidade de criar vários métodos com o mesmo nome e cada um dos métodos realizar uma atividade diferente 

//  In C++, polymorphism is mainly divided into two types: 
    // Compile-time Polymorphism
    // Runtime Polymorphism


class SpotifyArtist {

    private : 
        std::string RealName;
        int MonthlyListeners; 
        std::list <std::string> PublishedMusicNames;

    protected : 
        std::string ArtisticName;

    public :  
        void GetINFO () {
            std::cout << " Artistic Name : " << ArtisticName << std::endl;
            std::cout << " Real Name of the artist : " << RealName << std::endl;
            std::cout << " MonthlyListeners : " << MonthlyListeners << std::endl;
            std::cout << " Musics : " << std::endl;
            for ( std::string musicName : PublishedMusicNames ) {
                std::cout << musicName << std::endl;
            }
        }

        void Increase_MonthlyListeners () {
            MonthlyListeners++;
        }

        void Decrease_MonthlyListeners () {
            if ( MonthlyListeners > 0 ) // If we not put this IF, then the program will keep the ability to count like MonthlyListeners = - 1
            MonthlyListeners--;
        }

        void PublishedMusic ( std::string Name_of_music ) {
            PublishedMusicNames.push_back( Name_of_music );
        }

        SpotifyArtist ( std::string artistic_name , std::string real_name ) {
            ArtisticName = artistic_name;
            RealName = real_name;
            MonthlyListeners = 0;
        }

        SpotifyArtist () = default;

};


/////// Derived class
class ElectronicSpotifyArtist : public SpotifyArtist {

    public :

        ElectronicSpotifyArtist ( std::string artistic_name , std::string real_name ) : SpotifyArtist ( artistic_name , real_name ) {
            // We are inheriting from SpotifyArtist class that already knows how to construct, how to initialize the properties.
            // So, this is why we are using this syntax above
        }
    
        void playsMelodicHouse () {
            std::cout << ArtisticName << " plays Melodic House! " << std::endl;
            // It was possible to access ArtisticName because we set up this variable as Protected 
        }

        void playsVeryGoodMusic () {
            std::cout << ArtisticName << " plays very good music in the electronic music world" << std::endl;
        }
    
};


///// Anther Derived class
//// We set up this anothe class to show the POLIMORPHISM
class LofiHipHopSpotifyArtist : public SpotifyArtist {

    public :

        LofiHipHopSpotifyArtist ( std::string artistic_name , std::string real_name ) : SpotifyArtist ( artistic_name , real_name ) {

        }

        // This LofiHipHopSpotifyArtist has the SAME method in ElectronicSpotifyArtist (which is playsVeryGoodMusic), but this method has DIFFERENT implementation comparing with the ElectronicSpotifyArtist class (it has different message in the std::cout)
        void playsVeryGoodMusic () {
            std::cout << ArtisticName << " plays very good music in the LOFI hip hop world" << std::endl;
        } 
                    // Polymorphism usually occurs when we have multiple classes that are related by inheritance. Because of this, two derived classes can define a method that has the same name, but the different implementation (behavior)
    
};






int main() {
 
    ///////////////////////////////////////////////

    ElectronicSpotifyArtist sptf_artist_002 ("Bound to Divide" , "Julian van Straten");

    sptf_artist_002.PublishedMusic("        Coming Home");
    sptf_artist_002.PublishedMusic("        Wait For You");

    sptf_artist_002.Increase_MonthlyListeners();
    sptf_artist_002.Increase_MonthlyListeners();
    sptf_artist_002.Increase_MonthlyListeners();

    sptf_artist_002.GetINFO();
    sptf_artist_002.playsMelodicHouse();
    sptf_artist_002.playsVeryGoodMusic();


    /////////////////////////////////////////////////////////////////////////////////
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;

    ElectronicSpotifyArtist sptf_artist_003 ( "Lane 8" , "Daniel Goldstein" );
    sptf_artist_003.GetINFO();
    sptf_artist_003.playsMelodicHouse();
    sptf_artist_003.playsVeryGoodMusic();


    ////////////////////////////////////////////////////////////////////////////////
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;

    LofiHipHopSpotifyArtist sptf_artist_004 ( "colours in the dark" , "Daniel Sander" );
    sptf_artist_004.GetINFO();
    sptf_artist_004.playsVeryGoodMusic();





    return 0;
}
