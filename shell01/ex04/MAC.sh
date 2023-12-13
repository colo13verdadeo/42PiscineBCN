ifconfig -a | grep -Eo "(\s+[0-9a-f:]{15})\w+" | tr -d " "
