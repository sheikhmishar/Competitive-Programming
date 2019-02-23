import java.util.Scanner;

public class salaryIncrease_1046{
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        double salary = keyboard.nextDouble();
        double incPerc = 0;
        if(salary >= 0 && salary <= 400.00)
            incPerc = 0.15;
        if(salary >= 400.01 && salary <= 800.00)
            incPerc = 0.12;
        if(salary >= 800.01 && salary <= 1200.00)
            incPerc = 0.10;
        if(salary >= 1200.01 && salary <= 2000.00)
            incPerc = 0.07;
        if(salary > 2000)
            incPerc = 0.04;
        double newMoney = (int)salary * incPerc;
        double newSalary = salary + newMoney;
        int finalPerc = (int)(incPerc * 100.00);
        System.out.printf("Novo salario: %.2f\n" , newSalary);
        System.out.printf("Reajuste ganho: %.2f\n" , newMoney);
        System.out.printf("Em percentual: %d %%\n" , finalPerc);
    }
}