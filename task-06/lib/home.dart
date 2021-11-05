import 'package:flutter/material.dart';

class HomeScreen extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Welcome"),
        backgroundColor: Colors.brown[100],
      ),
        body: new Container(
          color: Colors.grey[200],
          child: Column(
        children: <Widget>[
        Row(
          mainAxisAlignment: MainAxisAlignment.spaceAround,
          children: [
            Expanded(
              child: Column(children: <Widget>[
                new Image.network('https://github.com/amfoss/tasks/raw/main/task-6/resources/welcome.png',),
                Text(
                  'Nayan',
                  style: TextStyle(
                fontWeight: FontWeight.bold,
                fontSize: 35,)
                ),
                Text(''),
                Text(
                  'Pursuing Btech in CSE AI at Amrita University, Amritapuri',
                  style: TextStyle(
                    fontSize: 20,),
                    textAlign: TextAlign.center,
                ),
              ],)
            ),
          ],
        ),])
        ),
      
      
    );
    
  }
}