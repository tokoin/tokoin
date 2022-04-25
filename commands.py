# SPDX-License-Identifier: MIT
#
# Copyright (C) 2022  Saentis Family Office GmbH. All rights reserved.
# Copyright (C) 2022  Leonard Steinhoff. All rights reserved
#

import interpreter

class HelpCommand(_CommandTemplate):
    """
    HELP_CMD: This command prints a Help-Map to the terminal
    """
    def __init__(self, command_name: str):
        self.command_name = command_name

    def execute(self):
        print("This is an example")


