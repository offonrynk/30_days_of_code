#include <iostream>
#include <string>
#include <vector>

class Person {
protected:
  std::string firstName;
  std::string lastName;
  int id;

public:
  Person(std::string firstName, std::string lastName, int identification)
  {
    this->firstName = firstName;
    this->lastName = lastName;
    this->id = identification;
  }
  void printPerson()
  {
    std::cout << "Name: " << lastName << ", " << firstName << "\nID: " << id
              << std::endl;
  }
};

class Student : public Person {
private:
  std::vector<int> testScores;
  int numOfTestScores = 0;
  int sum = 0;
  double average = 0;

public:
  Student(std::string firstName, std::string LastName, int id,
          std::vector<int> scores)
      : Person(firstName, LastName, id)
  {
    this->testScores = scores;
    this->numOfTestScores = scores.size();
  }

  char calculate()
  {
    char outputChar;
    for (unsigned int i = 0; i < numOfTestScores; ++i) {
      sum += testScores[i];
    }

    average = sum / numOfTestScores;
    if (average >= 90 && average <= 100)
      outputChar = 'O';

    else if (average >= 80 && average < 90)
      outputChar = 'E';

    else if (average >= 70 && average < 80)
      outputChar = 'A';

    else if (average >= 55 && average < 70)
      outputChar = 'P';

    else if (average >= 40 && average < 55)
      outputChar = 'D';

    else if (average < 40)
      outputChar = 'T';

    return outputChar;
  }
};

int main()
{
  std::string firstName;
  std::string lastName;
  int id = 0;
  int numScores = 0;
  std::cin >> firstName >> lastName >> id >> numScores;

  std::vector<int> scores;
  for (int i = 0; i < numScores; i++) {
    int tmpScore;
    std::cin >> tmpScore;
    scores.push_back(tmpScore);
  }

  Student *s = new Student(firstName, lastName, id, scores);
  s->printPerson();
  std::cout << "Grade: " << s->calculate() << std::endl;

  return 0;
}
