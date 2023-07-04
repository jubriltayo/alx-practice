#!/usr/bin/python3
import sys

def safe_print_integer_err(value):
    try:
        print("{:d}".format(value))
        return True
    except (TypeError, ValueError):
        #exc_info returns a tuple, exception instance, index 1 is needed here
        print("Exception: {}".format(sys.exc_info()[1]), file=sys.stderr)
        return False