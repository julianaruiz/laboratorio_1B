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
    float div_50,div_1,div_2,div_5,div_mil,div_dosmil,div_cincomil,div_diezmil,div_veintemil,res;
    cout << "Ingrese el monto a devolver" << endl;
    cin >> devo;
    div_cincuentamil=devo/50000;
    div_veintemil=(devo%50000)/20000;

    div_cincomil=(devo%10000)/5000;
    div_dosmil=(devo%5000)/2000;

    div_5=(devo%1000)/500;
    div_2=(devo%500)/200;

    div_50=(devo%100)/50;
    res=(devo%100)%50;

    if(devo%200/100>=1 || devo%2000/1000>=1 || devo%20000/10000>=1){
        if((devo%1000)/500==1 || (devo%10000)/5000==1 || (devo%100000)/50000==1){
            div_1=0;
            div_mil=0;
            div_diezmil=0;
        }
        else{
            div_1=1;
            div_mil=1;
            div_diezmil=1;
        }
    }
    else{
        if((devo%500)/200>=1 || (devo%5000)/2000>=1 || (devo%50000)/20000>=1){
            div_1=1;
            div_mil=1;
            div_diezmil=1;
        }
        else{
            if((devo%200)/100>=1 || (devo%2000)/1000>=1 || (devo%20000)/10000>=1){
                div_1=0;
                div_mil=0;
                div_diezmil=0;
            }
            else{
                div_1=1;
                div_mil=1;
                div_diezmil=1;
            }
        }
    }
/*
    if(devo%2000/1000>=1){
        if((devo%10000)/5000==1)
            div_mil=0;
        else
            div_mil=1;


    }
    else{
        if((devo%5000)/2000>=1)
            div_mil=1;
        else{
            if((devo%2000)/1000>=1)
                div_mil=0;
            else
                div_mil=1;
        }

    }

    if(devo%20000/10000>=1){
        if((devo%100000)/50000==1)
            div_diezmil=0;
        else
            div_diezmil=1;


    }
    else{
        if((devo%50000)/20000>=1)
            div_diezmil=1;
        else{
            if((devo%20000)/10000>=1)
                div_diezmil=0;
            else
                div_diezmil=1;
        }

    }


*/


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
     cout<<"50: "<<res<<endl;
    return 0;
}
