#include <SPACE01_LineFast16CH_V2.h>

void setup() {
  RobotSetup();
  pinMode(signal_pin, INPUT);
  SensorValue (86,82,83,81,80,82,81,81,81,81,82,82,83,82,82,83,860,850,858,836,797,885,852,833,830,819,845,852,855,822,833,822);
  TurnSpeedLeft(40, 70, 30);
  // ค่าเลี้ยวซ้าย TurnSpeedLeft(มอเตอร์ซ้าย, มอเตอร์ขวา, เวลาเลี้ยว);
  TurnSpeedRight(70, 40, 30);
  // ค่าเลี้ยวขวา TurnSpeedRight(มอเตอร์ซ้าย, มอเตอร์ขวา, เวลาเลี้ยว);
  TrackLineColor(1);  // สีของเส้น 1 = ขาว , 0 = ดำ

  // SerialSensor();           // Serial Monitor ค่าของ Sensor
  // SerialCalibrateSensor();  // Serial Monitor ค่าของ Sensor ที่ Calibrate แล้ว
  // CaliberateRobotSensor();  // Serial Monitor Calibrate ค่าแสงหุ่นยนต์

  OK();        // รอจนกว่าจะกดปุ่ม OK
  delay(500);  // หน่วงเวลา 0.5 วินาที
  Beep(300);   // ใช้ buzzer เป็นเวลา 0.5 วินาที

  // Motor(50, 50);delay(1000);

  TrackTime10(60, 0.0755, 0.6, 20000); // เรียญทอง

  // TrackTime10(45, 0.055, 0.65, 20000); //ศว.เก็บหมด v1 6.4

  // TrackTime10(80, 0.055, 0.55, 20000); //ศว.เก็บหมด v1 6.4

  // TrackTime10(85, 0.0425, 0.48, 10000); //ศว.เก็บหมด v1 6.4

  // TrackTime10(75, 0.065, 0.250, 10000); //ศว. 6.8

  // TrackTime10(40, 0.035, 0.150, 10000); //ศว. 6.4

  // TrackTime10(40, 0.01, 0.10, 10000); //ศว. 6.4


  // TrackTime10(75, 0.04, 0.180, 10000); //ศว. 6.5

  // Program1();  // ทำงานโปรแกรม 1
  // Program2();  // ทำงานโปรแกรม 2
  // Program3();  // ทำงานโปรแกรม 3
  // Program4();  // ทำงานโปรแกรม 4
}

void loop() {
  MotorStop();
}
