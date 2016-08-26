all:
	gcc -Iinclude/platform -Iinclude/hal/cc254x  -Iinclude/drivers/cc254x  -o cc2540 boot/cc254x/*.c hal/cc254x/*.c drivers/cc254x/*.c lock/*.c

clean:
	rm -rf cc2540

