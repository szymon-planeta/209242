set terminal png
set output "plot.png"
set title "Wykres założoności obliczeniowej"
set ylabel "Liczba danych"
set xlabel "Czas [s]"
set key at 50,112
set style line 1 lc rgb '#0060ad' lt 1 lw 2 pt 7 ps 1.5   # --- blue
plot "./data.dat" with linespoints ls 1
