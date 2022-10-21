
c&r:
	make compile-c f=ex6.3cesar
	make compile-c f=ex6.4cesar
	make compile-c f=ex6.5cesar
	make compile-c f=ex6.7cesar


	make compile-fr f=functionTest

save:
	git add --all
	git commit -m "Updated by César"
	git pull
	git push origin HEAD


compile-c: 
	g++ -c ${f}.cpp


compile-fr: 
	g++ ${f}.cpp -o ${f}.exe 
	./${f}.exe


compile-fin: 
	cd ${dir} && g++ ${f}.cpp -o ${f} 
	cd ${dir} && ./${f} < ${inputfile}


delexe:
	rm *.o
	rm *.exe
	rm *.out