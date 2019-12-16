#include <iostream>
#include <string>

class Book {
protected:
  std::string title;
  std::string author;

public:
  Book(std::string t, std::string a)
  {
    title = t;
    author = a;
  }
  virtual void display() = 0;
};

class MyBook : public Book {

public:
  MyBook(std::string title, std::string author, double price)
      : Book(title, author)
  {
    m_price = price;
  }

  void display()
  {
    std::cout << "Title: " << title << '\n';
    std::cout << "Author: " << author << '\n';
    std::cout << "Price: " << m_price << std::endl;
  }

private:
  double m_price;
};

int main()
{
  std::string title, author;
  int price;
  getline(std::cin, title);
  getline(std::cin, author);
  std::cin >> price;

  MyBook novel(title, author, price);
  novel.display();

  return 0;
}
