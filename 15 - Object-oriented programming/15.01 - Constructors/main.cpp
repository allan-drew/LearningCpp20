#include <iostream>
#include <list>
#include <string>


/////////////////////////////////////////////////////////////////////////////////////////// 

// CONSTRUTORES //
        // Construtores permitem a inicialização de objetos

// Caso não tenha construtor na classe, o compilador irá criar um construtor para o programa
// Toda classe possui um construtor padrão 
        // Porém, é um construtor que não recebe valores
// Com isso, o objeto seria inicializado com valores lixos/aleatórios

    // Uma forma de contornar seria usar métodos/funções de criação desses objetos 
            // normalmente os atributos (data members/variables) estão privados, 
            // então só seriam acessados através de métodos/funções
    // Porém não existe uma forma de impor que os métodos/funções de criação serão de fatos chamados na main()

// Por isso, é interessante inserir os CONSTRUTORES na classe! 
// Construtores são usados para inicializar objetos automaticamente na sua criação


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
        // Methods are functions that belongs to the class
        // A method is a member function of a class, but in C++ they are more commonly called member functions than methods (some programmers coming from other languages like Java call them methods).
        // It's going to describe the behaviors of a class 
        // In this example, we are printing information about our spotify artists. So we are going to create a method to write out these informations
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


        // Construtores não são métodos da classe
                // não é possível usar um objeto para invocar o construtor
                // O construtor é chamado ao ser criado um objeto
        // CONSTRUCTORS: a constructor is a special type of member function that is called automatically when a object is created.
            //a constructor has the same name as that of the class
            //a constructor does not have a return type.
        SpotifyArtist ( std::string artistic_name , std::string real_name) {
            ArtisticName = artistic_name;
            RealName = real_name;
            MonthlyListeners = 0;  
        }

        // If you want to keep the ability to construct objects without passing parameters, 
        // you are going to have to put in your own default constructor
        SpotifyArtist () = default;

};



int main() {

    //// Creating first object and using constructor with the ( " bla bla ", " bla bla ")
    SpotifyArtist sptf_artist ("Vintage Culture" , "Lukas Ruiz");
            // Como foi colocado o 'default construtor', 
            // não é necessário passar por exemplo nenhuma música publicada

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
                                // Como não foi passado nenhum parâmetro, o MonthlyListeners será um valor lixo
                                // e não o valor zerado

                                // A ausência de um construtor padrão impede a criação de objetos não inicializados
                                // Porém, neste caso, é possível criar objetos não inicializados, pois temos um construtor padrão definido na classe ====> SpotifyArtist () = default;
    sptf_artist_3.GetINFO();
    std::cout << std::endl;


    SpotifyArtist sptf_artist_4 ("Ben Bohmer", "Ben Bohmer");
    sptf_artist_4.publicarMusica ("     Father Ocean");
    sptf_artist_4.GetINFO();
    std::cout << std::endl;


    // Usando notação mais recente/moderna/recomendada
    // Usando { }
    SpotifyArtist sptf_artist_5 { "Dubdogz", "Marcos e Lucas" };
    sptf_artist_5.GetINFO();



    return 0;
}
