# Autonomous Mobile Robot (TinkerCad, C)

![EMBEDDED SYSTEMS — Potentiometer-controlled Arduino simulation](assets/portfolio-banner.svg)

Academic Arduino/Tinkercad mobile-robot prototype. The CV title is retained exactly; the verified implementation is controlled by potentiometers and does **not** provide autonomous navigation.

![Tinkercad circuit used by the project](images/tinkercad-circuit.png)

## Verified behaviour

- Reads a first potentiometer on analog input A0.
- Maps A0 to a `0..35` PWM value and sends the same value to two DC-motor outputs on pins 3 and 6.
- Reads a second potentiometer on A1.
- Maps A1 to `0..180` degrees and commands a servo on pin 9.
- Prints both mapped values over serial at 9600 baud.

The presentation documents a Tinkercad circuit simulation and a three-wheel vehicle concept. The source contains no sensor-based obstacle avoidance, localization, path planning or navigation logic.

## Repository contents

- `src/mobile_robot.ino` — submitted Arduino code.
- `images/tinkercad-circuit.png` — original circuit screenshot.
- [French project presentation (PPTX, sharing hyperlinks sanitized)](presentations/mobile-robot-presentation-fr.pptx).

The administrative attestation is excluded. `Untitled.pdf` in the source folder was identified as a third-party 2014–2015 master's thesis by another author and is not republished as this project's report. No student-authored report or demonstration video was found in the FAB-LAB folder or the accessible Licence/Master report/archive inventory.

## Requirements and use

Open `src/mobile_robot.ino` in the Arduino IDE, select a compatible board, reproduce the wiring shown in the screenshot, compile, and upload. The only code dependency is Arduino's standard `Servo` library. The presentation's private Tinkercad sharing links were removed from the public copy; use the screenshot to reconstruct the circuit in a new simulation.

## Testing and limitations

The source was reviewed against the presentation. Its potentiometer, PWM, servo and serial operations were confirmed statically. Arduino CLI and Tinkercad were unavailable, no camera/video evidence was found, and no physical robot was tested during portfolio preparation. The repository therefore documents code plus simulation evidence only and makes no claim of autonomous behaviour or successful physical trials.

## Authors

- Adam El Akkaoui
- Mountassir Ikradine
