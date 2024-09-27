cat /etc/passwd | grep -v '^#' | sed -n '2~2p' | cut -d: -f1 | rev | sort -r | sed -n 7,15p | tr '
' ', ' | sed 's/\(.*\),/\1./' | sed 's/,/_, /g; s/,$/./'
