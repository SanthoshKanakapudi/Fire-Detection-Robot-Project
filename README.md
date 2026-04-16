# Fire-Detection-Robot-Project

The above projects consists Fire detection Robot Code..

Requirements:
1. Ardunio UNO (or any controller like esp32 or esp2866)
2. Flame Sensor
3. Bluetooth sensor 
4. Buzzer
5. Motors and Driver (I used L298N)
6. Power Supply
7. Robot Car Chasis
8. A small breadboard for connections
   
Basic Logic:
1. Car is Controlled using Bluetooth
2. Flame sensor detects fire
3. When any fire is detected it activates buzzer
4. User will be alerted

Apps used:
1. Arduino IDE (Available in Main Website)
2. Arduino Bluetooth Control (Available in Play Store)

Connections:
1. I used pin 8 for Buzzer
2. Pin 10 for Flame Sensor
3. RX/TX 0,1 pins for Bluetooth TX/RX (used Serial monitor as input)
4. setup send commands in Arduin Bluetooth Control App
   'F' = For Forward
   'B' = For Backward
   'S' = For Stop
   'L' = For Left
   'R' = For Right
5. Pin 5 & 6 to ena & enb
6. And connected Drive pins as leftfront = 2, leftback = 7, rightffront = 4, rightback = 12;

Precautions: 
1. Make sure there are no Loose Connections
2. Make sure Driver and Motor connections are correct. (if wire connection swaps, direction will be changed)
