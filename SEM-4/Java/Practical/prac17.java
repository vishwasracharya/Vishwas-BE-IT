/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package firstdemo;

/**
 *
 * @author Meet
 */
import java.util.Scanner;

public class prac17 {
	
	public static void main(String[] args) {
		// Create a Scanner
                 double product= 1;
		Scanner input = new Scanner(System.in);

		// Prompt the user to enter a list of eight integers
		System.out.print("Enter eight integers: ");
		int[] list = new int[8]; // Create array of eight integers
		for (int i = 0; i < list.length; i++) {
			list[i] = input.nextInt();
                       product= product * list [i];
		}

		// Display the largest element
		System.out.println("The smallest element is " + min(list));
                System.out.println("Product is" + product);
	}

        
	/** Method finds the largest number in an array */ 
	public static int min(int[] list) {
		int min = list[list.length - 1]; // Largest number
		int index = list.length - 1; // List index
		return min(list, index, min);
	}

	/** Overloaded helper method */
	private static int min(int[] list, int index, int min) {
		if (index < 0) // Base case
			return min;
		else if (list[index] < min) { 
			return min(list, index - 1, list[index]); // Recursive call
		}
		else
			return min(list, index - 1, min); // Recursive call
	}
}
