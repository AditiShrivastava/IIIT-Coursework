#!/bin/bash

sed -nE "/.{20,}/p" /usr/share//dict/words
