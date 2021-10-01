
package firstdemo;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.shape.Circle;
import javafx.scene.layout.Pane;
import javafx.geometry.Insets;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class prac13 extends Application {
	@Override 
	public void start(Stage primaryStage) {
		// Create a pane
		 StackPane pane = new StackPane();  
              
		pane.setPadding(new Insets(10, 10, 10, 10));
		// Create a circle
		Circle circle = new Circle(20, 20, 20);
		pane.getChildren().add(circle);
                

		// Create and register the handle
		pane.setOnKeyPressed(e -> {
			switch (e.getCode()) {
				case UP : circle.setCenterY(circle.getCenterY() > 
					circle.getRadius() ? circle.getCenterY() - 10 :
					circle.getCenterY()); break;
				case DOWN : circle.setCenterY(circle.getCenterY() < 
					pane.getHeight() - circle.getRadius() ? 
					circle.getCenterY() + 10 : circle.getCenterY()); 
					break;
				case LEFT : circle.setCenterX(circle.getCenterX() >
					circle.getRadius() ? circle.getCenterX() - 10 :
					circle.getCenterX()); break;
				case RIGHT : circle.setCenterX(circle.getCenterX() <
					pane.getWidth() - circle.getRadius() ?
					circle.getCenterX() + 10: circle.getCenterX());
			}
		});

		// Create a scene and place it in the stage
		Scene scene = new Scene(pane, 300, 200);
		primaryStage.setTitle("Circle"); // Set the stage title
		primaryStage.setScene(scene); // Place the scene in the stage
		primaryStage.show(); // Display the stage

		pane.requestFocus();
	}
public static void main(String args[]){ 
      launch(args); 
   } 
}
