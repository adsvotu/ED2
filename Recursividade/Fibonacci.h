
class Fibonacci
{
  
public:
  void interativo(int repeticao);
  void recursivo(int repeticao);
  
  
  
  private:
    static int fibonacci(int) {
		if (valor<2){
		return valor;
		
		} else {
		  return  fibonacci( (valor - 1) ) + fibonacci( (valor – 2) )  ;
		}	
    	
	}
  
};

