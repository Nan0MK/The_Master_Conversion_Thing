// Celsius conversions
float FarenheihtToCelsius(float FarenheitIn) {
  float C;
  float F = FarenheitIn;
  C = (F - 32.0) / 1.80f;

  return C;
}
float FarConvCelsius(float CelsiusIn) {
  float C = CelsiusIn;
  float F;
  F = 1.80 * (C) + 32.0f;

  return F;
}

// Kelvin conversions
float FarenheitToKelvin(float FarenheitIn) {
  float K;
  float F = FarenheitIn;
  K = 5.0 / 9.0 * (F - 32.0) + 273.15f;

  return K;
}
float FarConvKelvin(float KelvinIn) {
  float K = KelvinIn;
  float F;
  F = 1.8 * (K - 273.0) + 32.0f;

  return F;
}