 #include<LiquidCrystal.h>
 LiquidCrystal lcd (13,12,11,10,9,8); //RS,E,D4,D5,D6,D7
 
 String dato; //variable de recepcion de string
 int tam; //tamaño de caracteres
 int i=0; //variable de recorrido
 String salida; //mensaje codificado
 

void setup() {
 Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    dato=Serial.readString(); //lee el dato
    //dato.toLowerCase(); //convertimos a minusculas
    tam=dato.length()+1;
    char vector [tam];
    dato.toCharArray(vector,tam);
    //validar si los caracteres son vocales
    for(i=0;i<tam-1;i++){
      if(vector[i]=='a' || vector[i]=='b' || vector[i]=='c' || vector[i]=='d' || vector[i]=='e' || vector[i]=='f' || vector[i]=='g' || vector[i]=='h' || vector[i]=='i' || vector[i]=='j' || vector[i]=='k' || vector[i]=='l' || vector[i]=='m' || vector[i]=='n' || vector[i]=='o' || vector[i]=='p' || vector[i]=='q' || vector[i]=='r' || vector[i]=='s' || vector[i]=='t' || vector[i]=='u' || vector[i]=='v' || vector[i]=='w' || vector[i]=='x' || vector[i]=='y' || vector[i]=='z' || vector[i]=='0' || vector[i]=='1' || vector[i]=='2' || vector[i]=='3' || vector[i]=='4' || vector[i]=='5' || vector[i]=='6' || vector[i]=='7' || vector[i]=='8' || vector[i]=='9')
        Serial.print(' ');
    }
      for(i=0;i<tam-1;i++){
        switch(vector[i]){
          case 'a':
            salida=salida+".-";
            break;
            case 'b':
            salida=salida+"-...";
            break;
            case 'c':
            salida=salida+"-.-.";
            break;
            case 'd':
            salida=salida+"-..";
            break;
            case 'e':
            salida=salida+".";
            break;
            case 'f':
            salida=salida+"..-.";
            break;
            case 'g':
            salida=salida+"--.";
            break;
            case 'h':
            salida=salida+"....";
            break;
            case 'i':
            salida=salida+"..";
            break;
            case 'j':
            salida=salida+".---";
            break;
            case 'k':
            salida=salida+"-.-";
            break;
            case 'l':
            salida=salida+".-..";
            break;
            case 'm':
            salida=salida+"--";
            break;
            case 'n':
            salida=salida+"-.";
            break;
            case 'o':
            salida=salida+"---";
            break;
            case 'p':
            salida=salida+".--.";
            break;
            case 'q':
            salida=salida+"--.-";
            break;
            case 'r':
            salida=salida+".-.";
            break;
            case 's':
            salida=salida+"...";
            break;
            case 't':
            salida=salida+"-";
            break;
            case 'u':
            salida=salida+"..-";
            break;
            case 'v':
            salida=salida+"...-";
            break;
            case 'w':
            salida=salida+".--";
            break;
            case 'x':
            salida=salida+"-..-";
            break;
            case 'y':
            salida=salida+"-.--";
            break;
            case 'z':
            salida=salida+"--..";
            break;
            case '0':
            salida=salida+"-----";
            break;
            case '1':
            salida=salida+".----";
            break;
            case '2':
            salida=salida+"..---";
            break;
            case '3':
            salida=salida+"...--";
            break;
            case '4':
            salida=salida+"....-";
            break;
            case '5':
            salida=salida+".....";
            break;
            case '6':
            salida=salida+"-....";
            break;
            case '7':
            salida=salida+"--...";
            break;
            case '8':
            salida=salida+"---..";
            break;
            case '9':
            salida=salida+"----.";
            break;
        }
    }
      lcd.setCursor(1,0);
      lcd.print(salida);
      delay(500);
  }
}
