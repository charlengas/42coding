#!/bin/sh
ifconfig -a | grep ether | awk "{print \$2}"
