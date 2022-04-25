# SPDX-License-Identifier: MIT
#
# Copyright (C) 2022  Saentis Family Office GmbH. All rights reserved.
# Copyright (C) 2022  Leonard Steinhoff. All rights reserved
#

#
# NOTE FROM LEO:
#
# Hello people that are reading this,
# i'm sorry this file is just GARBAGE
# i was really tired when i wrote that
# script it just worked so i didn't really
# mettered about it anymore, so please rewrite
# this!
#

from cli_assets import TermColors
import commands
import sys

class Interpreter:
    """
    A interpreter for the integrated SaentisCoin
    shell, get the source code of the shell in the
    'shell.py' file in this directory.
    """
    def __init__(self):
        base_shell: _Shell = _Shell("Coin > ")
        base_shell.input_handler()


class _Shell:
    def __init__(self, _prefix: str):
        self.prefix = _prefix

    def input_handler(self):
        while True:
            try:
                cli_input = input(self.prefix)
                base_interpreter: Interpreter = Interpreter()
                base_interpreter.interpret_command(cli_input)
            except KeyboardInterrupt:
                print("Quit cli!")
                sys.exit(1)

class _CommandTemplate:
    def __init__(self, _command_name: str):
        self.command_name = _command_name

    def execute(self, _args):
        pass

    def __init__(self):
        self.commands = []
        shell = _Shell("Coin > ")
        shell.input_handler()

    def interpret_command(self, _command: str) -> int:
        args = _command.split(' ')
        if _command == '' or len(_command) > 1024:
            return 
    
        for i in range(len(self.commands)):
            if self.commands[i].command_name == _command:
                self.commands[i].execute(args)
                return 0

        print('ERR: Command not found!')
        return 1


# MAIN
def main():
    interpreter: Interpreter = Interpreter()

if __name__ == "__main__":
    main()
