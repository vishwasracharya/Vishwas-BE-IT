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

import java.util.*;
public class prac9 {
	/** Main method */
	public static void main(String[] args) {
		// Create a Random object with seed 1000
		Random randomNumber = new Random(1000);

		// Displays the first 100 random integers between 0 and 49
		for (int i = 1; i <= 100; i++) {
			if (i % 10 == 0)
				System.out.printf("%5d\n", randomNumber.nextInt(49));
			else
				System.out.printf("%5d", randomNumber.nextInt(49));
		}
	}
}
