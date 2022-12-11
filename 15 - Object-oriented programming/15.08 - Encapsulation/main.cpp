#include <iostream>

#include <list>
#include <string>


/////////////////////////////////////////////////////////////////////////////////////////// 
// Why should we use encapsulation ?
    // we don't want to allow other developers to change and access everything they want, 
    // but we want to expose only properties that they should be able to see and change

    // So there are many benefits related to encapsulation: 
        // easier to maintain the code, hides the data, easier to test, reusable...


class SpotifyArtist {

    private : /// acess specifier : can be private, public or protected

        // data members => variables to be used
                // The principle of ENCAPSULATION says that these properties should NOT be public 
                // So, the way to change the value the data that you store inside these properties 
                // should be really USING METHODS that you expose 
                // and then you give access to those methods to your users 
        std::string ArtisticName;
        std::string RealName;
        int MonthlyListeners; 
        std::list <std::string> PublishedMusicNames;


    public :  

        // member functions / class methods ===> methods to acess data members
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
            if ( MonthlyListeners > 0 ) 
                // If we not put this IF, then the program will keep the ability to count like MonthlyListeners = - 1
            MonthlyListeners--;
        }

        void PublishedMusic ( std::string Name_of_music ) {
            PublishedMusicNames.push_back( Name_of_music );
        }

        // constructors
        SpotifyArtist ( std::string artistic_name , std::string real_name ) {
            ArtisticName = artistic_name;
            RealName = real_name;
            MonthlyListeners = 0;
        }

        SpotifyArtist () = default;

};



int main() {

    SpotifyArtist sptf_artist_001 ("Vintage Culture" , "Lukas Ruiz");
    // sptf_artist_001.PublishedMusicNames.push_back("     Slow Down");
    // sptf_artist_001.PublishedMusicNames.push_back("     Next to Me");
    // sptf_artist_001.PublishedMusicNames.push_back("     In The Dark");

    sptf_artist_001.PublishedMusic ("     Slow Down");
    sptf_artist_001.PublishedMusic ("     Next to Me (Remix)");
    sptf_artist_001.PublishedMusic ("     In The Dark");

    // sptf_artist_001.MonthlyListeners = 1000000;      
        // This is a problem because it's NOT the natural way to gain monthly listeners. 
        // Instead, you should give to your users the ability to invoke some methods 
        // to increase and decrease monthly listeners
    // So, in this case, we need to put data members/variables/properties in PRIVATE 

    sptf_artist_001.Increase_MonthlyListeners ();
    sptf_artist_001.Increase_MonthlyListeners ();
    sptf_artist_001.Increase_MonthlyListeners ();

    sptf_artist_001.Decrease_MonthlyListeners ();

    sptf_artist_001.Increase_MonthlyListeners ();
    sptf_artist_001.Increase_MonthlyListeners ();


    sptf_artist_001.PublishedMusic ("     You Can't Hide");


    sptf_artist_001.GetINFO();

    std::cout << std::endl;
 




    return 0;
}
