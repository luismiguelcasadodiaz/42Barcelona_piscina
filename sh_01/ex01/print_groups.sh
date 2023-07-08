#!/bin/sh
id -Gn $FT_USER | sed 's/ /,/g' | tr -d '\n' |tr -d '\r'
