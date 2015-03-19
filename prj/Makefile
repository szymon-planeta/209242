 CPPFLAGS= -c -g -Iinc -Wall -pedantic

__start__: structures
	./structures 
obj:
	mkdir obj

structures: obj/main.o obj/list.o obj/stack.o obj/queue.o obj/list_array.o obj/benchmark.o obj/generator.o
	g++ -Wall -pedantic -o structures obj/main.o obj/list.o obj/queue.o obj/list_array.o obj/stack.o obj/benchmark.o obj/generator.o
obj/main.o: src/main.cpp inc/list.hh inc/stack.hh inc/queue.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp
obj/list.o: src/list.cpp inc/list.hh 
	g++ ${CPPFLAGS} -o obj/list.o src/list.cpp
obj/list_array.o: src/list_array.cpp inc/list_array.hh 
	g++ ${CPPFLAGS} -o obj/list_array.o src/list_array.cpp
obj/stack.o: src/stack.cpp inc/stack.hh
	g++ ${CPPFLAGS} -o obj/stack.o src/stack.cpp
obj/queue.o: src/queue.cpp inc/queue.hh
	g++ ${CPPFLAGS} -o obj/queue.o src/queue.cpp
obj/benchmark.o: src/benchmark.cpp inc/benchmark.hh
	g++ ${CPPFLAGS} -o obj/benchmark.o src/benchmark.cpp
obj/generator.o: src/generator.cpp inc/generator.hh
	g++ ${CPPFLAGS} -o obj/generator.o src/generator.cpp
doc:
	cd ../dox; make
tex:
	cd ../dox/latex; make
clean:
	rm -f obj/*.o program1
help:
	@echo
	@echo "  Lista podcelow dla polecenia make"
	@echo 
	@echo "        - (wywolanie bez specyfikacji celu) wymusza"
	@echo "          kompilacje i uruchomienie programu."
	@echo "  clean - usuwa produkty kompilacji oraz program"
	@echo "  doc   - powoduje generowanie dokumentacji"
	@echo "  help  - wyswietla niniejszy komunikat"
	@echo
	@echo " Przykladowe wywolania dla poszczegolnych wariantow. "
	@echo "  make           # kompilacja i uruchomienie programu."
	@echo "  make clean     # usuwa produkty kompilacji."
	@echo "  make doc       # generuje dokumentacje w doc/html"
	@echo
 
