# SimpleTerminal by Rexx

**SimpleTerminal** is a minimalist terminal emulator written in C. It provides a simple command-line interface with basic system command execution, colorful UI, and a compact ASCII art design.

## Features

- **Compact ASCII Art**: Displays the terminal name in a small, neat design.
- **Command Execution**: Run system commands like `ls`, `pwd`, and `echo`.
- **Colorful UI**: Color-coded prompts and error messages for clarity.
- **Error Handling**: Feedback for failed commands or invalid input.
- **Customizable**: Design and behavior can be modified.

## How to Compile and Run

### Prerequisites

- C compiler (e.g., GCC).
- Unix-like system (Linux, macOS, or WSL on Windows).

### Compilation Steps

1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/SimpleTerminal.git
    cd SimpleTerminal
    ```

2. Compile:
    ```bash
    gcc -o SimpleTerminal Terminal.c
    ```

3. Run:
    ```bash
    ./SimpleTerminal
    ```

### Usage

1. Type system commands like `ls` or `pwd` at the prompt `>>>`.
2. Type `exit` to close the terminal.

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


## Contributing

Fork the repository, create a branch, make your changes, and submit a pull request.

## License

MIT License. See [LICENSE](LICENSE) for details.

## Credits

- **Developer**: Rexx
