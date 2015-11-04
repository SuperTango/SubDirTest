#include "KellyKLS_Serial.h"

KellyKLS_Serial klsController;

void setup() {
    klsController.init ( &Serial1 );
}

void loop() {
}
