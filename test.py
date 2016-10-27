#!/usr/bin/python3

import subprocess
import resource
iterations = 1000

subprocess.call(['gcc', 'current.c', '-O0', '-orun'])

info = resource.getrusage(resource.RUSAGE_CHILDREN)
pred = info.ru_utime
sum_time = 0;
for i in range(iterations):
    res = subprocess.call(['./run'])
    info = resource.getrusage(resource.RUSAGE_CHILDREN)
    current = info.ru_utime;
    sum_time += current - pred;
    pred = current

print(sum_time / iterations);
