import pytest
from pytest_embedded_idf.dut import IdfDut

def test_unit_test(dut: IdfDut) -> None:
    dut.expect("Hello World.")
