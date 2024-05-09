public class Calculation {
    float num1;
    float num2;
    
    public Calculation(float num1, float num2) {
        this.num1 = num1;
        this.num2 = num2;
    }
    
    float add() {
        return this.num1 + this.num2;
    }
    
    float subtract() {
        return this.num1 - this.num2;
    }
    
    float multiply() {
        return this.num1 * this.num2;
    }
    
    float divide() {
        return this.num1 / this.num2;
    }
}
