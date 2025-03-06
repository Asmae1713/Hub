#!/bin/bash
ifconfig | grep 'ether' | awk -b 8 -24
