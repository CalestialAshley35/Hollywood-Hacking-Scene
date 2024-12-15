#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <conio.h> // For _kbhit() and _getch() on Windows

using namespace std;

// ANSI color codes for green text
#define GREEN_TEXT "\033[1;32m"
#define RESET_TEXT "\033[0m"

// Function to generate random characters
char randomChar() {
    const char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=<>?";
    return chars[rand() % (sizeof(chars) - 1)];
}

// Simulate meaningful "hacking" outputs
void simulateHackingOutput() {
    const string fakeMessages[] = {
        "Connecting to secure server...",
        "Bypassing firewall...",
        "Access Granted.",
        "Downloading confidential data...",
        "Injecting payload...",
        "Tracing IP address...",
        "Connection established with 192.168.1.1",
        "Decrypting data...",
        "Login successful: User=root",
        "Uploading virus.exe...",
        "Hack successful! Data secured."
    };

    while (true) {
        // Randomly display fake hacking messages
        int messageIndex = rand() % (sizeof(fakeMessages) / sizeof(fakeMessages[0]));
        cout << GREEN_TEXT << fakeMessages[messageIndex] << RESET_TEXT << endl;

        // Add some random green characters to simulate hacking
        int length = rand() % 50 + 20; // Random line length
        for (int i = 0; i < length; i++) {
            cout << GREEN_TEXT << randomChar() << RESET_TEXT;
        }
        cout << endl;

        // Delay to simulate processing
        this_thread::sleep_for(chrono::milliseconds(300));
    }
}

int main() {
    srand(time(0)); // Seed for randomness
    cout << "Hollywood Hacking Scene Simulation" << endl;
    cout << "Type anything to look like a hacker! (Press ESC to quit)" << endl;

    // Start hacking simulation in a separate thread
    thread hackingThread(simulateHackingOutput);

    // Main thread listens to user input but does not display it
    while (true) {
        if (_kbhit()) { // Check if a key is pressed
            char key = _getch(); // Get the pressed key
            if (key == 27) { // ESC key to exit
                break;
            }
        }
    }

    hackingThread.detach(); // End the simulation
    cout << "\nExiting... Goodbye, hacker!" << endl;
    return 0;
}
