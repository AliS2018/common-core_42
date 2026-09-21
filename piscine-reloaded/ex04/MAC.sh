ifconfig | grep ether | awk '{print $2}' | tr -d ' '
