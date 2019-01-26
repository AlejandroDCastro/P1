// 4. Ejercicio resuelto 3. Repasa

void ordenarAlumnos(TAlumnos alumnos,int numAlumnos) {
	int resultado_comparacion;
	TFichaAlumno aux;
	
	for(int i=0; i<numAlumnos; i++)
		for(int j=numAlumnos-1; j>=i; j--) {
			resultado_comparacion=strcmp(alumnos[j].nombre,alumnos[j-1].nombre);
			if(resultado_comparacion>0) {
				aux=alumnos[j-1];
				alumnos[j-1]=alumnos[j];
				alumnos[j]=alumnos[j-1];
			}
		}
}