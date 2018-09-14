#!/bin/bash

# use script as : ./open <Input file>
if [ -f $1 ] ; then
case $1 in
*.tar) tar xf $1 ;;
*.tar.gz) tar xzvf $1 ;;
*.tar.bz2) tar xjvf $1 ;;
*.bz2) bunzip2 $1 ;;
*.gz) gunzip $1 ;;
*.rar) rar x $1 ;;
*.zip) unzip $1 ;;
*.7z) 7z x $1 ;;
*) echo "'$1' is not a valid compressed file!!!" ;;
esac

else
echo "'$1' is not a valid file"
fi
