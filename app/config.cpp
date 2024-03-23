int readblue;
int temp;
int res;
#define sensor A0
#define agua 13
void setup() {
    Serial.begin(9600);
    pinMode(sensor, INPUT);
    pinMode(agua, OUTPUT);
}
void loop() {
    res = analogRead(sensor);
    if(Serial.available()){
        readblue = Serial.read();
        Serial.println("Conectado");
        Serial.println(readblue);
        switch(readblue)
        {
            case 1 :
                temp = Serial.read();
                Serial.println(temp);
                switch(temp)
                {
                    case 1 :
                        if(res > 800 && res < 1024){
                        digitalWrite(agua,HIGH);
                        delay(1000);
                        digitalWrite(agua,LOW);
                        }
                    break;
                    case 2 :
                        if(res > 800 && res < 1024){
                            digitalWrite(agua,HIGH);
                            delay(2000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 3 :
                        if(res > 800 && res < 1024){
                            digitalWrite(agua,HIGH);
                            delay(3000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 4 :
                        if(res > 800 && res < 1024){
                            digitalWrite(agua,HIGH);
                            delay(4000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 5 :
                        if(res > 800 && res < 1024){
                            digitalWrite(agua,HIGH);
                            delay(5000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 6 :
                        if(res > 800 && res < 1024){
                            digitalWrite(agua,HIGH);
                            delay(6000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 7 :
                        if(res > 800 && res < 1024){
                            digitalWrite(agua,HIGH);
                            delay(7000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 8 :
                        if(res > 800 && res < 1024){
                            digitalWrite(agua,HIGH);
                            delay(8000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 9 :
                        if(res > 800 && res < 1024){
                            digitalWrite(agua,HIGH);
                            delay(9000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    default:
                    break;}
            break; 
            case 2 :
                temp = Serial.read();
                Serial.println(temp);
                switch(temp)
                    {
                    case 1 :
                        if(res > 600&& res < 800){
                            digitalWrite(agua,HIGH);
                            delay(1000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 2 :
                        if(res > 600&& res < 800){
                            digitalWrite(agua,HIGH);
                            delay(2000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 3 :
                        if(res > 600&& res < 800){
                            digitalWrite(agua,HIGH);
                            delay(3000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 4 :
                        if(res > 600&& res < 800){
                            digitalWrite(agua,HIGH);
                            delay(4000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 5 :
                        if(res > 600&& res < 800){
                            digitalWrite(agua,HIGH);
                            delay(5000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 6 :
                        if(res > 600&& res < 800){
                            digitalWrite(agua,HIGH);
                            delay(6000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 7 :
                        if(res > 600&& res < 800){
                            digitalWrite(agua,HIGH);
                            delay(7000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 8 :
                        if(res > 600&& res < 800){
                            digitalWrite(agua,HIGH);
                            delay(8000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 9 :
                        if(res > 600&& res < 800){
                            digitalWrite(agua,HIGH);
                            delay(9000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    default:
                    break;}
            break;
            case 3 :
                temp = Serial.read();
                Serial.println(temp);
                switch(temp)
                    {
                    case 1 :
                        if(res > 400 && res < 600){
                            digitalWrite(agua,HIGH);
                            delay(1000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 2 :
                        if(res > 400 && res < 600){
                            digitalWrite(agua,HIGH);
                            delay(2000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 3 :
                        if(res > 400 && res < 600){
                            digitalWrite(agua,HIGH);
                            delay(3000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 4 :
                        if(res > 400 && res < 600){
                            digitalWrite(agua,HIGH);
                            delay(4000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 5 :
                        if(res > 400 && res < 600){
                            digitalWrite(agua,HIGH);
                            delay(5000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 6 :
                        if(res > 400 && res < 600){
                            digitalWrite(agua,HIGH);
                            delay(6000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 7 :
                        if(res > 400 && res < 600){
                            digitalWrite(agua,HIGH);
                            delay(7000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 8 :
                        if(res > 400 && res < 600){
                            digitalWrite(agua,HIGH);
                            delay(8000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    case 9 :
                        if(res > 400 && res < 600){
                            digitalWrite(agua,HIGH);
                            delay(9000);
                            digitalWrite(agua,LOW);
                        }
                    break;
                    default:
                    break;}
            default:
            break; 
        }
    }
}