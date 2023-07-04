#!/usr/bin/python3

def text_indentation(text):
    if not isinstance(text, str):
        raise TypeError('text must be a string')
    i = 0
    while i < len(text):
        print(f"{text[i]}", end='')
        if text[i] in ['.', '?', ':']:
            print()
            print()
            i += 1
        i += 1
        