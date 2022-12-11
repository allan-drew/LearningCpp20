#include <iostream>

#include <list>
#include <string>


/////////////////////////////////////////////////////////////////////////////////////////// 

//////////// POLYMORPHISM ///////////////

/////// The word “polymorphism” means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. 
//A real-life example of polymorphism is a person who at the same time can have different characteristics. 
//Like a man at the same time is a father, a husband and an employee. 
//So the same person exhibits different behavior in different situations. This is called polymorphism.

// Em outras palavras, em C++, polimorfismo é a possibilidade de criar vários métodos com o mesmo nome 
//e cada um dos métodos realizar uma atividade diferente 

//  In C++, polymorphism is mainly divided into two types: 
    // Compile-time Polymorphism
    // Runtime Polymorphism


// Runtime polymorphism: This type of polymorphism is achieved by Function Overriding.

         // Function overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden. 




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

        
        ////
        virtual void print () {
            std::cout << " Printing SpotifyArtist class (base class) " << std::endl;
        } 

        void show () {
            std::cout << " Showing SpotifyArtist class (base class) " << std::endl;
        }


};



/////// Derived class
        // Runtime polymorphism: This type of polymorphism is achieved by Function Overriding.
                // Function overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden. 
class ElectronicSpotifyArtist : public SpotifyArtist {

    public :

        ElectronicSpotifyArtist ( std::string artistic_name , std::string real_name ) : SpotifyArtist ( artistic_name , real_name ) {
            // We are inheriting from SpotifyArtist class that already knows how to construct, how to initialize the properties.
            // So, this is why we are using this syntax above
        }
    
        ElectronicSpotifyArtist () = default;


        virtual void print () {
            std::cout << " Printing ElectronicSpotifyArtist class (derived class) " << std::endl;
        } 

        void show () {
            std::cout << " Showing ElectronicSpotifyArtist class (derived class) " << std::endl;
        }
    


};



int main() {

    std::cout << std::endl;

    SpotifyArtist *ptr_sptf_artist_001; //// Base class. Using ptr 
    ElectronicSpotifyArtist sptf_artist_001;  ////// Derived class

    ptr_sptf_artist_001 = &sptf_artist_001;

    //virtual function [ virtual void print () ], binded at runtime (Runtime polymorphism)
    ptr_sptf_artist_001->print();

    // Non-virtual function, binded at compile time
    ptr_sptf_artist_001->show();



    /////////////////////////////////////////////////////////////////////////////////
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;

    return 0;
}



