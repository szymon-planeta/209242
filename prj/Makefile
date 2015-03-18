 CPPFLAGS= -c -g -Iinc -Wall -pedantic

__start__: tabx2
	./tabx2 
obj:
	mkdir obj

tabx2: obj/main.o obj/tabx2.o obj/benchmark.o obj/generator.o
	g++ -Wall -pedantic -o tabx2 obj/main.o obj/tabx2.o obj/benchmark.o obj/generator.o
obj/main.o: src/main.cpp inc/tabx2.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp
obj/tabx2.o: src/tabx2.cpp inc/tabx2.hh
	g++ ${CPPFLAGS} -o obj/tabx2.o src/tabx2.cpp
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
 
