#include <iostream>

#include <list>
#include <string>


/////////////////////////////////////////////////////////////////////////////////////////// 

//////////// OVERLOADING AND OVERRIDING ///////////////



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



        virtual void show () {
            std::cout << " Printing/Showing SpotifyArtist class (base class) " << std::endl;
        }

        //// OVERLOADING show() with color parameter
        // Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. 
        virtual void show ( std::string specified_color ) { 
            std::cout << " Printing/Showing SpotifyArtist class (base class) with the " << specified_color << " color. " << std::endl;
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

        //// OVERLOADING show() with color parameter
        // Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. 
        virtual void show ( std::string specified_color ) override { 
            std::cout << " Printing/Showing ElectronicSpotifyArtist class (derived class from SpotifyArtist) with the " << specified_color << " color. " << std::endl;
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

        //// OVERLOADING show() with color parameter
        // Functions can be overloaded by changing the number of arguments or/and changing the type of arguments.         
        virtual void show ( std::string specified_color ) override { 
            std::cout << " Printing/Showing MelodicHouseSpotifyArtist class (derived class from ElectronicSpotifyArtist) with the " << specified_color << " color. " << std::endl;
        }         

};




int main() {

// ==========================================================

    SpotifyArtist sptf_artist_001 ("Bound to Divide" , "Julian van Straten");

    sptf_artist_001.show();
    sptf_artist_001.show("blue");


    ElectronicSpotifyArtist electronicartist_001 ("Dubdogz" , "Marcos and Lucas" ); 
    electronicartist_001.show();
    electronicartist_001.show("green");



// ============================================================================== 

    std::cout << std::endl;
    std::cout << " ========================================== " << std::endl;

 

    return 0;
}



