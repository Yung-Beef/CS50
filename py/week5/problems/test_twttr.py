from twttr import shorten

def test_short():
    assert shorten("David") == "Dvd"
    assert shorten("Hillary Clinton") == "Hllry Clntn"

def test_int():
    assert shorten("-5") == "-5"
    assert shorten("0") == "0"
    assert shorten("5") == "5"

def test_punct():
    assert shorten("!!") == "!!"
    assert shorten("@#") == "@#"
