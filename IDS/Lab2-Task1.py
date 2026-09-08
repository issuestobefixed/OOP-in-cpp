class Book:
    
    def __init__(self, title, author, pages):
        self.title=title
        self.author=author
        self.pages=pages

    def display_info(self):
        print("Title:", self.title)
        print("Author:", self.author)
        print("Pages:", self.pages)

    def __str__(self):
        return f"'{self.title}' by {self.author} ({self.pages} pages)"


book1 = Book("Harry Potter", "J.K. Rowling", 309)
book2 = Book("To Kill A Mockingbird", "Harper Lee", 281)

book1.display_info()
book2.display_info()

print(book1)
print(book2)