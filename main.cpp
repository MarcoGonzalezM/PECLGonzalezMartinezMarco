#include <Controlador.hpp>
//#include <iostream>
#include <windows.h> // sólo windows. Comentar para otro SO
#define _WIN32_WINNT 0x500

using namespace std;

int main(int argc, char** argv){
    Controlador controlador = Controlador();
    char opcion;
    do {
        ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); // sólo windows. Comentar para otro SO
        cout << "\n\t----------------------------------------------------------------------\n";
        cout << "\tPacientes en la pila -> " << controlador.pacientesEnPila()
             << "\n\tPacientes en las colas:\n \t\tSala A-> " << controlador.pacientesEnSalaA() << "\tSala B-> "
             << controlador.pacientesEnSalaB()<< "\tSala C-> " << controlador.pacientesEnSalaC()
             << "\tSala D-> " << controlador.pacientesEnSalaD()
             << " \n\tPacientes en las listas:\n \t\tQuir\242fano Apendicitis-> "
             << /*controlador.pacientesEnListaApendicitis()*/ 0 << "\tQuir\242fano hernias-> "
             << /*controlador.pacientesEnListaHernias()*/ 0 << "\n\tPacientes en el \240rbol -> "
             << /*controlador.pacientesEnArbol()*/ 0 << "\n";
        cout << "\t----------------------------------------------------------------------\n\n";
        cout << "\tA. Generar 12 pacientes de forma aleatoria y almacenarlos en la Pila.\n";
        cout << "\tB. Consultar todos los pacientes generados en la Pila (pendientes de entrar en las salas).\n";
        cout << "\tC. Borrar los pacientes generados en la pila.\n";
        cout << "\tD. Simular llegada de los pacientes en las colas.\n";
        cout << "\tE. Consultar los pacientes de las salas A y B.\n";
        cout << "\tF. Consultar los pacientes de las salas C y D.\n";
        cout << "\tG. Borrar los todos los pacientes de las salas.\n";
        cout << "\tH. Simular la entrada de los pacientes a los quir\242fanos (a las listas).\n";
        cout << "\tI. Mostrar los pacientes que hay en el quir\242fano que atiende apendicitis.\n";
        cout << "\tJ. Mostrar los pacientes que hay en el quir\242fano que atiende hernias.\n";
        cout << "\tK. Buscar en las listas el paciente con apendicitis de menor prioridad y el de hernia con mayor "
                "prioridad.\n";
        cout << "\tL. Reiniciar el programa.\n";
        cout << "\tM. Crear y dibujar el ABB en consola.\n";
        cout << "\tN. Mostrar los datos de todos los pacientes con apendicitis ordenados por n\243mero de habitaci\242n en "
                "orden ascendente.\n";
        cout << "\tO. Mostrar los datos de todos los pacientes con hernias ordenados por n\243mero de habitaci\242n en orden "
                "ascendente.\n";
        cout << "\tP. Mostrar los datos de todos los pacientes recorriendo el \240rbol en inorden.\n";
        cout << "\tQ. Buscar en el ABB los pacientes con apendicitis de la habitaci\242n cuyo n\243mero es el mayor y cuyo "
                "n\243mero es el menor y los pacientes con "
                "hernias de la habitaci\242n cuyo n\243mero es el mayor y cuyo n\243mero es el menor.\n";
        cout << "\tR. Contar el n\243mero de pacientes almacenados en el ABB cuyos n\243meros de habitaci\242n son impares.\n";
        cout << "\tT. Mostrar los pacientes que se encuentran almacenados en un nodo hoja.\n";
        cout << "\tU. Eliminar un paciente indicado por su n\243mero de habitaci\242n (que se pide desde consola) y mostrar "
                "el \240rbol "
                "resultante tras la eliminaci\242n de dicho paciente.\n";
        cout << "\tS. Salir.\n\n";
        cout << "\tIndique la opci\242n deseada: ";
        cin >> opcion;
        opcion = toupper(opcion);
        // system("clear"); para MAC
        system("cls"); // sólo windows. Comentar para otro SO
        switch(opcion) {
        case 'A':
            controlador.genera12Pacientes();
            break;
        case 'B':
            controlador.muestraPacientes();
           break;
        case 'C':
            controlador.borraPacientesPila();
            break;
        case 'D':
            controlador.encolarPacientes();
            break;
        case 'E':
            // controlador.muestraPacientesSalasAyB();
            break;
        case 'F':
            // controlador.muestraPacientesSalasCyD();
            break;
        case 'G':
            // controlador.borraPacientesColas();
            break;
        case 'H':
            // controlador.enlistarPacientes();
            break;
        case 'I':
            // controlador.muestraPacientesApendicitis();
            break;
        case 'J':
            // controlador.muestraPacientesHernias();
            break;
        case 'K':
            // controlador.buscarPacientes();
            break;
        case 'L':
            // controlador.reiniciar();
            break;
        case 'M':
            // controlador.crearYDibujarArbol();
            break;
        case 'N':
            // controlador.muestraPacientesApendicitisEnOrden();
            break;
        case 'O':
            // controlador.muestraPacientesHerniasEnOrden();
            break;
        case 'P':
            // controlador.muestraPacientesInOrden();
            break;
        case 'Q':
            // controlador.buscarPacientesArbol();
            break;
        case 'R':
            // controlador.contarPacientesHabImpar();
            break;
        case 'T':
            // controlador.mostrarPacientesHoja();
            break;
        case 'U':
            // controlador.eliminarPaciente();
            break;
        case 'S':
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "!Opci\242n incorrecta!\n\n";
            break;
    }

    } while(opcion != 'S');
    return 0;
}