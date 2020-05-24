#!/usr/bin/env python
import os, sys

"""
    fan controller
    https://askubuntu.com/questions/783069/fan-control-on-msi-laptop-no-pwm-capable-sensors
"""
EC_IO_FILE="/sys/kernel/debug/ec/ec0/io"

def ec_write(addr, value):
    with open(EC_IO_FILE, "rb+") as f:
        f.seek(addr)
        old_value = ord(f.read(1))
        if(value != old_value):
            print("                %3d => %3d" % (old_value, value))
            f.seek(addr)
            f.write(bytearray([value]))
        else:
            print("                     = %3d" % value)
            
if not os.path.exists(EC_IO_FILE):
    os.system("modprobe ec_sys write_support=1")

with open('profile') as f:
    for line in f.readlines():
        #print(line.strip())
        if line.startswith('>WEC '):
            addr, value = (int(x,0) for x in line.split()[1:])
            #print(addr, value)
            ec_write(addr, value)
        else:
            print(line.strip())
