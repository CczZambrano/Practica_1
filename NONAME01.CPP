#include <iostream.h>
#include <conio.h>



   float f1(int min);
main(){
  int min;
  char tipo;
  cout<<"total de minutos";
  cin>>min;
   cout<<"i) internacionales"<<endl
   cout<<"n) nacionales"<<endl;
   cout<<"l) locales"<<endl;
   cout<<"tipo de llamada"<<endl;
   cin>>tipo;

   switch (tipo){
   case 'i':
   cout<<"total de llamada"<<f1(min,8,4.20);
    break;
    case 'n':

    cout<<"total de llamada"<<f1(min,2.40,1.10);
    break;
    case '1':


    break;
    default: cout<<"no existe el tipo";
    }
    llam++

   getch();


}

  float f1(int min,float z1,float z2,float t){
   if(min<=3){
   t=t+z1;
}

  else {
  t=((float (min)-3)*z2)+z1;
}
  return t;
}







