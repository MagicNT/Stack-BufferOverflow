all:
	gcc -fno-stack-protector vuln.c -o vuln -z execstack -D_FORTIFY_SOURCE=0 -no-pie
clean:
	rm vuln

