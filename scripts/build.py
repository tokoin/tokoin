#!/usr/bin/python3
import os
import sys

def exec_cmd(cmd: str):
    if cmd == '':
        return

    print(f'[COMMAND] {cmd}')
    os.system(cmd)

def main():
    print('Commiting changes to public codebase...')
    
    exec_cmd('cd bin/')
    exec_cmd('cmake .')
    exec_cmd('make')

if __name__ == '__main__':
    main()
