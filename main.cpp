/*
Se necesita un programa que permita determinar la mínima combinación de billetes
y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
$20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Hacer un programa que entregue el número de billetes y monedas de cada denominación para com-
pletar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
cantidad deseada, el sistema deberá decir lo que resta para lograrla.
*/

#include <iostream>

using namespace std;

int main()
{
    int devo,div_cincuentamil;
    float div_50,div_1,div_2,div_5,div_mil,div_dosmil,div_cincomil,div_diezmil,div_veintemil,res,con_diez,con_mil,con_1;
    cout << "Ingrese el monto a devolver" << endl;
    cin >> devo;
    div_cincuentamil=devo/50000;  //genera la cantidad de billetes de 50.000 a devolver.
    div_veintemil=(devo%50000)/20000; //genera la cantidad de billetes de 20.000 a devolver.
    con_diez=devo/10000;
    if(con_diez==8 || con_diez==6 || con_diez==3 || con_diez==1)  //Devuelve la cantidad de billetes de 10.000 según el entero dado.
        div_diezmil=1;
    else
        div_diezmil=0;
    div_cincomil=(devo%10000)/5000; //genera la cantidad de billetes de 5.000 a devolver.
    div_dosmil=(devo%5000)/2000;   //genera la cantidad de billetes de 2.000 a devolver.
    con_mil=(devo%10000)/1000;   //genera la cantidad de billetes de 1.000 a devolver.
    if(con_mil==8 || con_mil==6 || con_mil==3 || con_mil==1) //Devuelve la cantidad de billetes de 1.000 según el entero dado.
        div_mil=1;
    else
        div_mil=0;
    div_5=(devo%1000)/500;  //genera la cantidad de monedas de 500 a devolver.
    div_2=(devo%500)/200;   //genera la cantidad de monedas de 200 a devolver.
    con_1=(devo%1000)/100;
    if(con_1==8 || con_1==6 || con_1==3 || con_1==1)  //Devuelve la cantidad de monedas de 100 según el entero dado.
       div_1=1;
    else
        div_1=0;
    div_50=(devo%100)/50;  //genera la cantidad de monedas de 50 a devolver.
    res=(devo%100)%50;

    cout<<"50.000: "<<div_cincuentamil<<endl;
    cout<<"20.000: "<<div_veintemil<<endl;
    cout<<"10.000: "<<div_diezmil<<endl;
    cout<<"5.000: "<<div_cincomil<<endl;
    cout<<"2.000: "<<div_dosmil<<endl;
    cout<<"1.000: "<<div_mil<<endl;
    cout<<"500: "<<div_5<<endl;
    cout<<"200: "<<div_2<<endl;
    cout<<"100: "<<div_1<<endl;
    cout<<"50: "<<div_50<<endl;
     cout<<"residuo: "<<res<<endl;
    return 0;
}
