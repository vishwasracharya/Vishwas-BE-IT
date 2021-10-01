/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package firstdemo;

/**
 *
 * @author Meet
 * This program will create the new txt file name as 123.txt in the same directory where you store this program.
 */
import java.io.*;
import java.util.Scanner;

public class prac16 {
  public static void main(String[] args) {
	System.out.println("This program will create a new txt file name as 123.txt in the same directory where you store this program.");
    try (
      PrintWriter pw = new PrintWriter(new FileOutputStream(new File("123.txt"), true));
    ) {
      for (int i = 0; i < 150; i++) {
        pw.print((int)(Math.random() * 100) + " ");
      }
    } 
    catch (FileNotFoundException fnfe) {
      System.out.println("Cannot create the file.");
      fnfe.printStackTrace();
    }
  }
}