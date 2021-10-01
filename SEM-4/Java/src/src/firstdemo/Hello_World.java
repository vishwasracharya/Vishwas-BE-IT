/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package firstdemo;

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.stage.Stage;
import javafx.scene.layout.StackPane;

public class Hello_World extends Application {

    @Override
    public void start(Stage primaryStage) throws Exception {
        // TODO Auto-generated method stub  
        Button btn1 = new Button("Click Me");
        btn1.setOnAction(new EventHandler<ActionEvent>() {

            @Override
            public void handle(ActionEvent arg0) {
                // TODO Auto-generated method stub  
                System.out.println("HELLO");
            }
        });
        StackPane root = new StackPane();
        root.getChildren().add(btn1);
        Scene scene = new Scene(root, 600, 400);
        primaryStage.setTitle("First JavaFX Application");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }

}
