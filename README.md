# Autonomous Mobile Robot (TinkerCad, C)

Academic Arduino/Tinkercad mobile-robot prototype. The CV title is retained exactly; the verified implementation is **potentiometer-controlled and is not autonomous navigation**.

![Tinkercad circuit used by the project](images/tinkercad-circuit.png)

## Verified behavior

- Reads potentiometer 1 on analog input A0.
- Maps A0 to a `0..35` PWM value and sends the same value to two DC-motor outputs on pins 3 and 6.
- Reads potentiometer 2 on A1.
- Maps A1 to `0..180` degrees and commands a servo on pin 9.
- Prints both mapped values over serial at 9600 baud.

The submitted presentation identifies Tinkercad circuit simulation and a three-wheel vehicle concept. No sensor-based path planning, obstacle avoidance, localization, or autonomous navigation code is present.

## Requirements and use

Open `src/mobile_robot.ino` in the Arduino IDE, select a compatible Arduino board, verify the wiring against the screenshot, compile, and upload. The code depends only on Arduino's standard `Servo` library.

## Verification status

The source was reviewed and its C++ structure was checked. Neither Arduino CLI nor hardware was available, so compilation, electrical behavior, and physical-robot testing were not independently performed. The local evidence supports a Tinkercad simulation; it does not establish successful physical trials.

## Security and privacy

Tinkercad share URLs from the presentation were excluded because they contain share codes. The presentation and administrative attestation were not copied.

## Authors

- Adam El Akkaoui
- Mountassir Ikradine
