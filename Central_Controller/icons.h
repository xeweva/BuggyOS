/*
 * иконки для матрицы Багги 
 * 
 * для  BuggyOS
 * 
 */
#define OIL 0
#define CHOKE 1
#define PARK 2
#define FUEL 3
#define GEAR 4
#define LIGHTS 5
#define ARROW 6
#define BRAKE 7
#define WARNING 8

const byte iconBrake[2][8] = { 
{
  0b00000000,                      //тормоза
  0b01000010,
  0b10011001,
  0b10100101,
  0b10100101,
  0b10011001,
  0b01000010,
  0b00000000
},
{
  0b00011000,                       //Восклицательный знак
  0b00111100,
  0b00111100,
  0b00011000,
  0b00011000,
  0b00000000,
  0b00011000,
  0b00000000
}

};

//Подсос 
const byte iconChoke[2][8] = {
{
  0b10000001,                   //closed
  0b10001101,
  0b10001101,
  0b10011001,
  0b10011001,
  0b10110001,
  0b10110001,
  0b10000001
},
{
  0b10000001,
  0b10011001,                   //opened
  0b10011001,
  0b10011001,
  0b10011001,
  0b10011001,
  0b10011001,
  0b10000001
}
};

//скорости
const byte iconGear[4][8] = {
{
  0b00000000,                   //Drive
  0b00111000,
  0b00100100,
  0b00100100,
  0b00100100,
  0b00100100,
  0b00111000,
  0b00000000
},
{
  0b00000000,                 //Neutral
  0b00100100,
  0b00110100,
  0b00110100,
  0b00101100,
  0b00101100,
  0b00100100,
  0b00000000
},
{
  0b00000000,                 //Rear
  0b00111000,
  0b00100100,
  0b00100100,
  0b00111000,
  0b00100100,
  0b00100100,
  0b00000000
},
{
  0b10000001,                 //No Gear
  0b01000010,
  0b00111100,
  0b01000010,
  0b01000010,
  0b00111100,
  0b01000010,
  0b10000001
}
};

//Стояночный тормоз
const byte iconPark[8] = {
  0b00000000,
  0b00111000,
  0b00100100,
  0b00100100,
  0b00111000,
  0b00100000,
  0b00100000,
  0b00000000
};

//стрелка поворотник
const byte iconArrow[2][8] = {
{
  0b00000000,                     //Left turn
  0b00010000,
  0b00110000,
  0b01111110,
  0b01111110,
  0b00110000,
  0b00010000,
  0b00000000
},
{
  0b00000000,                     //Right turn
  0b00001000,
  0b00001100,
  0b01111110,
  0b01111110,
  0b00001100,
  0b00001000,
  0b00000000
}
};

// Неисправности
const byte iconWarning[2][8] = {
{
  0b00011000,                     // Треугольник
  0b00011000,
  0b00111100,
  0b00111100,
  0b01111110,
  0b11111111,
  0b11111111,
  0b00000000
},
{
  0b00011000,                       //Восклицательный знак
  0b00111100,
  0b00111100,
  0b00011000,
  0b00011000,
  0b00000000,
  0b00011000,
  0b00000000
}
};

//Иконка топлива 
const byte iconFuel[2][8] = {
{
  0b11111000,               //в положении 1
  0b10001100,
  0b10001110,
  0b11111010,
  0b11111001,
  0b11111101,
  0b11111010,
  0b11111000
},
{
  0b11111000,             //в положении 2
  0b10001010,
  0b10001011,
  0b11111001,
  0b11111001,
  0b11111101,
  0b11111010,
  0b11111000
}
};

//Иконка масла 
const byte iconOil[2][8] = {
{
  0b00000000,                 //в положении 1
  0b00000000,
  0b00000000,
  0b11010011,
  0b10111100,
  0b11100101,
  0b00111000,
  0b00000000
},
{
  0b00000000,                 //в положении 2
  0b00000000,
  0b00000000,
  0b11010011,
  0b10111101,
  0b11100100,
  0b00111000,
  0b00000000
}
};

//Фары
const byte iconLights[2][8] = {
{
  0b01001100,                   //Ближний свет
  0b10001110,
  0b01011111,
  0b10011111,
  0b01011111,
  0b10011111,
  0b01001110,
  0b10001100
},
{
  0b11001100,                  //Дальний свет
  0b00001110,
  0b11011111,
  0b00011111,
  0b11011111,
  0b00011111,
  0b11001110,
  0b00001100
}
};






