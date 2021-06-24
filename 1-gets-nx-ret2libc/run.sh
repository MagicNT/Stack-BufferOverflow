#!/bin/bash


make all;
./exploit.pl > payload;
ulimit -c unlimited;
(./exploit.pl ;cat) | ./vuln;


