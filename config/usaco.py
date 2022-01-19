#!/usr/local/bin/python3

import glob
import os
import sys

LEVEL = sys.argv[1]
ARG = sys.argv[2]

def clean(dir):
    for f in glob.glob(f'{dir}/*'):
        if not f.endswith('.cpp'):
            os.remove(f)

if __name__ == "__main__":
    if ARG in ['--help', '-h']:
        print('''
        ----- HELP -----
        arg[0] = USACO level
        arg[1] = either '--bootstrap' or '--clean'
        arg[2] = problem name
        ''')
    if ARG in ['--clean', '-c']:
        clean(LEVEL)
    elif ARG in ['--bootstrap', '-b']:
        file_name = sys.argv[3]
        if not file_name:
            print('Enter a filename bruh')
        else:
            os.chdir(LEVEL)
            os.system(f'touch {file_name}.cpp')
            print('Input sample case >')

            contents = []
            while True:
                try:
                    line = input()
                except EOFError:
                    break
                contents.append(line)
            sample_case = '\n'.join(contents)

            with open(f'{file_name}.in', 'w') as f:
                f.write(sample_case)
