#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
  char user[20], password[20];
  char admin[] = "Juampi";
  char pass_ad[] = "skylex123";

  cout << "Juampi Shop" << endl;
  cout << "Ingrese Usuario" << endl;
  cin >> user;
  cout << "Ingrese Contraseña" << endl;
  cin >> password;

  if(strcmp(user,admin) == 0){
    if(strcmp(password,pass_ad) == 0){
      cout << "Bienvenido Juampi" << endl;
    } else{
      cout << "Usuario o Contraseña Incorrectos" << endl;
    }   
  } else{
    cout << "Usuario o Contraseña Incorrectos" << endl;
    return 0;
  }

  char opc,g,y,vd;
  int su_g = 10, pl_g = 10, pa_g = 10, sh_g = 10;
  int su_y = 10, pl_y = 10, pa_y = 10, sh_y = 10;

  while(true){
  cout << "Marcas disponibles:\nGymShark\nYoungLA" << endl;
  cin >> opc;
  switch(opc){
    case 'g':
      cout << "GymShark" << endl;
      cout << "1) Sudaderas | En stock: " << su_g << "\n2) Playeras  | En stock: " << pl_g << "\n3) Pants     | En stock: " << pa_g << "\n4) Shorts    | En stock: " << sh_g << endl;

      cin >> g;
      switch(g){
        case '1':
          cout << "Sudaderas" << endl;
          cout << "v) Venta\nd) Devolucion" << endl;
          cin >> vd;
          switch(vd){
            case 'v':
              cout << "Venta" << endl;
              int cant;
              cantidadv:
              cout << "Cantidad: ";
              cin >> cant;
              if(cant > su_g){
                cout << "No hay suficientes productos" << endl;
                goto cantidadv;
              } else{
                su_g = su_g - cant;
                cout << "Venta realizada" << endl;
                cout << "En stock: " << su_g << endl;
              }
                
              break;
            case 'd':
              cout << "Devolucion" << endl;
              cout << "Cantidad: ";
              cin >> cant;
                su_g = su_g + cant;
                cout << "Devolucion realizada" << endl;
                cout << "En stock: " << su_g << endl;
              break;
          }
        break;
        case '2':
          cout << "Playeras" << endl;
          cin >> vd;
          switch(vd){
            case 'v':
              cout << "Venta" << endl;
              int cant;
              cantidadvplg:
              cout << "Cantidad: ";
              cin >> cant;
              if(cant > pl_g){
                cout << "No hay suficientes productos" << endl;
                goto cantidadvplg;
              } else{
                pl_g = pl_g - cant;
                cout << "Venta realizada" << endl;
                cout << "En stock: " << pl_g << endl;
              }

              break;
            case 'd':
              cout << "Devolucion" << endl;
              cout << "Cantidad: ";
              cin >> cant;
                pl_g = pl_g + cant;
                cout << "Devolucion realizada" << endl;
                cout << "En stock: " << pl_g << endl;
              break;
          }
        break;
        case '3':
          cout << "Pants" << endl;
          cin >> vd;
          switch(vd){
            case 'v':
              cout << "Venta" << endl;
              int cant;
              cantidadvpag:
              cout << "Cantidad: ";
              cin >> cant;
              if(cant > pa_g){
                cout << "No hay suficientes productos" << endl;
                goto cantidadvpag;
              } else{
                pa_g = pa_g - cant;
                cout << "Venta realizada" << endl;
                cout << "En stock: " << pa_g << endl;
              }

              break;
            case 'd':
              cout << "Devolucion" << endl;
              cout << "Cantidad: ";
              cin >> cant;
                pa_g = pa_g + cant;
                cout << "Devolucion realizada" << endl;
                cout << "En stock: " << pa_g << endl;
              break;
          }
        break;
        case '4':
          cout << "Shorts" << endl;
          cin >> vd;
          switch(vd){
            case 'v':
              cout << "Venta" << endl;
              int cant;
              cantidadvshg:
              cout << "Cantidad: ";
              cin >> cant;
              if(cant > sh_g){
                cout << "No hay suficientes productos" << endl;
                goto cantidadvshg;
              } else{
                sh_g = sh_g - cant;
                cout << "Venta realizada" << endl;
                cout << "En stock: " << sh_g << endl;
              }

              break;
            case 'd':
              cout << "Devolucion" << endl;
              cout << "Cantidad: ";
              cin >> cant;
                sh_g = sh_g + cant;
                cout << "Devolucion realizada" << endl;
                cout << "En stock: " << sh_g << endl;
              break;
          }
        break;       
      }
      break;
    case 'y':
      cout << "YoungLA" << endl;
      cout << "1) Sudaderas | En stock: " << su_y << "\n2) Playeras  | En stock: " << pl_y << "\n3) Pants     | En stock: " << pa_y << "\n4) Shorts    | En stock: " << sh_y << endl;
      
      cin >> y;
      switch(y){
        case '1':
          cout << "Sudaderas" << endl;
          cin >> vd;
          switch(vd){
            case 'v':
              cout << "Venta" << endl;
              int cant;
              cantidadvsuy:
              cout << "Cantidad: ";
              cin >> cant;
              if(cant > su_y){
                cout << "No hay suficientes productos" << endl;
                goto cantidadvsuy;
              } else{
                su_y = su_y - cant;
                cout << "Venta realizada" << endl;
                cout << "En stock: " << su_y << endl;
              }

              break;
            case 'd':
              cout << "Devolucion" << endl;
              cout << "Cantidad: ";
              cin >> cant;
                su_y = su_y + cant;
                cout << "Devolucion realizada" << endl;
                cout << "En stock: " << su_y << endl;
              break;
          }
        break;
        case '2':
          cout << "Playeras" << endl;
          cin >> vd;
          switch(vd){
            case 'v':
              cout << "Venta" << endl;
              int cant;
              cantidadvply:
              cout << "Cantidad: ";
              cin >> cant;
              if(cant > pl_y){
                cout << "No hay suficientes productos" << endl;
                goto cantidadvply;
              } else{
                pl_y = pl_y - cant;
                cout << "Venta realizada" << endl;
                cout << "En stock: " << pl_y << endl;
              }

              break;
            case 'd':
              cout << "Devolucion" << endl;
              cout << "Cantidad: ";
              cin >> cant;
                pl_y = pl_y + cant;
                cout << "Devolucion realizada" << endl;
                cout << "En stock: " << pl_y << endl;
              break;
          }
        break;
        case '3':
          cout << "Pants" << endl;
          cin >> vd;
          switch(vd){
            case 'v':
              cout << "Venta" << endl;
              int cant;
              cantidadvpay:
              cout << "Cantidad: ";
              cin >> cant;
              if(cant > pa_y){
                cout << "No hay suficientes productos" << endl;
                goto cantidadvpay;
              } else{
                pa_y = pa_y - cant;
                cout << "Venta realizada" << endl;
                cout << "En stock: " << pa_y << endl;
              }

              break;
            case 'd':
              cout << "Devolucion" << endl;
              cout << "Cantidad: ";
              cin >> cant;
                pa_y = pa_y + cant;
                cout << "Devolucion realizada" << endl;
                cout << "En stock: " << pa_y << endl;
              break;
          }
        break;
        case '4':
          cout << "Shorts" << endl;
          cin >> vd;
          switch(vd){
            case 'v':
              cout << "Venta" << endl;
              int cant;
              cantidadvshy:
              cout << "Cantidad: ";
              cin >> cant;
              if(cant > sh_y){
                cout << "No hay suficientes productos" << endl;
                goto cantidadvshy;
              } else{
                sh_y = sh_y - cant;
                cout << "Venta realizada" << endl;
                cout << "En stock: " << sh_y << endl;
              }

              break;
            case 'd':
              cout << "Devolucion" << endl;
              cout << "Cantidad: ";
              cin >> cant;
                sh_y = sh_y + cant;
                cout << "Devolucion realizada" << endl;
                cout << "En stock: " << sh_y << endl;
              break;
          }
        break;       
      }
      break;
    default:
      cout << "Opción no válida" << endl;
      break;
  }
  }
  return 0;
}