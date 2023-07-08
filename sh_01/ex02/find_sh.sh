#!/bin/sh
find . -type f -name '*.sh' -print 2>/dev/null  |  sed 's/.*\///' | sed 's/\.sh//'
