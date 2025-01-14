# SimpleTerminal by Rexx

**SimpleTerminal** is a minimalist terminal emulator written in C. It features a simple user interface with ASCII art and provides functionality to run system commands from the terminal. The terminal is designed to be lightweight, visually appealing, and user-friendly.

## Features

- **Compact ASCII Art**: Displays the terminal name with a neat, small ASCII art design.
- **Command Execution**: Allows you to execute system commands directly from the terminal.
- **Colorful UI**: Prompts and error messages are displayed in different colors to improve visibility.
- **Error Handling**: Provides error feedback for failed commands and invalid input.
- **Customizable Design**: The terminal design can be modified or expanded.

## How to Compile and Run

### Prerequisites

- A C compiler (e.g., GCC).
- A Unix-like system (Linux, macOS, or WSL on Windows).

### Compilation

1. Clone this repository to your local machine:
    ```bash
    git clone https://github.com/your-username/SimpleTerminal.git
    cd SimpleTerminal
    ```

2. Compile the code:
    ```bash
    gcc -o SimpleTerminal Terminal.c
    ```

3. Run the compiled program:
    ```bash
    ./SimpleTerminal
    ```

### Usage

1. Once the program runs, you will see the terminal prompt `>>>`.
2. You can type in any valid system command (e.g., `ls`, `pwd`, `echo`) and the terminal will execute it.
3. Type `exit` to close the terminal.

### Example Output

###############################################
#                                             #
#   SSSSS  III  M     M  PPPP   L       EEEEE  #
#  S        I   MM   MM  P   P  L       E      #
#   SSS     I   M M M M  PPPP   L       EEEE   #
#      S    I   M  M  M  P      L       E      #
#  SSSSS   III  M     M  P      LLLLL   EEEEE  #
#                                             #
###############################################
Welcome to SimpleTerminal by Rexx

Credits: Developed by Rexx

>>>






### Contributing

Feel free to fork this repository and submit pull requests. If you'd like to contribute, please follow these steps:

1. Fork this repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add feature'`).
5. Push to your branch (`git push origin feature-branch`).
6. Create a new pull request.

### License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Credits

- **Developer**: Rexx
- **Inspired by**: Simple terminal emulators and minimalistic design principles.

## Roadmap

- Implement command history (Up/Down arrow keys).
- Add custom terminal commands (e.g., `clear`, `help`).
- Cross-platform compatibility improvements.
- More color themes and customization options.
- 
