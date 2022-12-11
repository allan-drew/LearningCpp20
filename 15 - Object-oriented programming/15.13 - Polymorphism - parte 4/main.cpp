#include <iostream>

#include <list>
#include <string>


/////////////////////////////////////////////////////////////////////////////////////////// 

//////////// POLYMORPHISM ///////////////

///// POLYMORPHISM ==> A base class pointer or reference managing derived class objects in our inheritance hierarchies

///// Managing derived objects in memory through base pointers or references 
//and getting the right method called on the base pointer or reference


    // EXAMPLE:

    ///Using pointers : 
        // Shape * shape1 = new Circle; 
                // using pointer to manage Circle object that was dynamically allocate
                // If Circle is inheriting from Shape, Circle is really a Shape!
        // Shape * shape2 = new Rectangle;
        // Shape * shape3 = new Oval;

    ///Using references 
        // Shape& ref1 {&shape1};
        // Shape& ref2 {&shape2};
        // Shape& ref3 {&shape3};



    //// QUESTION : WHY DO WE WANT TO DO SOMETHING LIKE THIS ? 
        // What if you want to draw this examples?
            // Shape (base class) ; Oval (derived class) ; Circle (derived class)
            // If you didn't use polimorphism, you would need to set up all kinds of methods to draw each kind of object 
            // With polimorphism, we can set up a SINGLE METHOD which takes a shape pointer or a shape reference and we can pass in all of objects whose class derive from shape


// =============================== 

// Another benefit of polymorphism is to allow us to be able to store different kinds objects in a single collection




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

        
        //// This method is used to give examples of static bindings 
        void print () {
            std::cout << " Printing SpotifyArtist class (base class) " << std::endl;
        } 


        /// This method is used to give examples of dynamic bindings 
        /// Polymorphism (dynamic binding) with virtual functions 
        virtual void show () {
            std::cout << " Printing/Showing SpotifyArtist class (base class) " << std::endl;
        }
    
};




class ElectronicSpotifyArtist : public SpotifyArtist {

    public :

        ElectronicSpotifyArtist ( std::string artistic_name , std::string real_name ) : SpotifyArtist ( artistic_name , real_name ) {
        }
    
        ElectronicSpotifyArtist () = default;


        //// This method is used to give examples of static bindings 
        void print () {
            std::cout << " Printing ElectronicSpotifyArtist class (derived class from SpotifyArtist) " << std::endl;
        } 


        /// This method is used to give examples of dynamic bindings 
        /// Polymorphism (dynamic binding) with virtual functions 
        virtual void show () {
            std::cout << " Printing/Showing ElectronicSpotifyArtist class (derived class from SpotifyArtist) " << std::endl;
        }

};



class MelodicHouseSpotifyArtist : public ElectronicSpotifyArtist {

    public : 

        MelodicHouseSpotifyArtist ( std::string artistic_name , std::string real_name ) : ElectronicSpotifyArtist ( artistic_name , real_name ) {
        }

        MelodicHouseSpotifyArtist () = default;


        //// This method is used to give examples of static bindings 
        void print () {
            std::cout << " Printing MelodicHouseSpotifyArtist class (derived class from ElectronicSpotifyArtist) " << std::endl;
        } 


        /// This method is used to give examples of dynamic bindings 
        /// Polymorphism (dynamic binding) with virtual functions 
        virtual void show () {
            std::cout << " Printing/Showing MelodicHouseSpotifyArtist class (derived class from ElectronicSpotifyArtist) " << std::endl;
        }         

};



// So...
// Because we are using dynamic binding, we can set up one single method which is really going to show any kind of message
// Using pointer...
void show_message ( SpotifyArtist * spt_art ) {
    spt_art -> show();
}
    // This is going to call the show() method on whatever parameter that we pass in 

// Using reference...
void show_message_v2 ( SpotifyArtist& spt_art_v2 ) {
    spt_art_v2.show();
}




