build:
	@gcc hello_world.c -o ./hello
	@echo "Done"

run:
	@gcc hello_world.c -o ./hello && ./hello