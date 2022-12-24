#include <stdio.h>
#ifdef _WIN32
  #include<windows.h>
#endif

void clear(){
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}
void arbolnavidad(int n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n - i; j++) {
        printf(" ");
      }

      for (int j = 0; j <= i; j++) {
        printf("🎄");
      }
      printf("\n");
    }
}

int main(){
    int salir=1;
    int op=0;
    while(salir==1){
        printf("\033[0;35mARBOL DE NAVIDAD\033[0m\n");
        printf("1-Ingresar tamanio\n");
        printf("2-Salir\n");
        printf("Opcion: ");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            printf("Tamanio: ");
            int n=0;
            scanf("%d",&n);
            arbolnavidad(n);
            printf("Presiona cualquier tecla para continuar...\n");
            getchar();
            getchar();
            clear();
            break;
        case 2:
            salir=2;
            break;
        default:
            printf("Opcion incorreta vuelva a intentarlo....");
            getchar();
            getchar();
            clear();
            break;
        }
    }
    printf("\033[0;36m\tFeliz Navidad...\033[0m\n");
}

//Feliz★* 。 • ˚ ˚ ˛ ˚ ˛ •
//•。★Navidad★ 。* 。
//° 。 ° ˛˚˛ * _Π_____*。*˚
//˚ ˛ •˛•˚ */______/~＼。˚ ˚ ˛
//˚ ˛ •˛• ˚ ｜ 田田 ｜門｜ ˚
//@krandomware
