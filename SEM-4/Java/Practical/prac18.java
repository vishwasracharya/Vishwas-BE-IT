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
import java.io.*;

public class prac18 {
	public static void main(String[] args) throws Exception {

		// Check if file exists
		//Create one txt file and write some sentances or numbers in that and change the file path according to your file location
		File textFile = new File("C:\\Users\\Meet\\Documents\\NetBeansProjects\\Firstdemo\\OOP-I.txt");
		if (!textFile.exists()) {
			System.out.println("The file " + args[0] + " does not exist.");
			System.exit(2);
		}

		// Create a set
		TreeSet<String> set = new TreeSet<>();

		// Read nonduplicate words from the file
		try ( // Create an input file 
			Scanner input = new Scanner(textFile);
		) {
			while (input.hasNext()) {
				String[] words = input.nextLine().split("[ \n\t\r.,;:!?()-]");
				for (String word: words) {
					if (word.length() > 0)
						set.add(word.toLowerCase());	
				}
			}
		}

		// Display nonduplicate word in ascending order
		System.out.println(set);
	}
}