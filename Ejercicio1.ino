 #include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);

 String dato;
 int tam;
 int i=0;
 String salida;
 int j=0; 
 int aux;

void setup() {
 Serial.begin(9600);
 lcd.begin(16,2);
}

void loop() {
  if(Serial.available()>0){
    dato=Serial.readString();
    dato.toLowerCase();
    tam=dato.length()+1;
    char vector [tam];
    dato.toCharArray(vector,tam);
    for(i=0;i<tam+1;i++){
      for(j=0;j<tam+1;j++){
        if(vector[j]> vector[j+1]){
          aux=vector[j];
          vector[j]= vector[j+1];
          vector[j+1]=aux;
          }
        }
      }
    for(i=0;i<tam+2;i++){
      lcd.setCursor(i,0);
      lcd.print(vector[i]);
      delay(1000);
      Serial.println(vector[i]);
      salida=" ";
    }
  }
}
