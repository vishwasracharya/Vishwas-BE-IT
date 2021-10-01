/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package firstdemo;

import java.util.*;
public class prac11 {
	public static int bin2Dec(String binaryString) throws NumberFormatException {
		int decimal = 0;
		for (int i = 0, j = binaryString.length() - 1; i < binaryString.length(); i++, j--) {
			if (binaryString.charAt(i) < '0' || binaryString.charAt(i) > '1')
				throw new NumberFormatException("The string is not a binary string");
			decimal += (Integer.parseInt(String.valueOf(binaryString.charAt(i)))) 
				* Math.pow(2, j);
		}
		 System. out. println(decimal);
                return decimal;
               
	} 
        
        
	public static void main(String ar[])
	{
	Scanner sc= new Scanner(System.in);
	System.out.println("Enter String");
  
        String str = sc.nextLine();
        //System. out. println(str);
        bin2Dec(str);
        
	}
}
	