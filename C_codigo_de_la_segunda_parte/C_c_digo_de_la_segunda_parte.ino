/*Damasco Oxcal Vasquez 2023442*/

/*
  Fundacion kinal
  centro educativo tecnico laboral kinal
  Quinto Perito
  Quinto electronica
  Codigo Tecnico: EB5AM / EB5AV
  Curso: Taller d electronica digital y reparacion de computadoras I
  proyecto: Escritura de un pin digital (Encender o apagar un pin digital)
  Dev: profe. Alejandro Lopez Navas
  Fecha: 12 de abril
*/

//Directivas de preprocesador
#define LedNaranja   4   //pin4 conectado a un led
#define tiempo_espera 500 //tiempo entre estados del led

void setup()
{
  pinMode(LedNaranja, OUTPUT); //pin4 como salida.
  digitalWrite(LedNaranja, LOW); //LED conectado al pin13 inicia apagado
}

void loop()
{
  digitalWrite(LedNaranja, HIGH); //enciendo el led conectado al pin4
  delay(tiempo_espera); //espera de 500 milisegundos.
  digitalWrite(LedNaranja, LOW); //apago el led conectado al pin4
  delay(tiempo_espera); //espera de 500 milisegundos
}
