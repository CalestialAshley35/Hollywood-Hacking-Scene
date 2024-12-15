# Hollywood Hacking Scene Simulation

This project simulates a Hollywood-style "hacking" scene, complete with fake hacking messages and green text effects. It creates a realistic terminal-like environment, perfect for fun or use in presentations and games. The program generates random characters and displays fake hacking messages to mimic the stereotypical portrayal of hacking in movies.

## Features

- Displays fake "hacking" messages (e.g., "Bypassing firewall...", "Downloading confidential data...").
- Simulates random green characters to enhance the hacking aesthetic.
- Real-time user interaction: press any key to look like you're typing something.
- Exit the simulation by pressing the `ESC` key.

## Installation
Clone code and paste to an IDEs or Code Editor 

## Code Overview

Key Components

Random Character Generator: Generates random alphanumeric and special characters.

Fake Messages: Displays predefined fake "hacking" messages at random intervals.

User Interaction: Allows the user to press any key to simulate typing.

Threading: Runs the simulation in a separate thread to handle simultaneous input and output.


## Libraries Used

<iostream>: For input and output.

<cstdlib> and <ctime>: For random number generation.

<thread> and <chrono>: For multithreading and timing.

<conio.h>: For detecting keypresses (Windows-specific).


ANSI Color Codes

GREEN_TEXT: Makes text green to resemble a typical "hacker" terminal.

RESET_TEXT: Resets text color to default.


## Example Output

Hollywood Hacking Scene Simulation
Type anything to look like a hacker! (Press ESC to quit)
Connecting to secure server...
s7gL@9$fE&Pz6%R!wqY1Tx4*mG&K8H)
Bypassing firewall...
7#EaU^*5%RZpL63@
Login successful: User=root
F8&GzTX9s7*kY1j@

## Disclaimer

This program is purely for educational and entertainment purposes. It does not perform any real hacking and should not be used to deceive or harm others. Always use responsibly.

## License

This project is open-source and licensed under the MIT License. Feel free to modify and distribute it as needed.
