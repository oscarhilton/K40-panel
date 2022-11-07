//                                 +-----+
//                    +------------| USB |------------+
//                    |            +-----+            |
//                    | [ ]D13/SCK        MISO/D12[ ] |   
//                    | [ ]3.3V           MOSI/D11[ ] |   
//      VREF_LASER    |~[x]V.ref            SS/D10[ ] |   
//                    | [ ]A0                   D9[x]~|   LASER_ACTIVE
//                    | [ ]A1                   D8[x]~|   ROTARY_SWITCH
//                    | [ ]A2                   D7[x]~|   ROTARY_PIN_A
//                    | [ ]A3                   D6[x]~|   ROTARY_PIN_B
//      LCD_SDA       |~[x]A4/SDA               D5[x]~|   LID_SWITCH
//      LCD_SCL       |~[x]A5/SCL               D4[x]~|   LASER_SWITCH
//      POWER_LEVEL   |~[x]A6              INT1/D3[ ] |   
//                    | [ ]A7              INT0/D2[x]~|   TEMP_ONE_WIRE_PIN
//      LCD PWR       |~[x]5V                  GND[x]~|   [ - ] GROUND
//                    | [ ]RST                 RST[ ] |   
//      LCD GROUND    |~[x]GND                 TX1[ ] |   
//      PWR [ +5 ]    |~[x]Vin                 RX1[ ] |   
//                    |                               |
//                    | NANO-V3                       |
//                    +-------------------------------+

// Arduino pins
#define LID_SWITCH 10
#define LASER_ACTIVE 9
#define ROTARY_SWITCH 8
#define ROTARY_PIN_A 7
#define ROTARY_PIN_B 6
#define LASER_SWITCH 5
#define TEMP_ONE_WIRE_PIN 2
#define ALARM_WATER A0
#define ALARM_TEMP A1
#define ALARM_POWER A2
#define ALARM_LID A3
#define LCD_SDA A4
#define LCD_SCL A5
#define READY_PIN A6
#define POWER_LEVEL A7




// Values
#define MAX_WATER_TEMP 22.00 // Degrees Celsius
#define MIN_WATER_TEMP 14.00 // Degrees Celsius
#define MIN_FLOW_RATE 1
#define MAX_POWER 10 // mAh
// Serial
#define SERIAL_RATE 115200