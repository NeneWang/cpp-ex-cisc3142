


exam-nelson:
	make compile-fr dir=exam f=try-catch

c6nt:
	make compile-fr dir=ch-6 f=test_unit

c6n:
	make compile-fr dir=ch-6 f=test
	make compile-fr dir=ch-6 f=ex6
	make compile-fr dir=ch-6 f=ex10
	make compile-fr dir=ch-6 f=ex12
	make compile-fr dir=ch-6 f=ex24

save:
	git add --all
	git commit -m "Random Progress form Nelson :tada:"
	git pull
	git push origin HEAD

compile-farg: 
	cd ${dir} && g++ ${f}.cpp -o ${f}.o
	cd ${dir} && ${f}.o < inputfile
	


compile-fr: 
	cd ${dir} && g++ ${f}.cpp -o ${f}.o
	cd ${dir} && ${f}.o

compile-fin: 
	cd ${dir} && g++ ${f}.cpp -o ${f}.o
	cd ${dir} && ${f}.o < ${inputfile}