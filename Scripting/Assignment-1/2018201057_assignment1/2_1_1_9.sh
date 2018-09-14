#!/bin/bash

sed -nE "/^.$|(^.).*\1$/Ip" /usr/share/dict/words
