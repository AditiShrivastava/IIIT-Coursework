#!/bin/bash

ifconfig | grep -Ewo "([0-9a-f][0-9a-f]:){5}([0-9a-f][0-9a-f])"

