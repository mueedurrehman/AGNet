bool buttonPressed = false;
bool messageSent = false;

pinMode(D7, OUTPUT);
System.on(button_status, button_handler);

void button_handler(system_event_t event, int duration, void* ) {
// Empty
}

