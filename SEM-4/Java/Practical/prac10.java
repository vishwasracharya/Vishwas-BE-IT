/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//package firstdemo;

import java.util.ArrayList;
import java.util.Date;

public class prac10 {
	
	public static void main(String[] args) {
		// Create an array list of objects
		ArrayList<Object> o = new ArrayList<Object>();
		o.add(new Loan());		
		o.add(new Date());		
		o.add(new String("String class"));	
		o.add(new Circle(2));	

		// Display all the elements in the list by 
		// invoking the object’s toString() method
		for (int i = 0; i < o.size(); i++) {
			System.out.println((o.get(i)).toString());
		}
	}
	public static class Circle {
	/** The radius of the circle */
	private double radius = 1;


	/** Construct a circle with a specified radius */
	public Circle(double newRadius) {
		radius = newRadius;
		System.out.println("Circle Radius=" +radius);
	}

	
}
public static class Loan {
	private double annualInterestRate;
	private int numberOfYears;
	private double loanAmount;
	

	/** Default constructor */
	public Loan() {
		this(2.5, 1, 1000);
	}

	
	public Loan(double annualInterestRate, int numberOfYears,
		double loanAmount) {
		this.annualInterestRate = annualInterestRate;
		this.numberOfYears = numberOfYears;
		this.loanAmount = loanAmount;
                System .out .println("Loan Intrest Rate " + annualInterestRate +"%");
                System .out .println("Loan Duration " + numberOfYears + "Years");
                System .out .println("Loan amount " + loanAmount);
		//loanDate = new java.util.Date();
	}

	
}
}