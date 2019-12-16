class Person:
    def __init__(self, firstName, lastName, idNumber):
        self.firstName = firstName
        self.lastName = lastName
        self.idNumber = idNumber

    def printPerson(self):
        print("Name:", self.lastName + ",", self.firstName)
        print("ID:", self.idNumber)


class Student(Person):
    #   Class Constructor
    #
    #   Parameters:
    #   firstName - A string denoting the Person's first name.
    #   lastName - A string denoting the Person's last name.
    #   id - An integer denoting the Person's ID number.
    #   scores - An array of integers denoting the Person's test scores
    def __init__(self, firstName, lastName, idNumber, testScores):
        super().__init__(firstName, lastName, idNumber)
        self.scores = testScores

    #   Function Name: calculate
    #   Return: A character denoting the grade
    def calculate(self):
        average = 0.0
        for testScore in self.scores:
            average += testScore

        outputChar = ' '

        average = average / len(self.scores)

        if(average >= 90 and average <= 100):
            outputChar = 'O'

        elif(average >= 80 and average < 90):
            outputChar = 'E'

        elif(average >= 70 and average < 80):
            outputChar = 'A'

        elif(average >= 55 and average < 70):
            outputChar = 'P'

        elif(average >= 40 and average < 55):
            outputChar = 'D'

        elif(average < 40):
            outputChar = 'T'

        return outputChar


line = input().split()
firstName = line[0]
lastName = line[1]
idNum = line[2]
numScores = int(input())
scores = list(map(int, input().split()))
s = Student(firstName, lastName, idNum, scores)
s.printPerson()
print("Grade:", s.calculate())
