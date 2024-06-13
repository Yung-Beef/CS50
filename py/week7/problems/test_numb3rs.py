from numb3rs import validate

def validity():
    assert validate("123.123.123.123") == True
    assert validate("256.123.123.123") == False

def text_or_punct():
    assert validate("123doinks") == False
    assert validate("123.!23.123.123") == False
