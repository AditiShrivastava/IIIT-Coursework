#!/bin/bash

sed -nE "/(^[^A-Z]{5}$|^[^A-Z]{10}$)/p" /usr/share/dict/words
