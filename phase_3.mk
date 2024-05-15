a.exe: mainfile.o student_info.o calc_grade.o search.o edit_data.o
	gcc mainfile.o student_info.o calc_grade.o search.o edit_data.o
	
mainfile.o: mainfile.c student_info.h
	gcc -c mainfile.c
student_info.o: student_info.c student_info.h
	gcc -c student_info.c
calc_grade.o: calc_grade.c student_info.h
	gcc -c calc_grade.c
search.o: search.c student_info.h
	gcc -c search.c
edit_data.o: edit_data.c student_info.h
	gcc -c edit_data.c