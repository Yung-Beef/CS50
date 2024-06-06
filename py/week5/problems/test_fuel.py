import pytest
from fuel import convert
from fuel import gauge

def test_convert():
    with pytest.raises(ZeroDivisionError):
        convert(["10", "0"])
    with pytest.raises(ValueError):
        convert(["cat", "dog"])

def test_gauge():
    with pytest.raises(ValueError):
        gauge("dog")
    assert gauge(50.5) == f"{50.5}%"
