#include <Arduino.h>

//pin
const int LED_RED = 6;    // Пін  червоного світлодіода || Pin  red LED
const int LED_GREEN = 5;  // Пін  зеленого світлодіода || Pin  green LED
const int LED_BLUE = 3;   // Пін  синього світлодіода ||  pin  blue LED
const int Sound_sensor = A0; /*Пін  аналогового входу від 
мікрофону || Pin  analog input from microphone*/
const int Button_regime = D4; /*Пін  кнопки переключення режиму 1) від частоти залежить колір 
2)від ноти залежить колір || Pin  mode switch button 1) color depends on frequency 
2) color depends on note*/
//const int Button_type_of_frequency_reading= D7;
// class
bool flag = 0;// Ініціалізація прапорця для визначення режиму роботи
int Sound_sensor_an;

void setRGB (int r, int g, int b)// Встановлюємо значення широтно-імпульсної модуляції для кожного кольору
{
  analogWrite(LED_RED, r);
  analogWrite(LED_GREEN, g);
  analogWrite(LED_BLUE, b);
}

void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(Sound_sensor,INPUT);
  pinMode(Button_regime,INPUT);
}

void loop() {
  // Отримуємо значення частоти з аналогового піна
  Sound_sensor_an == analogRead(Sound_sensor);
  Serial.println(Sound_sensor_an);
  if (flag == 0)
  {
    while (Sound_sensor_an!=NULL)
  {
    if (Sound_sensor_an == 0 && Sound_sensor_an < 100)
    {
        setRGB(255, 255, 255);
    }
    if (Sound_sensor_an > 12000)
    {
        setRGB(0, 0, 0);
    }
    setRGB((255*Sound_sensor_an*1.5)/(25*15*48),(255*Sound_sensor_an*1.5)/(25*15*48),(255*Sound_sensor_an*1.5)/(25*15*48)); 
  }
  }
if (flag == 1)
{
  if (Sound_sensor_an == 65)
  {
    setRGB(255,255,255);//білий
  }
  if (Sound_sensor_an == 69)
  {
    setRGB(255,0,0);
  }
  if (Sound_sensor_an == 73)
  {
    setRGB(0, 255, 0);
  }
  if (Sound_sensor_an == 78)
  {
    setRGB(0,0,255);
  }
  if (Sound_sensor_an == 82)
  {
    setRGB(255, 195, 0);
  }
  if (Sound_sensor_an == 87)
  {
    setRGB(245, 170, 0);
  }
   if (Sound_sensor_an == 92)
  {
    setRGB(0, 255,255);
  }
   if (Sound_sensor_an == 104)
  {
    setRGB(43, 47, 75);
  }
  if (Sound_sensor_an == 65)
  {
    setRGB(85, 107, 47);
  }
  if (Sound_sensor_an == 69)
  {
    setRGB(173, 255, 47);
  }
  if (Sound_sensor_an == 73)
  {
    setRGB(46, 139, 87);
  }
  if (Sound_sensor_an == 78)
  {
    setRGB(50, 205, 50);
  }
  if (Sound_sensor_an == 82)
  {
   setRGB(34, 139, 34);
  }
  if (Sound_sensor_an == 87)
  {
    setRGB(128, 128, 128);
  }
   if (Sound_sensor_an == 92)
  {
    setRGB(3, 204, 27);
  }
   if (Sound_sensor_an == 98)
  {
    setRGB(30, 64, 175);
  }
   if (Sound_sensor_an == 104)
  {
    setRGB(255, 43, 6);
  }
  if (Sound_sensor_an == 131)
  {
    setRGB(255, 215, 0); // Золотий колір
  }
  if (Sound_sensor_an == 139)
  {
     setRGB(255, 20, 147); // Глибокий рожевий
  }
  if (Sound_sensor_an == 147)
  {
    setRGB(75, 0, 130); // Індиго
  }
   if (Sound_sensor_an == 156)
  {
    setRGB(0, 191, 255); // Глибокий небесно-синій
  }
   if (Sound_sensor_an == 165)
  {
    setRGB(123, 104, 238); // Середній фіолетовий
  }
  if (Sound_sensor_an == 175)
  {
    setRGB(255, 140, 0); // Темно-помаранчевий
  }
  if (Sound_sensor_an == 185)
  {
    setRGB(0, 100, 0); // Темно-зелений
  }
  if (Sound_sensor_an == 196)
  {
    setRGB(189, 183, 107); // Темно-хакі
  }
  if (Sound_sensor_an == 208)
  {
    setRGB(255, 0, 255); // Фуксія
  }
  if (Sound_sensor_an == 220) {
    setRGB(255, 165, 0); // Оранжевий
  }
  if (Sound_sensor_an == 233) {
    setRGB(128, 0, 128); // Пурпурний
  }
  if (Sound_sensor_an == 247) {
    setRGB(255, 192, 203); // Рожевий
  }
  if (Sound_sensor_an == 262) {
    setRGB(64, 224, 208); // Бірюзовий
  }
  if (Sound_sensor_an == 277) {
    setRGB(0, 255, 127); // Весняний зелений
  }
  if (Sound_sensor_an == 293) {
    setRGB(255, 99, 71); // Томатний
  }
  if (Sound_sensor_an == 311) {
    setRGB(255, 69, 0); // Червоний апельсин
  }
  if (Sound_sensor_an == 329) {
    setRGB(255, 20, 147); // Яскраво-рожевий
  }
  if (Sound_sensor_an == 349) {
    setRGB(0, 0, 128); // Темно-синій
  }
  if (Sound_sensor_an == 370) {
    setRGB(128, 0, 0); // Темно-червоний
  }
  if (Sound_sensor_an == 392) {
    setRGB(255, 165, 0); // Оранжевий
  }
  if (Sound_sensor_an == 415) {
    setRGB(255, 255, 0); // Жовтий
  }
  if (Sound_sensor_an == 440) {
    setRGB(0, 128, 0); // Зелений
  }
  if (Sound_sensor_an == 466) {
    setRGB(75, 0, 130); // Індиго
  }
  if (Sound_sensor_an == 494) {
    setRGB(255, 105, 180); // Гарячий рожевий
  }
  if (Sound_sensor_an == 523) {
    setRGB(255, 127, 80); // Кораловий
  }
  if (Sound_sensor_an == 554) {
    setRGB(0, 255, 255); // Бірюзовий
  }
  if (Sound_sensor_an == 587) {
    setRGB(127, 255, 212); // Аквамарин
  }
  if (Sound_sensor_an == 622) {
    setRGB(218, 112, 214); // Орхідея
  }
  if (Sound_sensor_an == 658) {
    setRGB(255, 105, 180); // Гарячий рожевий
  }
  if (Sound_sensor_an == 698) {
    setRGB(245, 222, 179); // Пшениця
  }
  if (Sound_sensor_an == 740) {
    setRGB(255, 99, 71); // Томат
  }
  if (Sound_sensor_an == 784) {
    setRGB(255, 69, 0); // Червоний апельсин
  }
  if (Sound_sensor_an == 932) {
    setRGB(135, 206, 250); // Світло-блакитний
  }
  if (Sound_sensor_an == 988) {
    setRGB(0, 139, 139); // Темно-бірюзовий
  }
  if (Sound_sensor_an == 1047) {
    setRGB(255, 228, 225); // Містечко
  }
  if (Sound_sensor_an == 1109) {
    setRGB(255, 240, 245); // Лавандовий рум'янець
  }
  if (Sound_sensor_an == 1173) {
    setRGB(124, 252, 0); // Луговий
  }
  if (Sound_sensor_an == 1245) {
    setRGB(255, 250, 205); // Лимонний шифон
  }
  if (Sound_sensor_an == 1317) {
    setRGB(173, 216, 230); // Світло-блакитний
  }
  if (Sound_sensor_an == 1397) {
    setRGB(240, 128, 128); // Світло-кораловий
  }
  if (Sound_sensor_an == 1480) {
    setRGB(224, 255, 255); // Світло-бірюзовий
  }
  if (Sound_sensor_an == 1568) {
    setRGB(250, 250, 210); // Світло-золотий
  }
  if (Sound_sensor_an == 1661) {
    setRGB(211, 211, 211); // Світло-сірий
  }
  if (Sound_sensor_an == 1760) {
    setRGB(144, 238, 144); // Світло-зелений
  }
  if (Sound_sensor_an == 1865) {
    setRGB(255, 182, 193); // Світло-рожевий
  }
  if (Sound_sensor_an == 1976)
  {
    setRGB(0,0,0);//чорний
  }
}
  
if (digitalRead(Button_regime) != flag)
{
  flag != flag;
}

}
