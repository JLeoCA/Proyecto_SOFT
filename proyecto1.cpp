#include <iostream>
using namespace std;

int main() {
    int categoria;
    int producto;
    int confirmar;
    bool volverAlMenu;

    do {cout<<"-----------------------------------------------------"<<endl;
        cout << "    BIENVENIDO A LA TIENDA DE ROPA SPORT-MARKET   " << endl;
        cout << endl;
        cout << "    ELIGE LA CATEGORIA QUE TE INTERESA:" << endl;
        cout << "    1: CAMISETAS" << endl;
        cout << "    2: JEAN" << endl;
        cout << "    3: ZAPATOS" << endl;
        cout << "    4: VOLVER AL MENU INICIAL" << endl;
        cout << "-----------------------------------------------------"<<endl;
        cin >> categoria;

        while (categoria < 1 || categoria > 4) {
            cout << "Ingrese una opción válida (1-4):" << endl;
            cin >> categoria;
        }

        if (categoria == 4) {
            volverAlMenu = true;
            continue;
        }

        switch (categoria) {
            case 1:
                cout << "Bienvenido a la sección de CAMISETAS" << endl;
                cout << endl;
                cout << "PARA LUCIR UN TORSO LLAMATIVO Y ORIGINAL TENEMOS:" << endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"         Nombre: AIR JORDAN WORDMARK"<<endl;
				cout<<"         Stock: 50 u."<<endl;
		 		cout<<"         Bs. 700"<<endl;
				cout<<"         $. 100"<<endl;
                cout<<"         codigo: #10011"<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"         Nombre: NIKE DRI-FIT"<<endl;
				cout<<"         Stock: 50 u."<<endl;
		 		cout<<"         Bs. 1750"<<endl;
				cout<<"         $. 250"<<endl;
                cout<<"         codigo: #10012"<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"         Nombre: JORDAN JUMPMAN"<<endl;
				cout<<"         Stock: 50 u."<<endl;
		 		cout<<"         Bs. 350"<<endl;
				cout<<"         $. 50"<<endl;
                cout<<"         codigo: #10013"<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                break;

            case 2:
                cout << "Bienvenido a la sección de JEAN" << endl;
                cout << endl;
                cout << "PARA QUE MODELES LAS PIERNAS CON UN LOOK NUEVO:" << endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"         Nombre: NIKECOURT"<<endl;
				cout<<"         Stock: 50 u."<<endl;
		 		cout<<"         Bs. 1400"<<endl;
				cout<<"         $. 200"<<endl;
                cout<<"         codigo: #10014"<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"         Nombre: JORDAN SPORT DRI-FIT"<<endl;
				cout<<"         Stock: 50 u."<<endl;
		 		cout<<"         Bs. 1750"<<endl;
				cout<<"         $. 250"<<endl;
                cout<<"         codigo: #10015"<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"         Nombre: JORDAN GOLF"<<endl;
				cout<<"         Stock: 50 u."<<endl;
		 		cout<<"         Bs. 2100"<<endl;
				cout<<"         $. 300"<<endl;
                cout<<"         codigo: #10016"<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;

                break;

            case 3:
                cout << "Bienvenido a la sección de ZAPATOS" << endl;
                cout << endl;
                cout << "PARA DEJAR TU HUELLA POR DONDE PASES:" << endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"         Nombre: NIKE AIR MAX ALPHA TRAINER"<<endl;
				cout<<"         Stock: 50 u."<<endl;
		 		cout<<"         Bs. 2800"<<endl;
				cout<<"         $. 400"<<endl;
                cout<<"         codigo: #10017"<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"         Nombre: AIR JORDAN 1 LOW"<<endl;
				cout<<"         Stock: 50 u."<<endl;
		 		cout<<"         Bs. 1400"<<endl;
				cout<<"         $. 200"<<endl;
                cout<<"         codigo: #10018"<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;
                cout<<"         Nombre: JORDAN GOLF"<<endl;
				cout<<"         Stock: 50 u."<<endl;
		 		cout<<"         Bs. 2100"<<endl;
				cout<<"         $. 300"<<endl;
                cout<<"         codigo: #10019"<<endl;
                cout<<"_________________________________________"<<endl;
                cout<<endl;

                break;
        }

        cout << "Selecciona un producto: ";
        cin >> producto;

        switch (categoria) {
            case 1:
                switch (producto) {
                    case 1:
                        cout << "Seleccionaste el producto AIR-JORDAN WORDMARK" << endl;
                        break;
                    case 2:
                        cout << "Seleccionaste NIKE DRI-FIT" << endl;
                        break;
                    case 3:
                        cout << "Seleccionaste JORDAN JUMPMAN" << endl;
                        break;
                    default:
                        cout << "Producto no válido. Por favor, elija una opción válida." << endl;
                        volverAlMenu = true;
                        break;
                }
                break;

            case 2:
                switch (producto) {
                    case 1:
                        cout << "Seleccionaste NIKECOURT" << endl;
                        break;
                    case 2:
                        cout << "Seleccionaste JORDAN SPORT DRI-FIT" << endl;
                        break;
                    case 3:
                        cout << "Seleccionaste JORDAN GOLF" << endl;
                        break;
                    default:
                        cout << "Producto no válido. Por favor, elija una opción válida." << endl;
                        volverAlMenu = true;
                        break;
                }
                break;

            case 3:
                switch (producto) {
                    case 1:
                        cout << "Seleccionaste NIKE AIR MAX ALPHA TRAINER 5" << endl;
                        break;
                    case 2:
                        cout << "Seleccionaste AIR JORDAN 1 LOW" << endl;
                        break;
                    case 3:
                        cout << "Seleccionaste NIKE OFF-WHITE (GOLDEN DUNK)" << endl;
                        break;
                    default:
                        cout << "Producto no válido. Por favor, elija una opción válida." << endl;
                        volverAlMenu = true;
                        break;
                }
                break;

            default:
                cout << "Categoría no válida. Por favor, elija una opción válida." << endl;
                volverAlMenu = true;
                break;
        }

        if (volverAlMenu) {
            continue;
        }

        cout << "Confirmar selección:" << endl;
        cout << "1. SI" << endl;
        cout << "2. NO" << endl;
        cout << "3. VOLVER AL MENU INICIAL" << endl;
        cin >> confirmar;

        while (confirmar < 1 || confirmar > 3) {
            cout << "Ingrese una opción válida (1-3):" << endl;
            cin >> confirmar;
        }

        switch (confirmar) {
            case 1:
                cout << "¡GENIAL! Puedes pasar a la tienda a ver el producto" << endl;
                cout << "Dirección de la tienda: Avenida EL INGENIERO HACKER #168" << endl;
                cout << "Si no puedes pasar por la tienda comunícate al siguiente número y coordina la entrega y compra: +591 67824920" << endl;
                cout << "También puedes escribirnos al correo: ropagg@protonmail.com" << endl;
                break;
            case 2:
                cout << "Oh vaya, esperamos que vuelvas :( " << endl;
                break;
            case 3:
                cout << "Toma todo el tiempo que necesites para elegir lo que más te guste :)" << endl;
                volverAlMenu = true;
                break;
            default:
                break;
        }

    } while (volverAlMenu);

    cout << "___________________________________________________" << endl;
    cout << "|                     :)                           |" << endl;
    cout << "|Gracias por visitar nuestra tienda. ¡Hasta luego! |" << endl;
    cout << "|                       <3                         |" << endl;
    cout << "|__________________________________________________|" << endl;


    return 0;
}


