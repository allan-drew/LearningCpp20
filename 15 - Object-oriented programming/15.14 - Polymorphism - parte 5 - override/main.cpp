#include <iostream>

#include <list>
#include <string>


/////////////////////////////////////////////////////////////////////////////////////////// 

//////////// OVERRIDE ///////////////

    // It's a kind of set up you can do to avoid error in your inheritance hierarchies 
    //if you use virtual functions to set up polymorphic behavior for your derived objects 

    // C++11 has come up with the override identifier. 
    // If the compiler comes across this identifier, it understands that this is an overridden version of the same class. 
    //It will make the compiler check the base class to see if there is a virtual function with this exact signature. 
    //And if there is not, the compiler will show an error. 

    // Function overriding is a redefinition of the base class function in its derived class 
    //with the same signature ( return type and parameters ). 

    // The programmer’s intentions can be made clear to the compiler by override. 
    // If the override identifier is used with a member function, the compiler makes sure that the member function exists in the base class, 
    // and also the compiler restricts the program to compile otherwise.

    // In a member function declaration or definition, override specifier ensures that the function is virtual 
    //and is overriding a virtual function from a base class. 
    // The program is ill-formed (a compile-time error is generated) if this is not true.

    // If we say 'override', the compiler is going to help us 
    //and make sure that we are actually trying to override the method that exists in the base class 


    ///////// PT-BR - IDENTIFICADOR OVERRIDE //////: 
    // 'override' é usado para fazer com que o compilador verifique a classe base para ver se existe uma função virtual com a assinatura exata. 
    // Se não houver, o compilador vai mostrar um erro. 

    // É usado para evitar erros. 
    // No exemplo abaixo, por exemplo, se a intenção é fazer um override da função show () na classe derivada, 
    //mas cometermos um erro colocando uma assinatura diferente (exemplo, colocando o 'int a' ), 
    //e sem colocar o identificador 'override' na frente, 
    //este erro não seria detectado pelo compilador, PORÉM, o código NÃO FUNCIONARIA DA FORMA ADEQUADA. 




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


        // The show() method in ElectronicSpotifyArtist is going to be overriding what we have in SpotifyArtist
        // override identifier in C++ 


        //// Program works, but not the way we expected 
        /*
        virtual void show ( int a )  {
            std::cout << " Printing/Showing ElectronicSpotifyArtist class (derived class from SpotifyArtist) " << std::endl;
        }
        */


        /// In this case, will not compile, because compiler identified that show() was market as 'override', but does not override, because of the 'int a' mistake (differente signature)
        /* 
        virtual void show ( int a ) override {
            std::cout << " Printing/Showing ElectronicSpotifyArtist class (derived class from SpotifyArtist) " << std::endl;
        }
        */     

         
        /// This works properly

        virtual void show () override {
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
        // The show() method in MelodicHouseSpotifyArtist is going to be overriding what we have in ElectronicSpotifyArtist 
        virtual void show (  ) override {
            std::cout << " Printing/Showing MelodicHouseSpotifyArtist class (derived class from ElectronicSpotifyArtist) " << std::endl;
        }         

};


    void show_message ( SpotifyArtist * spt_art ) {
        spt_art -> show();
    }


    void show_message_v2 ( SpotifyArtist& spt_art_v2 ) {
        spt_art_v2.show();
    }




int main() {

// ==========================================================


    SpotifyArtist artist_003 ("Vintage Culture" , "Lukas Ruiz");
    ElectronicSpotifyArtist electronicartist_003 ( "Tiesto" , "Tijs Michiel Verwest");
    MelodicHouseSpotifyArtist melodicartist_003 ( "Lane 8 " , "Daniel");


    /// Using BASE POINTERS :  
    SpotifyArtist * ptr_spotifyartist = &artist_003;
    ptr_spotifyartist -> show();

    // If we happen to be using the base pointer to manage a derived object and we call the show() method on the base pointer 
    //the compiler is going to know that it will need to resolve the show() method dynamically
    // The reason is that this is a VIRTUAL method 
    ptr_spotifyartist = &electronicartist_003;
    ptr_spotifyartist -> show(); 
                // Compiler it's NOT going to look at the type of the pointer
                // Compiler it's going to look at the type of the actual object that the pointer is managing

    ptr_spotifyartist = &melodicartist_003;
    ptr_spotifyartist -> show();


    std::cout << std::endl;
    std::cout << " ========================================== " << std::endl;

 



    return 0;
}



