#!/bin/bash

# escaping d as it is a special symbol in sed
sed -nE '/^[aeiou]/Ip' /usr/share//dict/words | wc -l
