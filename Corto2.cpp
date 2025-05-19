#include <iostream>
using namespace std;

int main(){

    int edad;
    double comboH,comboP,AlmuerzoE, Sopa,Casero,Postre, Saldo=7, SaldoRestante;   
    char opcionCliente,opcionPlato, OpcionPlato2, OpcionPlato3;
    double DescuentoH,DescuentoP,DescuentoE,DescuentoSopa, DescuentoCasero, DescuentoPostre, DescuentoAdulto;
    
        cout<<"Bienvenido a pagina de compras "<<endl;
        cout<<endl<<"Por favor, ingrese su edad: ";
        cin>>edad;

            if (edad>=12)
            {
                cout<<endl<<"Seleccione el tipo de cliente: "<<endl;
                cout<<"1.Para estudiante\n2.Para Adulto mayor\n3.Para ver todo "<<endl;
                cin>>opcionCliente;

                    switch (opcionCliente)
                    {

                        //AQUI INICIA LA OPCION DE ESTUDIANTE

                    case '1':
                        cout<<"Para estudiante: "<<endl;
                        cout<<endl<<"A los platos de estudiante, se le aplicara un descuento del %25, que se vera reflejado a la hora de seleccionar el combo a comprar"<<endl;
                        cout<<endl<<"1.Combo hamburguesa: $8\n2.Combo pizza personal: $7\n3.Almuerzo ejecutivo: $10"<<endl;
                        cout<<"Seleccione el plato que quiere comprar: "<<endl;
                        cin>>opcionPlato;

                        //AQUI INCIA LA OPCION DE LOS PLATOS A ELEGIR

                            switch (opcionPlato)
                            {
                            case '1':

                                cout<<endl<<"Su saldo incial es de: $"<<Saldo<<endl;
                                DescuentoH=8*0.25;
                                comboH=8-DescuentoH;
                                cout<<"Tu combo vale: "<<comboH;

                                    if (comboH<=Saldo)
                                    {
                                        cout<<endl<<"compra exitosa, tu plato adquirido fue: Combo de hamburguesa "<<endl;
                                        SaldoRestante=Saldo-comboH;
                                        cout<<endl<<"Tu saldo restante es de: $"<<SaldoRestante;

                                    }else if (comboH>Saldo)
                                    {
                                        cout<<endl<<"Saldo insuficiente. "<<endl;
                                        return 0;
                                    }
                                    break;
                            
                            case '2':
                                cout<<endl<<"Su saldo incial es de: "<<Saldo<<endl;
                                DescuentoP=7*0.25;
                                comboP=7-DescuentoP;
                                cout<<"Tu combo vale: "<<comboP;

                                    if (comboP<=Saldo)
                                    {
                                        cout<<endl<<"compra exitosa, tu plato adquirido fue: Combo pizza personal "<<endl;
                                        SaldoRestante=Saldo-comboP;
                                        cout<<endl<<"Tu saldo restante es de: $"<<SaldoRestante;

                                    }else if (comboP>Saldo)
                                    {
                                        cout<<endl<<"Saldo insuficiente. "<<endl;
                                        return 0;
                                    }
                                break;

                            case '3':
                                cout<<endl<<"Su saldo incial es de: "<<Saldo<<endl;
                                DescuentoE=10*0.25;
                                AlmuerzoE=10-DescuentoE;
                                cout<<"Tu combo vale: "<<AlmuerzoE;  

                                    if (AlmuerzoE<=Saldo)
                                    {
                                        cout<<endl<<"compra exitosa, tu plato adquirido fue: Almuerzo Ejecutivo "<<endl;
                                        SaldoRestante=Saldo-AlmuerzoE;
                                        cout<<endl<<"Tu saldo restante es de: $"<<SaldoRestante;

                                    }else if (AlmuerzoE>Saldo)
                                    {
                                        cout<<endl<<"Saldo insuficiente. "<<endl;
                                        return 0;
                                    }
                                break;  

                                //AQUI TERMINA LA OPCION DE LOS PLATOS
                            
                            default:
                                cout<<"Ingrese una opcion valida. ";
                                break;

                            }

                            //AQUI TERMINA LA OPCION PARA ESTUDIANTES
                        break;



                        //AQUI COMIENZA LA OPCION PARA ADULTOS MAYORES
                    case '2':
                        cout<<"Para adulto mayor: "<<endl;
                        cout<<endl<<"A los platos de adulto mayor, se le aplicara un descuento del %30, que se vera reflejado a la hora de seleccionar el combo a comprar"<<endl;
                        cout<<endl<<"1.Sopa nutritiva: $6\n2.Plato casero: $9\n3.Postre + cafe: $5"<<endl;
                        cout<<"Seleccione el plato que quiere comprar: "<<endl;
                        cin>>OpcionPlato2;

                            switch (OpcionPlato2)
                            {

                                //AQUI COMIENZA LA OPCION DE LOS PLATOS DE ADULTO 


                            case '1':

                                cout<<endl<<"Su saldo incial es de: $"<<Saldo<<endl;
                                DescuentoSopa=6*0.30;
                                Sopa=6-DescuentoSopa;
                                cout<<"Tu combo vale: "<<Sopa;

                                    if (Sopa<=Saldo)
                                    {
                                        cout<<endl<<"compra exitosa, tu plato adquirido fue: Sopa Nutritiva "<<endl;
                                        SaldoRestante=Saldo-Sopa;
                                        cout<<endl<<"Tu saldo restante es de: $"<<SaldoRestante;

                                    }else if (Sopa>Saldo)
                                    {
                                        cout<<endl<<"Saldo insuficiente. "<<endl;
                                        return 0;
                                    }
                                    break;
                            
                            case '2':
                                cout<<endl<<"Su saldo incial es de: "<<Saldo<<endl;
                                DescuentoCasero=9*0.30;
                                Casero=9-DescuentoCasero;
                                cout<<"Tu combo vale: "<<Casero;

                                    if (Casero<=Saldo)
                                    {
                                        cout<<endl<<"compra exitosa, tu plato adquirido fue: Plato Caseero "<<endl;
                                        SaldoRestante=Saldo-Casero;
                                        cout<<endl<<"Tu saldo restante es de: $"<<SaldoRestante;

                                    }else if (Casero>Saldo)
                                    {
                                        cout<<endl<<"Saldo insuficiente. "<<endl;
                                        return 0;
                                    }
                                break;

                            case '3':
                                cout<<endl<<"Su saldo incial es de: "<<Saldo<<endl;
                                DescuentoPostre=5*0.30;
                                Postre=5-DescuentoPostre;
                                cout<<"Tu combo vale: "<<Postre;  

                                    if (Postre<=Saldo)
                                    {
                                        cout<<endl<<"compra exitosa, tu plato adquirido fue: Postre + cafe "<<endl;
                                        SaldoRestante=Saldo-Postre;
                                        cout<<endl<<"Tu saldo restante es de: $"<<SaldoRestante;

                                    }else if (Postre>Saldo)
                                    {
                                        cout<<endl<<"Saldo insuficiente. "<<endl;
                                        return 0;
                                    }
                                break;  

                                //AQUI TERMINAN LOS PLATOS DE ADULTO
                            
                            default:
                                cout<<"Ingrese una opcion valida. ";
                                break;

                            }

                            //AQUI TERMINA LA OPCION PARA ADULTOS
                        break;



                        break;

                        //AQUI COMIENZA LA OPCION PARA TODOS
                    
                    case '3':
                        cout<<endl<<"Ver todo: "<<endl;
                        cout<<endl<<"1.Combo hamburguesa: $8\n2.Combo pizza personal: $7\n3.Almuerzo ejecutivo: $10"<<endl;
                        cout<<endl<<"4.Sopa nutritiva: $6\n5.Plato casero: $9\n6.Postre + cafe: $5"<<endl;
                        cout<<"Seleccione el plato que quiere comprar: "<<endl;
                        cin>>OpcionPlato3;

                            switch (OpcionPlato3)
                            {

                                //AQUI COMIENZAN TODOS LOS PLATOS

                            case '1':

                                cout<<endl<<"Su saldo incial es de: $"<<Saldo<<endl;
                                DescuentoH=8*0.25;
                                comboH=8-DescuentoH;
                                cout<<"Tu combo vale: "<<comboH;

                                    if (comboH<=Saldo)
                                    {
                                        cout<<endl<<"compra exitosa, tu plato adquirido fue: Combo de hamburguesa "<<endl;
                                        SaldoRestante=Saldo-comboH;
                                        cout<<endl<<"Tu saldo restante es de: $"<<SaldoRestante;

                                    }else if (comboH>Saldo)
                                    {
                                        cout<<endl<<"Saldo insuficiente. "<<endl;
                                        return 0;
                                    }
                                    break;
                            
                            case '2':
                                cout<<endl<<"Su saldo incial es de: "<<Saldo<<endl;
                                DescuentoP=7*0.25;
                                comboP=7-DescuentoP;
                                cout<<"Tu combo vale: "<<comboP;

                                    if (comboP<=Saldo)
                                    {
                                        cout<<endl<<"compra exitosa, tu plato adquirido fue: Combo pizza personal "<<endl;
                                        SaldoRestante=Saldo-comboP;
                                        cout<<endl<<"Tu saldo restante es de: $"<<SaldoRestante;

                                    }else if (comboP>Saldo)
                                    {
                                        cout<<endl<<"Saldo insuficiente. "<<endl;
                                        return 0;
                                    }
                                break;

                            case '3':
                                cout<<endl<<"Su saldo incial es de: "<<Saldo<<endl;
                                DescuentoE=10*0.25;
                                AlmuerzoE=10-DescuentoE;
                                cout<<"Tu combo vale: "<<AlmuerzoE;  

                                    if (AlmuerzoE<=Saldo)
                                    {
                                        cout<<endl<<"compra exitosa, tu plato adquirido fue: Almuerzo Ejecutivo "<<endl;
                                        SaldoRestante=Saldo-AlmuerzoE;
                                        cout<<endl<<"Tu saldo restante es de: $"<<SaldoRestante;

                                    }else if (AlmuerzoE>Saldo)
                                    {
                                        cout<<endl<<"Saldo insuficiente. "<<endl;
                                        return 0;
                                    }
                                break;

                            case '4':

                                cout<<endl<<"Su saldo incial es de: $"<<Saldo<<endl;
                                DescuentoSopa=6*0.30;
                                Sopa=6-DescuentoSopa;
                                cout<<"Tu combo vale: "<<Sopa;

                                    if (Sopa<=Saldo)
                                    {
                                        cout<<endl<<"compra exitosa, tu plato adquirido fue: Sopa Nutritiva "<<endl;
                                        SaldoRestante=Saldo-Sopa;
                                        cout<<endl<<"Tu saldo restante es de: $"<<SaldoRestante;

                                    }else if (Sopa>Saldo)
                                    {
                                        cout<<endl<<"Saldo insuficiente. "<<endl;
                                        return 0;
                                    }
                                    break;
                            
                            case '5':
                                cout<<endl<<"Su saldo incial es de: "<<Saldo<<endl;
                                DescuentoCasero=9*0.30;
                                Casero=9-DescuentoCasero;
                                cout<<"Tu combo vale: "<<Casero;

                                    if (Casero<=Saldo)
                                    {
                                        cout<<endl<<"compra exitosa, tu plato adquirido fue: Plato Caseero "<<endl;
                                        SaldoRestante=Saldo-Casero;
                                        cout<<endl<<"Tu saldo restante es de: $"<<SaldoRestante;

                                    }else if (Casero>Saldo)
                                    {
                                        cout<<endl<<"Saldo insuficiente. "<<endl;
                                        return 0;
                                    }
                                break;

                            case '6':
                                cout<<endl<<"Su saldo incial es de: "<<Saldo<<endl;
                                DescuentoPostre=5*0.30;
                                Postre=5-DescuentoPostre;
                                cout<<"Tu combo vale: "<<Postre;  

                                    if (Postre<=Saldo)
                                    {
                                        cout<<endl<<"compra exitosa, tu plato adquirido fue: Postre + cafe "<<endl;
                                        SaldoRestante=Saldo-Postre;
                                        cout<<endl<<"Tu saldo restante es de: $"<<SaldoRestante;

                                    }else if (Postre>Saldo)
                                    {
                                        cout<<endl<<"Saldo insuficiente. "<<endl;
                                        return 0;
                                    }
                                break;

                                //AQUI TERMINAN TODOS LOS PLATOS
                            
                            default:
                                cout<<"Seleccione una opcion valida"<<endl;
                                break;
                            }

                        //AQUI TERMINA PARA TODOS
                
                       

                    
                    }



            }else if (edad<12)
            {
               cout<<"No puede proceder con la compra";
               return 0;

            }else{
                cout<<"Por favor, ingresa una edad valida";
                
            }
            
            



    return 0;
}