import 'package:flutter/material.dart';
import 'package:flutter_application_test/home.dart';
import 'package:introduction_screen/introduction_screen.dart';
void main() {
  runApp(MaterialApp(
  title: 'Your title',
  home: MyApp(),));}

class MyApp extends StatelessWidget {
  List<PageViewModel> getPages(){
    return [
      PageViewModel(
        image: Image.network(
          'https://github.com/amfoss/tasks/raw/main/task-6/resources/page1.png'
        ),
        title: 'YOGA SURGE',
        body: 'Welcome to yoga world',
        footer: Text('Inhale the future, exhale the past'),
      ),

       PageViewModel(
        image: Image.network(
          'https://github.com/amfoss/tasks/raw/main/task-6/resources/page2.png'
        ),
        title: 'Healthy Freaks Exercises',
        body: 'Letting go is the hardest asana',
      ),

       PageViewModel(
        image: Image.network(
          'https://github.com/amfoss/tasks/raw/main/task-6/resources/page3.png'
        ),
        title: 'Cycling',
        body: 'You cannot always control what goes on outside. But you can always control what goes on inside',
      ),

       PageViewModel(
        image: Image.network(
          'https://github.com/amfoss/tasks/raw/main/task-6/resources/page4.png'
        ),
        title: 'Meditation',
        body: 'The longest journey of any person is the journey inward.',
      ),

    ];
    
  }
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home:  Scaffold(
        body: IntroductionScreen(
          done: Text(
            'Get Started',
            style: TextStyle(
              color: Colors.black,
            ),
          ),
          

          onDone: () {
            Navigator.push(
              context,
              MaterialPageRoute(
                builder: (_) => HomeScreen(),
              ),
            );
          },
          showSkipButton: true,
          skip: const Text("Skip"),
          skipColor: Colors.green,
          pages: getPages(),
          globalBackgroundColor: Colors.brown[100],
          next: Text('Next')
        ),
      ),
    );
  }
}  