#!/usr/bin/python3
import sys

def safe_function(fct, *args):
    try:
        return fct(*args) #fct is a function pointer
    except Exception as e:
        print("Exception: {}".format(e), file=sys.stderr)
        return None