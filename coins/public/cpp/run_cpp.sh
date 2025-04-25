#!/bin/bash

problem="coins"
memory=262144 # 256MB
stack_size=2097152  # 2GB

ulimit -v "${memory}"
ulimit -s "${stack_size}"
"./${problem}"
