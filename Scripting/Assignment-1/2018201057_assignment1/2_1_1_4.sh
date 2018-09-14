#!/bin/bash

sed -nE '/.*a{2,}.*/Ip' /usr/share//dict/words
