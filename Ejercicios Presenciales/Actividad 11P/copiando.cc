typedef char Tcadena [20];
typedef struct{
    int num;
    Tcadena nombre;
    int anyo;
}Treg;    

int main(){
    int vector1[20], vector2[20];
    char  nombre1[20], nombre2[20];
    Tcadena frase1[30], frase2[30];
    Treg reg1, reg2;
    Treg registro1[50], registro2[50];
    
    int i;

    // tengo los que llevan el número 2 rellenos

   // voy a copiar los que tienen número 2 en el 1:
   // copio vector2 en vector1
    for (i=0; i<20; i++)
        vector1[i]=vector2[i];
    
   // copio nombre2 en nombre1
    strcpy(nombre1, nombre2);
    
   // copio frase2 en frase1
    for(i=0; i<30; i++)
        strcpy(frase1[i], frase2[i]);
   
   // copìo reg2 en reg1
      reg1 = reg2;
    
   // copio registro2 en registro1
       for(i=0; i<50; i++)
           registro1[i]=registro2[i];
    
}