int main() {

// ==========================================================

    SpotifyArtist artist_000 ("vintage culture" , "Lukas Ruiz");
    artist_000.print();

    ElectronicSpotifyArtist electronicartist_000 ( "Tiesto" , "Tijs Michiel Verwest");
    electronicartist_000.print();
    
    MelodicHouseSpotifyArtist melodicartist_000 ( "Lane 8 " , "Daniel");
    melodicartist_000.print();


    std::cout << "          But....we DON'T want to go through direct objects to manage our data " << std::endl;
    ///// But....we don't want to go through direct objects to manage our data
    std::cout << " ========================================== " << std::endl;


// ==================================================== 
// STATIC BINDING with base class pointer (this is what we get by default)
 
    SpotifyArtist artist_001 ("vintage culture" , "Lukas Ruiz");
    ElectronicSpotifyArtist electronicartist_001 ( "Tiesto" , "Tijs Michiel Verwest");
    MelodicHouseSpotifyArtist melodicartist_001 ( "Lane 8 " , "Daniel");


    // We are using a base pointer to manage our object.... BUTTTT
    // the compiler just looks at the pointer type to decide with print() version to call

    /// We are using a base pointer to manage the object (artist_001) in memory.
    // We store artist_001 object in our pointer_spotifyartist. 
    SpotifyArtist * pointer_spotifyartist = &artist_001;
    pointer_spotifyartist -> print();

    // We store electronicartist_001 object in our pointer_spotifyartist. 
    // We are using a base pointer (pointer_spotifyartist) to manage an actual  electronicartist_001 object in memory 
    pointer_spotifyartist = &electronicartist_001;
    pointer_spotifyartist -> print (); /// We would wish for ElectronicSpotifyArtist::print() to be called. BUT IT'S NOT WHAT WE HAVE
    // Compiler will look at the SpotifyArtist pointer and will decide to call print() method of the SpotifyArtist class. 
 

    // We store melodicartist_001 object in our pointer_spotifyartist. 
    // We are using a base pointer (pointer_spotifyartist) to manage an actual  melodicartist_001 object in memory 
    pointer_spotifyartist = &melodicartist_001;
    pointer_spotifyartist -> print(); /// We would wish for MelodicHouseSpotifyArtist::print() to be called. UT IT'S NOT WHAT WE HAVE 
    // Compiler will look at the SpotifyArtist pointer and will decide to call print() method of the SpotifyArtist class. 


    std::cout << "          This is NOT what we want... " << std::endl;
    std::cout << " ========================================== " << std::endl;



// ======================================================
// STATIC BINDIN with base class reference (this is what we get by default)

    SpotifyArtist artist_002 ("vintage culture" , "Lukas Ruiz");
    ElectronicSpotifyArtist electronicartist_002 ( "Tiesto" , "Tijs Michiel Verwest");
    MelodicHouseSpotifyArtist melodicartist_002 ( "Lane 8 " , "Daniel");


    // We are using base reference to manage our object.... BUTTTT
    // the compiler just looks at the reference type to decide with print() version to call.  
    SpotifyArtist& ref_spotify_1 = artist_002;
    ref_spotify_1.print();

    // Compiler will look at the SpotifyArtist reference and will decide to call print() method of the SpotifyArtist class. But we wish to call print() method of the ElectronicSpotifyArtist class 
    SpotifyArtist& ref_spotify_2 = electronicartist_002;
    ref_spotify_2.print(); /// We would wish for ElectronicSpotifyArtist::print() to be called. BUT IT'S NOT WHAT WE HAVE

    // Compiler will look at the SpotifyArtist reference and will decide to call print() method of the SpotifyArtist class. But we wish to call print() method of the MelodicHouseSpotifyArtist class 
    SpotifyArtist& ref_spotify_3 = melodicartist_002;
    ref_spotify_3.print(); // We would wish for MelodicHouseSpotifyArtist::print() to be called. UT IT'S NOT WHAT WE HAVE


    std::cout << "          This is NOT what we want... " << std::endl;
    std::cout << " ========================================== " << std::endl;



// ==================================================

    // What we really want is to be able to only have one method and get to the C++ runtime to resolve which one is called at runtime when we get to pass our actual objects  

    // This is how we can achieve dynamic binding using virtual functions in C++
    // It's a tiny modification on inheritance hierarchy ( we set up show() methods with virtual keyword )

    SpotifyArtist artist_003 ("Vintage Culture" , "Lukas Ruiz");
    ElectronicSpotifyArtist electronicartist_003 ( "Tiesto" , "Tijs Michiel Verwest");
    MelodicHouseSpotifyArtist melodicartist_003 ( "Lane 8 " , "Daniel");


    /// Using BASE POINTERS :  
    SpotifyArtist * ptr_spotifyartist = &artist_003;
    ptr_spotifyartist -> show();

    // If we happen to be using the base pointer to manage a derived object and we call the show() method on the base pointer the compiler is going to know that it will need to resolve the show() method dynamically
    // The reason is that this is a VIRTUAL method 
    ptr_spotifyartist = &electronicartist_003;
    ptr_spotifyartist -> show(); 
                // Compiler it's NOT going to look at the type of the pointer
                // Compiler it's going to look at the type of the actual object that the pointer is managing

    ptr_spotifyartist = &melodicartist_003;
    ptr_spotifyartist -> show();


    std::cout << "          This is what we want... " << std::endl;
    std::cout << " ========================================== " << std::endl;


// ===================================================================


    SpotifyArtist artist_004 ("vintage culture" , "Lukas Ruiz");
    ElectronicSpotifyArtist electronicartist_004 ( "Tiesto" , "Tijs Michiel Verwest");
    MelodicHouseSpotifyArtist melodicartist_004 ( "Lane 8 " , "Daniel");

    /// Using BASE REFERENCES :
    SpotifyArtist& ref_spotify_1_1 = artist_004;
    ref_spotify_1_1.show();

    SpotifyArtist& ref_spotify_2_1 = electronicartist_004;
    ref_spotify_2_1.show(); 

    SpotifyArtist& ref_spotify_3_1 = melodicartist_004;
    ref_spotify_3_1.show();

    std::cout << "          This is what we want...AGAIN! " << std::endl;
    std::cout << " ========================================== " << std::endl;
    std::cout << std::endl;

// =========================================================================

    // So...
    // Because we are using dynamic binding, we can set up one single method which is really going to print any kind of message
    // We set up show_message() after classes and before int main()

    // Using pointers... 
    show_message ( &artist_000 );
    show_message ( &electronicartist_000 );
    show_message ( &melodicartist_000 );
    std::cout << " --- " << std::endl;
    // === 
    show_message ( &artist_001 );
    show_message ( &electronicartist_001 );
    show_message ( &melodicartist_001 );
    std::cout << " --- " << std::endl;
    // ===
    show_message ( &artist_002 );
    show_message ( &electronicartist_002 );
    show_message ( &melodicartist_002 );
    std::cout << " --- " << std::endl;
    // ===
    show_message ( &artist_003 );
    show_message ( &electronicartist_003 );
    show_message ( &melodicartist_003 );
    std::cout << " --- " << std::endl;
    // ===
    show_message ( &artist_004 );
    show_message ( &electronicartist_004 );
    show_message ( &melodicartist_004 );


    std::cout << std::endl;
    std::cout << " ========================================== " << std::endl;

    // =========================================

    // Using references... 

    show_message_v2 ( artist_000 );
    show_message_v2 ( electronicartist_000 );
    show_message_v2 ( melodicartist_000 );
    std::cout << " --- " << std::endl;
    // === 
    show_message_v2 ( artist_001 );
    show_message_v2 ( electronicartist_001 );
    show_message_v2 ( melodicartist_001 );
    std::cout << " --- " << std::endl;
    // ===
    show_message_v2 ( artist_002 );
    show_message_v2 ( electronicartist_002 );
    show_message_v2 ( melodicartist_002 );
    std::cout << " --- " << std::endl;
    // ===
    show_message_v2 ( artist_003 );
    show_message_v2 ( electronicartist_003 );
    show_message_v2 ( melodicartist_003 );
    std::cout << " --- " << std::endl;
    // ===
    show_message_v2 ( artist_004 );
    show_message_v2 ( electronicartist_004 );
    show_message_v2 ( melodicartist_004 );

// ======================================================================================= 

    std::cout << std::endl;
    std::cout << " ========================================== " << std::endl;

    // Showing with data stored in collection : 

    std::cout << "     // Showing with data stored in collection : " << std::endl;
 
    // We can use a base pointer and use that to set up an array which can handle any kind of message (in this example) we have in our inheritance hierarchy  
    SpotifyArtist * spt_artist_collection [] { &artist_000 , &electronicartist_000 , &melodicartist_000 };

    for ( SpotifyArtist* pointer_sp_a : spt_artist_collection ) {
        pointer_sp_a -> show();
    }



    std::cout << std::endl;
    std::cout << std::endl;

    /// ==================================================
    // std::cout << " sizeof (SpotifyArtist) : " << sizeof(SpotifyArtist) << std::endl;
    // std::cout << " sizeof (ElectronicSpotifyArtist) : " << sizeof(ElectronicSpotifyArtist) << std::endl;
    // std::cout << " sizeof (MelodicHouseSpotifyArtist) : " << sizeof(MelodicHouseSpotifyArtist) << std::endl;



    return 0;
}



