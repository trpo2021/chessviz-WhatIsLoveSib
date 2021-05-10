all: bin/chessgame

bin/chessgame: obj/chessviz.o obj/staticlib.a
	gcc -Werror -I src -Wall -o bin/chessgame obj/chessviz.o obj/staticlib.a
obj/chessviz.o: src/chessviz/chessviz.c 
	gcc -Werror -Wall -c -I src -o obj/chessviz.o src/chessviz/chessviz.c
obj/print_board.o: src/libchessviz/print_board.c 
	gcc -Werror -Wall -c -I src -o obj/print_board.o src/libchessviz/print_board.c
obj/move_figures.o: src/libchessviz/move_figures.c 
	gcc -Werror -Wall -c -I src -o obj/move_figures.o src/libchessviz/move_figures.c
obj/staticlib.a: obj/print_board.o obj/move_figures.o
	ar rcs obj/staticlib.a obj/print_board.o obj/move_figures.o
.PHONY : clean
clean :
	rm -rf obj/*.o obj/*.a bin/chessgame