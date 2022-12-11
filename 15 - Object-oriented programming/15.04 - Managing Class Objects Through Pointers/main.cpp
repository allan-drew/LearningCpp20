//// Um pré-processador é um programa que processa (modifica) o código fonte antes da compilação 
// O pré-processador trata as diretivas que iniciam com # 
// A diretiva #include adiciona o conteúdo de um arquivo ao código fonte do programa

#include <iostream> 
    // A convenção atual é não usar extensão nos arquivos padrão 
    // (que são os arquivos/bibliotecas que já vêm no C++). 
    // Por isso o <iostream> não é iostream.h 

#include "constants.h" // A convenção atual é usar .h para arquivos criados pelos programadores
#include "cylinder.h"


int main() {

    //// Stack object : . notation 
    // [ MEMÓRIA ALOCADA AUTOMATICAMENTE ]
    Cylinder cylinder1( 10 , 10 );
    std::cout << "volume (CYLINDER 1): " << cylinder1.volume() << std::endl;

    Cylinder* p_cylinder1 = &cylinder1; /// Managing a stack object through pointers
    std::cout << " volume (CYLINDER 1): " << (*p_cylinder1).volume() << "  // using dereference and . notation \n";
    std::cout << " volume (CYLINDER 1): " << p_cylinder1 -> volume() << "  // using -> notation \n";
    std::cout << "  base_radius (CYLINDER 1): " << p_cylinder1 -> get_base_radius() << " \n";
    std::cout << "  height (CYLINDER 1): " << p_cylinder1 -> get_height() << " \n";

    std::cout << std::endl;

    //// Heap object
    // [ MEMÓRIA ALOCADA DINAMICAMENTE ]
    Cylinder* cylinder2 = new Cylinder ( 14, 20 ); // Create object on heap
        // ' new ' ==> Creates and initializes objects with dynamic storage duration, 
        // that is, objects whose lifetime is not necessarily limited by the scope in which they were created.

    /// dereference and . notation 
    std::cout << "volume (CYLINDER 2): " << (*cylinder2).volume() << "  // using dereference and . notation \n"; 

    ///  ->  notation (Arrow pointer call notation)
    std::cout << "volume (CYLINDER 2): " << cylinder2 -> volume() << "  // using -> notation \n";
    std::cout << "  base_radius (CYLINDER 2): " << cylinder2 -> get_base_radius() << " \n";
    std::cout << "  height (CYLINDER 2): " << cylinder2 -> get_height() << " \n";

    delete cylinder2;


    ///////// Exemplo de uso de alocação dinâmica de memória :
        
        // ponteiros são usados em praticamente tudo dentro de jogos. 
        // Utilizamos muitos ponteiros porque é necessário usar alocação dinâmica de memória. 
        // O jogo é criado em várias funções. 
        
        // Existe uma função para carregar as imagens do jogo, por exemplo. 
        // Mas essas imagens não podem ser liberadas da memória ao final da função de carregamento. 
        // Então elas precisam ser alocadas com new e liberadas apenas ao terminar o jogo, ou a "fase" do jogo, usando o delete.


    return 0;
}
