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
    
    exec_cmd('git status')
    exec_cmd('git add .')
    exec_cmd('git status')
    exec_cmd('git commit -m "{0}" && git push -u origin master'.format(sys.argv[1]))

if __name__ == '__main__':
    main()
