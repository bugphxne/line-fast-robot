void TurnLeft() { // เลี้ยวซ้าย
Motor(50, 50); delay(75);
Motor(130, -150); delay(50);
  while (1) {
    Motor(130, -150);
    ReadCalibrate();
    if (F[0] >= 500) {
      Motor(-150,130); delay(5);
      MotorStop();
      break;
    }
  }
}

void TurnRight() { // เลี้ยวขวา
Motor(50, 50); delay(75);
Motor(-170, 150); delay(50);
  while (1) {
    Motor(-170,150);
    ReadCalibrate();
    if (F[7] >= 500) {
      Motor(150,-170); delay(5);
      MotorStop();
      break;
    }
  }
}
