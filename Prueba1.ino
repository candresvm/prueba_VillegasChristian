
int on=0; //interrupcion 0
int cont; //interrupcion 1
String dato;
float dinero;
float total;
int j=0;

void setup() {
  Serial.begin(9600);
  attachInterrupt(0,activacion,LOW);
  attachInterrupt(1,modo,LOW);
}

void loop() {
  if(on==0){
    while(j<1){
      j++;
    }
   if(cont==0){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*1;
    Serial.println("EURO");
    Serial.println(dinero);
    delay(4000);
    Serial.println("EURO:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==1){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*1.25;
    Serial.println("EURO: ");
    Serial.println(dinero);
    delay(4000);
    Serial.println("DOLAR: ");
    Serial.println(total);
    delay(4000);
   }
   if(cont==2){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*4202.26;
    Serial.println("EURO:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("PES.COL:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==3){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*4.25;
    Serial.println("EURO:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("SOL.PER:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==4){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*98.99;
    Serial.println("EURO:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("PES.ARG:");
    Serial.println(total);
    delay(4000);
   }
  }
//***********************************Dolares************************************
  if(on==1){
    while(j<1){
      j++;
    }
   if(cont==0){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*0.82;
    Serial.println("DOLAR:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("EURO:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==1){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*1;
    Serial.println("DOLAR:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("DOLAR: ");
    Serial.println(total);
    delay(4000);
   }
   if(cont==2){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*3466.50;
    Serial.println("DOLAR:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("PES.COL:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==3){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*3.58;
    Serial.println("DOLAR:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("SOL.PER:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==4){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*81.66;
    Serial.println("DOLAR:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("PES.ARG:");
    Serial.println(total);
    delay(4000);
   }
  }

//***********************************SOL PERUANO************************************
  if(on==2){
    while(j<1){
      j++;
    }
   if(cont==0){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*0.23;
    Serial.println("SOL.PER:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("EURO:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==1){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*0.28;
    Serial.println("SOL.PER:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("DOLAR:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==2){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*965.38;
    Serial.println("SOL.PER:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("PES.COL:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==3){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*1;
    Serial.println("SOL.PER:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("SOL.PER:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==4){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*22.73;
    Serial.println("SOL.PER:");
    Serial.println(9,0);
    Serial.println(dinero);
    delay(4000);
    Serial.println("PES.ARG:");
    Serial.println(total);
    delay(4000);
   }
  }
//***********************************PESO COLOMBIANO************************************
  if(on==3){
    while(j<1){
      j++;
    }
   if(cont==0){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*0.00024;
    Serial.println("PES.COL:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("EURO:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==1){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*0.00029;
    Serial.println("PES.COL:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("DOLAR:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==2){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*1;
    Serial.println("PES.COL:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("PES.COL:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==3){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*0.001;
    Serial.println("PES.COL:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("SOL.PER:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==4){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*0.023;
    Serial.println("PES.COL:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("PES.ARG:");
    Serial.println(total);
    delay(4000);
   }
  }
//***********************************PESO ARGENTINO************************************
  if(on==4){
    while(j<1){
      j++;
    }
   if(cont==0){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*0.01;
    Serial.println("PES.ARG:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("EURO:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==1){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*0.12;
    Serial.println("PES.ARG:");
    Serial.println(dinero);
    Serial.println("DOLAR:");
    Serial.println(total);
   }
   if(cont==2){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*42.45;
    Serial.println("PES.ARG:");
    Serial.println(dinero);
    Serial.println("PES.COL:");
    Serial.println(total);
   }
   if(cont==3){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*0.044;
    Serial.println("PES.ARG:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("SOL.PER:");
    Serial.println(total);
    delay(4000);
   }
   if(cont==4){
    while(j<1){
      j++;
    }
    if(Serial.available()>0){
      dato=Serial.readString();
      dinero=dato.toInt();
    }
    total=dinero*1;
    Serial.println("PES.ARG:");
    Serial.println(dinero);
    delay(4000);
    Serial.println("PES.ARG:");
    Serial.println(total);
    delay(4000);
   }
  }

}

void activacion(){
  // NO FUNCIONA DELAY
  switch(on){
    case 0:
      Serial.println("");
      Serial.println("CONVERSOR DOLARES");
      on++;
      j=0;
    break;
    case 1:
      Serial.println("");
      Serial.println("CONVERSOR FRANCO ZUIZO");
      on++;
      j=0;
    break;
    case 2:
      Serial.println("");
      Serial.println("CONVERSOR PESO COLOMBIANO");
      on++;
      j=0;
    break;
    case 3:
      Serial.println("");
      Serial.println("CONVERSOR PESO ARGENTINO");
      on++;
      j=0;
    break;
    case 4:
      Serial.println("");
      Serial.println("CONVERSOR EURO");
      on=0;
      j=0;
    break;
    case 5:
      Serial.println("");
      Serial.println("CONVERSOR REAL");
      on=0;
      j=0;
    break;
  }
}

void modo(){
  switch(cont){
    case 0:
      Serial.println("A DOLARES");
      cont++;
      j=0;
    break;
    case 1:
      Serial.println("A PESO COLOMBIANO");
      cont++;
      j=0;
    break;
    case 2:
      Serial.println("A EURO");
      cont++;
      j=0;
    break;
    case 3:
      Serial.println("A PESO ARGENTINO");
      cont++;
      j=0;
    break;
    case 4:
      Serial.println("A FRANCO ZUIZO");
      cont++;
      j=0;
    break;
    case 5:
      Serial.println("A REAL");
      cont++;
      j=0;
    break;
    case 6:
      cont=0;
      j=0;
    break;
  }
}
