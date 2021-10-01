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

public class prac8 {
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);	// Create a Scanner
		int[] numbers = new int[10];	// Create an array of length ten

		// Prompt the user to enter ten numbers
		System.out.print("Enter ten numbers: ");
		for (int i = 0; i < numbers.length; i++)
			numbers[i] = input.nextInt();

		// Invoke the method to reverse the numbers
		reverse(numbers);

		// Display the numbers
		for (int e: numbers) {
			System.out.print(e + " ");
		}
		System.out.println();
	}

	/** Method reverse reverses the array passed in the argument */
	public static void reverse(int[] list) {
		int temp;
		for (int i = 0, j = list.length - 1; i < list.length / 2; i++, j--) {
			temp = list[i];
			list[i] = list[j];
			list[j] = temp;
		}
	}
}
