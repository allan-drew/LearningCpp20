
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


// Compile-time polymorphism: This type of polymorphism is achieved by function overloading (sobrecarga de métodos) 
 
        // Function Overloading: When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded. Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. 

        // Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading. In Function Overloading “Function” name should be the same and the arguments should be different. Function overloading can be considered as an example of a POLYMORPHISM feature in C++.





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


        // Compile-time polymorphism: This type of polymorphism is achieved by function overloading (sobrecarga de métodos) 
        // Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. 

        // function with 1 int parameter
        void RoyaltyPayment ( int x ) {
            std::cout << " First) The royalty payment for this artist in this month is :  " << x << std::endl;
        } 

        // function with same name but 1 double parameter
        void RoyaltyPayment ( double x ) {
            std::cout << " Second) The royalty payment for this artist in this month is :  " << x << std::endl;
        }

        // function with same name and 2 int parameters
        void RoyaltyPayment (int a , int b ) {
            std::cout << " Third) The royalty payment for this artist in this month is between :  " << a << " and " << b << std::endl;
        }



};





int main() {

    /////////////////////////////////////////////////////////////////////////////////
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    ///////////////////////////////////////////////

    SpotifyArtist sptf_artist_001 ("Bound to Divide" , "Julian van Straten");

    // The first 'RoyaltPayment' is called 
    sptf_artist_001.RoyaltyPayment ( 10000 );

     // The second 'RoyaltPayment' is called
    sptf_artist_001.RoyaltyPayment ( 10000.55 );

    // The third 'func' is called
    sptf_artist_001.RoyaltyPayment ( 9000 , 10000 );


    /////////////////////////////////////////////////////////////////////////////////
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;

    std::cout << " In the above example, a single function named RoyaltyPayment acts differently in three different situations, which is a property of polymorphism. " << std::endl;




    return 0;
}
