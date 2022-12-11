#include <iostream>

#include <list>
#include <string>


/////////////////////////////////////////////////////////////////////////////////////////// 

//////////// C++ final specifier ///////////////

// Specifies that a virtual function cannot be overridden in a derived class or that a class cannot be derived from.


// Sometimes you don’t want to allow derived class to override the base class’ virtual function. 
// C++ 11 allows built-in facility to prevent overriding of virtual function using final specifier. 

    // #1 - Restrict how you override methods in derived classes
    
    // #2 - Restrict how you can derive from a base class



// class SpotifyArtist final { 
        // In this case, we are going to get a compiler error 
        //(cannot derive from 'final' base 'SpotifyArtist' in derived type 'ElectronicSpotifyArtist'), 
        //because we are using 'final' specifier. 
        // It restrict how you can derive from a base class

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


        // In this case, 'final' specifier restrict how you override methods in derived classes
        // It's going to be a compiler error.
        // We have a virtual method wich is called show(), but it's market 'final'. 
        // The moment we declare it as 'final' this is going to be contradicted.

                // 'virtual' means that people in downstream will be able to specialize or inherit, 
                //but at the same time we are marking as 'final' 
                //(nobody downstream will be able to override the method, if do that will get a compiler error)

                // 'final' is going to "win" against 'virtual'

        // virtual void show () final {
        //     std::cout << " Printing/Showing SpotifyArtist class (base class) " << std::endl;
        // }

        virtual void show () {
            std::cout << " Printing/Showing SpotifyArtist class (base class) " << std::endl;
        }

  

};




class ElectronicSpotifyArtist : public SpotifyArtist {

    public :

        ElectronicSpotifyArtist ( std::string artistic_name , std::string real_name ) : SpotifyArtist ( artistic_name , real_name ) {
        }
    
        ElectronicSpotifyArtist () = default;


        virtual void show () override {
            std::cout << " Printing/Showing ElectronicSpotifyArtist class (derived class from SpotifyArtist) " << std::endl;
        }


};



class MelodicHouseSpotifyArtist : public ElectronicSpotifyArtist {

    public : 

        MelodicHouseSpotifyArtist ( std::string artistic_name , std::string real_name ) : ElectronicSpotifyArtist ( artistic_name , real_name ) {
        }

        MelodicHouseSpotifyArtist () = default;


        virtual void show ( ) override {
            std::cout << " Printing/Showing MelodicHouseSpotifyArtist class (derived class from ElectronicSpotifyArtist) " << std::endl;
        }   

};




int main() {

// ==========================================================

    SpotifyArtist sptf_artist_001 ("Bound to Divide" , "Julian van Straten");

    sptf_artist_001.show();

    ElectronicSpotifyArtist electronicartist_001 ("Dubdogz" , "Marcos and Lucas" ); 
    electronicartist_001.show();





// ============================================================================== 

    std::cout << std::endl;
    std::cout << " ========================================== " << std::endl;

 

    return 0;
}



