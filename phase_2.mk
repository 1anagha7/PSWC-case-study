a.exe: mainfile.o student_info.o calc_grade.o
	gcc mainfile.o student_info.o calc_grade.o
	
mainfile.o: mainfile.c student_info.h
	gcc -c mainfile.c

student_info.o: student_info.c student_info.h
	gcc -c student_info.c
calc_grade.o: calc_grade.c student_info.h
	gcc -c calc_grade.c
