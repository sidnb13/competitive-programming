#!/usr/local/bin/python3

import os, sys
from subprocess import PIPE
from subprocess import Popen

def read_input():
    print('Sample case >')
    contents = []
    while True:
        try:
            line = input()
        except EOFError:
            break
        contents.append(line)
    return contents

def run_test(name):
    with open(f'{name}.in','r') as input_file:
        lines = '\n'.join(input_file.readlines())
        ip = bytes(lines, 'UTF-8')
        compile = f'g++ -std=c++17 -O2 -o "{name}" {name}.cpp -Wall -Wl,-stack_size -Wl,0x10000000'
        print(os.system(compile))
        p = Popen([f'./{name}'], shell=True, stdout=PIPE, stdin=PIPE)
        p.stdin.write(ip)
        p.stdin.flush()
        p.stdin.close()
        print('<----STDOUT---->')
        result = [x.decode('UTF-8') for x in p.stdout.readlines()]
        print(''.join(result))

if __name__ == "__main__":
    os.chdir(sys.argv[1])
    problem_name = sys.argv[2].removesuffix('.cpp')
    if (os.path.exists(f'{problem_name}.in')):
        run_test(problem_name)
    else:
        print('<----STDIN---->')
        sample_case = read_input()
        with open(f'{problem_name}.in','w') as f:
            f.write('\n'.join(sample_case))
        run_test(problem_name)
