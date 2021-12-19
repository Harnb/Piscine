ifconfig -a | grep -o 'ether .*' | sed 's/ether //g'
