cat /etc/passwd | sed -e '/^#/d' -e 's/:*:.*//g'
