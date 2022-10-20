//                                 +-----+
//                    +------------| USB |------------+
//                    |            +-----+            |
//                    | [ ]D13/SCK        MISO/D12[ ] |   
//                    | [ ]3.3V           MOSI/D11[ ] |   
//                    | [ ]V.ref            SS/D10[ ] |   
//                    | [ ]A0                   D9[ ]~|   LASER_ACTIVE
//                    | [ ]A1                   D8[ ]~|   ROTARY_SWITCH
//                    | [ ]A2                   D7[ ]~|   ROTARY_PIN_A
//                    | [ ]A3                   D6[ ]~|   ROTARY_PIN_B
//      LCD_SDA       |~[ ]A4/SDA               D5[ ]~|   LID_SWITCH
//      LCD_SCL       |~[ ]A5/SCL               D4[ ]~|   LASER_SWITCH
//      POWER_LEVEL   |~[ ]A6              INT1/D3[ ] |   
//                    | [ ]A7              INT0/D2[ ] |   TEMP_ONE_WIRE_PIN
//      LCD PWR       |~[ ]5V                  GND[ ] |   [ - ] GROUND
//                    | [ ]RST                 RST[ ] |   
//      LCD GROUND    |~[ ]GND                 TX1[ ] |   
//      PWR [ +5 ]    |~[ ]Vin                 RX1[ ] |   
//                    |                               |
//                    | NANO-V3                       |
//                    +-------------------------------+

// Arduino pins
#define LASER_ACTIVE 9
#define ROTARY_SWITCH 8
#define ROTARY_PIN_A 7
#define ROTARY_PIN_B 6
#define LID_SWITCH 5
#define LASER_SWITCH 4
#define TEMP_ONE_WIRE_PIN 2
#define LCD_SDA A4
#define LCD_SCL A5
#define POWER_LEVEL A6
// Values
#define MAX_WATER_TEMP 22 // Degrees Celsius
#define MIN_WATER_TEMP 14 // Degrees Celsius
#define MIN_FLOW_RATE 0
#define MAX_POWER 10 // mAh
// Serial
#define SERIAL_RATE 115200