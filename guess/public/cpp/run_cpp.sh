#!/bin/bash

problem="guess"
memory=256*2048
stack_size=4096*2048

ulimit -v "${memory}"
ulimit -s "${stack_size}"
"./${problem}"
