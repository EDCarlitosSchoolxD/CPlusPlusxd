#include <iostream>
using namespace std;


int main(){
    // Variables;
    int dia;
    int mes;
    int año;
    string chino;
    string zodiaco;
    string celta;

    // Recoleccion de datos
    // Dia
    cout << "Dime tu dia de nacimiento ";
    cin >> dia;
    // Mes
    cout << "Dime tu mes de nacimiento ";
    cin >> mes;
    // Año
    cout << "Dime tu año de nacimiento ";

    cin >> año;

    // Validacion signo zodiacal;
            if(dia >= 21  && mes ==3  || dia <= 19 && mes ==4 ){
               zodiaco = "Aries";
            }else if(dia >=20 && mes ==4 || dia <=21 && mes==5){
               zodiaco = "Tauro";
            }else if(dia >=21 && mes==5 || dia <=20 && mes==6 ){
               zodiaco="Géminis";
            }else if(dia >=21 && mes==6 || dia <=22 && mes==7 ){
               zodiaco="Cáncer";
            }else if(dia >=23 && mes==7 || dia <=22 && mes==8 ){
               zodiaco="Leo";
            }else if(dia >=23 && mes==8 || dia <=22 && mes==9 ){
               zodiaco="Virgo";
            }else if(dia >=23 && mes==9 || dia <=22 && mes==10 ){
               zodiaco="Libra";
            }else if(dia >=23 && mes==10 || dia <=21 && mes==11 ){
               zodiaco="Escorpión";
            }else if(dia >=22 && mes==11 || dia <=21 && mes==12 ){
               zodiaco="Sagitario";
            }else if(dia >=22 && mes==12 || dia <=20 && mes==1 ){
               zodiaco="Capricornio";
            }else if(dia >=21 && mes==1 || dia <=18 && mes==2 ){
               zodiaco="Acuario";
            }else if(dia >=19 && mes==2 || dia <=20 && mes==3 ){
               zodiaco="Piscis";
            }else{
                zodiaco="No existe";
            }

        // Validacion signo chino;

            chino;
            int residuo = año % 12;

            switch (residuo) {
                case 4:
                    chino = "Rata";
                    break;
                case  5 :
                    chino = "Buey";
                break;
                case 6:
                    chino = "Tigre";
                    break;
                    case  7 :
                        chino="Conejo";
                    break;
                    case 8 :
                        chino="Dragón";
                    break ;           
                    case 9 :
                        chino="Serpiente";
                    break ; 
                    case 10 :
                        chino="Caballo";
                    break ;
                    case 11 :
                        chino="Cabra";
                    break ;
                    case 0 :
                        chino="Mono";
                    break ;
                    case 1 :
                        chino="Gallo";
                    break ; 
                    case 2 :
                        chino="Perro";
                    break ; 
                    case 3 :
                        chino="Cerdo";
                    break ;                                           
                default:
                    chino = "No hay";
                    break;
            }


        // Validacion signo Celta;
            if(dia >=24 && mes ==12 || dia <=20 && mes ==1){
                celta = "Ciervo";
            }else if(dia >=21 && mes == 1 || dia <= 17 && mes ==2){
                celta = "Gato";
            }else if(dia >=18 && mes == 2 || dia <= 17 && mes ==3){
                celta = "Serpiente";
            }else if(dia >=18 && mes == 3 || dia <= 14 && mes ==4){
                celta = "Zorro";
            }else if(dia >=15 && mes == 4 || dia <= 12 && mes == 5){
                celta = "Toro";
            }else if(dia >=13 && mes == 5 || dia <= 9 && mes ==6){
                celta = "Caballo de mar";
            }else if(dia >=10 && mes == 6 || dia <= 7 && mes ==7){
                celta = "Cuervo";
            }else if(dia >=8 && mes == 7 || dia <= 4 && mes ==8){
                celta = "Caballo";
            }else if(dia >=5 && mes == 8 || dia <= 1 && mes ==9){
                celta = "Salmón";
            }else if(dia >=2 && dia <= 29 && mes == 9){
                celta = "Cisne";
            }else if(dia >=30 && mes == 9 || dia <= 27 && mes ==10){
                celta = "Mariposa";
            }else if(dia >=28 && mes == 10 || dia <= 24 && mes ==11){
                celta = "Lobo";
            }else if(dia >=25 && mes == 11 || dia <= 23 && mes ==12){
                celta = "Halcón";
            }

    cout << "\nTu signo zodiacal es: "<< zodiaco;
    cout << "\nTu signo chino es: "<< chino;
    cout << "\nTu signo celta es: " << celta;

}