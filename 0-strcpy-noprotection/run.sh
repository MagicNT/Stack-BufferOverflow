#!/bin/bash


make all;
./exploit.pl > payload;
ulimit -c unlimited;
./vuln `cat payload`;


