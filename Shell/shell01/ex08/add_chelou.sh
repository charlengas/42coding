#!/bin/sh
FT_NBR1=$(printf '%s' "$FT_NBR1" | tr '\134\047\042\077\041' '01234')
FT_NBR2=$(printf '%s' "$FT_NBR2" | tr 'mrdoc' '01234')
echo 'obase=13; ibase=5; '"$FT_NBR1"' + '"$FT_NBR2" | bc | tr '0123456789ABC' 'gtaioluSnemf'
