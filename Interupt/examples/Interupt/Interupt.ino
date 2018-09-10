#include "PWM.hpp"

PWM pwm_pan, pwm_tilt;
int pan_val, tilt_val;

void setup()
{
  Serial.begin(115200); // Serial for debug

  pwm_pan.begin(2, 1); //1 = high
  pwm_tilt.begin(3, 1);
}

void loop()
{
  pan_val = pwm_pan.getValue();
  tilt_val = pwm_tilt.getValue();

  Serial.print("PWM pan value = "); Serial.println(pan_val);
  Serial.print("PWM tilt value = "); Serial.println(tilt_val);
}
