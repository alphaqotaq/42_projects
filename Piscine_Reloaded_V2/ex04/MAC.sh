ifconfig -a | grep "ether " | rev | cut -c 2-18 | rev
