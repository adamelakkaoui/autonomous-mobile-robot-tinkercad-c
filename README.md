# Autonomous Mobile Robot (TinkerCad, C)

![EMBEDDED SYSTEMS — Potentiometer-controlled Arduino simulation](assets/portfolio-banner.svg)

Academic FAB-LAB mobile-robot project developed with Arduino C and simulated in Tinkercad.

![Tinkercad circuit used by the project](images/tinkercad-circuit.png)

## Implementation

- Reads a first potentiometer on analog input A0.
- Maps A0 to a `0..35` PWM value and sends the same value to two DC-motor outputs on pins 3 and 6.
- Reads a second potentiometer on A1.
- Maps A1 to `0..180` degrees and commands a servo on pin 9.
- Prints both mapped values over serial at 9600 baud.

The Arduino program reads two potentiometers: one controls the speed of two DC motors through PWM, while the second controls a servo angle. The program also outputs the mapped control values through the serial interface. The project presentation documents the circuit and three-wheel mobile-robot concept.

## Repository contents

- `src/mobile_robot.ino` — submitted Arduino code.
- `images/tinkercad-circuit.png` — original circuit screenshot.
- [French project presentation (PPTX, sharing hyperlinks sanitized)](presentations/mobile-robot-presentation-fr.pptx).


## Requirements and use

Open `src/mobile_robot.ino` in the Arduino IDE, select a compatible board, reproduce the wiring shown in the screenshot, compile, and upload. The only code dependency is Arduino's standard `Servo` library. The presentation's private Tinkercad sharing links were removed from the public copy; use the screenshot to reconstruct the circuit in a new simulation.

## Project demonstration

The repository includes the Arduino source code, the original Tinkercad circuit screenshot and the French project presentation. Together they document the electronic connections, motor/servo control and the simulated mobile-robot prototype.


## Authors

- Adam El Akkaoui
- Mountassir Ikradine
