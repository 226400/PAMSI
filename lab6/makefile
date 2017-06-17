p: obj/main.o obj/tree.o
	g++ -o p obj/main.o obj/tree.o
obj/main.o: src/main.cpp src/tree.cpp inc/tree.hh inc/tree_node.hh inc/stoper.hh
	g++ -Iinc -c -Wall -pedantic -std=c++11 src/main.cpp -o obj/main.o
obj/tree.o: src/tree.cpp inc/tree.hh inc/tree_node.hh
	g++ -Iinc -c -Wall -pedantic -std=c++11 src/tree.cpp -o obj/tree.o
obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -Iinc -c -Wall -pedantic -std=c++11 src/stoper.cpp -o obj/stoper.o
clean:
	rm -r obj/*.o p
