G = g++
GFLAGS = -Wall -pedantic -g -std=c++11 -Iinc
ALLFILES = obj/tabl.o obj/stos.o obj/kolejka.o inc/stos.hh inc/kolejka.hh obj/run.o src/main.cpp inc/tabl.hh inc/main.hh inc/run.hh inc/stoper.hh obj/stoper.o inc/starter.hh obj/starter.o

tabl: obj $(ALLFILES)
	$(G) $(GFLAGS) ./obj/tabl.o ./obj/stos.o ./obj/kolejka.o ./obj/run.o ./obj/stoper.o ./obj/starter.o ./src/main.cpp -o tabl

obj:
	mkdir obj

obj/starter.o: src/starter.cpp inc/starter.hh src/stoper.cpp inc/stoper.hh src/run.cpp inc/run.hh
	$(G) $(GFLAGS) -c ./src/starter.cpp -o ./obj/starter.o

obj/run.o: src/run.cpp inc/run.hh src/tabl.cpp inc/tabl.hh
	$(G) $(GFLAGS) -c ./src/run.cpp -o ./obj/run.o

obj/tabl.o: src/tabl.cpp inc/tabl.hh inc/main.hh
	$(G) $(GFLAGS) -c ./src/tabl.cpp -o ./obj/tabl.o

obj/stos.o: src/stos.cpp inc/stos.hh inc/Istos.hh
		$(G) $(GFLAGS) -c ./src/stos.cpp -o ./obj/stos.o

obj/kolejka.o: src/kolejka.cpp inc/kolejka.hh inc/Ikolejka.hh
		$(G) $(GFLAGS) -c ./src/kolejka.cpp -o ./obj/kolejka.o

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	$(G) $(GFLAGS) -c ./src/stoper.cpp -o ./obj/stoper.o

clean:
	rm -fr ./obj/*.o tabl

start:
	./tabl

remake:
	rm -fr ./obj/*.o tabl
	make
